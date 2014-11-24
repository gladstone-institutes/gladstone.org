<?php
/**
 * @file: tweet.inc
 * @author: Duynv
 * Date: 8/17/13
 */
@include_once(drupal_get_path("module", "md_megamenu") . "/includes/tmhOAuth.php");
@include_once(drupal_get_path("module", "md_megamenu") . "/includes/tmhUtilities.php");

class Tweet {
    // Your Twitter App Consumer Key
    private $consumer_key;

    // Your Twitter App Consumer Secret
    private $consumer_secret;

    // Your Twitter App Access Token
    private $user_token;

    // Your Twitter App Access Token Secret
    private $user_secret;

    // Enable caching
    private $cache_enabled = TRUE;

    // Cache interval (minutes)
    private $cache_interval = 15;

    // Path to writable cache directory
    private $cache_dir = "public://tweet_cache/";

    // Enable debugging
    private $debug = false;


    public function __construct($config = array()) {
        $this->consumer_key = isset($config["app_key"]) ? $config["app_key"] : "";
        $this->consumer_secret = isset($config["app_secret"]) ? $config["app_secret"] : "";
        $this->user_token = isset($config["access_token"]) ? $config["access_token"] : "";
        $this->user_secret = isset($config["access_secret"]) ? $config["access_secret"] : "";

        // Check cache dir
        if (!is_dir($this->cache_dir))
            mkdir($this->cache_dir, 0777, true);

        // Set server-side debug params
        $this->message = "";
        if ($this->debug === true)
            error_reporting(-1);
        else
            error_reporting(0);
    }

    public function fetch() {
        drupal_json_output(
            array(
                 'response' => json_decode($this->getJSON(), TRUE),
                 'message' => ($this->debug) ? $this->message : FALSE
            )
        );
    }

    private function getJSON() {
        if ($this->cache_enabled === TRUE) {
            $CFID = $this->generateCFID();
            $cache_file = $this->cache_dir . $CFID;

            if (file_exists($cache_file) && (filemtime($cache_file) > (time() - 60 * intval($this->cache_interval)))) {
                return file_get_contents($cache_file, FILE_USE_INCLUDE_PATH);
            } else {

                $JSONraw = $this->getTwitterJSON();
                $JSON = $JSONraw['response'];

                // Don't write a bad cache file if there was a CURL error
                if ($JSONraw['errno'] != 0) {
                    $this->consoleDebug($JSONraw['error']);
                    return $JSON;
                }

                if ($this->debug === TRUE) {
                    // Check for twitter-side errors
                    $pj = json_decode($JSON, TRUE);
                    if (isset($pj['errors'])) {
                        foreach ($pj['errors'] as $error) {
                            $message = 'Twitter Error: "' . $error['message'] . '", Error Code #' . $error['code'];
                            $this->consoleDebug($message);
                        }
                        return FALSE;
                    }
                }

                if (is_writable($this->cache_dir) && $JSONraw) {
                    if (file_put_contents($cache_file, $JSON, LOCK_EX) === FALSE) {
                        $this->consoleDebug("Error writing cache file");
                    }
                } else {
                    $this->consoleDebug("Cache directory is not writable");
                }
                return $JSON;
            }
        } else {
            $JSONraw = $this->getTwitterJSON();

            if ($this->debug === TRUE) {
                // Check for CURL errors
                if ($JSONraw['errno'] != 0) {
                    $this->consoleDebug($JSONraw['error']);
                }

                // Check for twitter-side errors
                $pj = json_decode($JSONraw['response'], TRUE);
                if (isset($pj['errors'])) {
                    foreach ($pj['errors'] as $error) {
                        $message = 'Twitter Error: "' . $error['message'] . '", Error Code #' . $error['code'];
                        $this->consoleDebug($message);
                    }
                    return FALSE;
                }
            }
            return $JSONraw['response'];
        }
    }

    private function getTwitterJSON() {
        $tmhOAuth = new tmhOAuth(array(
                                      'host' => $_POST['request']['host'],
                                      'consumer_key' => $this->consumer_key,
                                      'consumer_secret' => $this->consumer_secret,
                                      'user_token' => $this->user_token,
                                      'user_secret' => $this->user_secret,
                                      'curl_ssl_verifypeer' => FALSE
                                 ));

        $url = $_POST['request']['url'];
        $params = $_POST['request']['parameters'];

        $tmhOAuth->request('GET', $tmhOAuth->url($url), $params);
        return $tmhOAuth->response;
    }

    private function generateCFID() {
        // The unique cached filename ID
        return md5(serialize($_POST)) . '.json';
    }

    private function consoleDebug($message) {
        if ($this->debug === TRUE) {
            $this->message .= 'tweet.js: ' . $message . "\n";
        }
    }
}