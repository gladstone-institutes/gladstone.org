<?php
/**
 * @file
 * base.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function base_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -8,
    'filters' => array(
      'htmlpurifier' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'htmlpurifier_config_name' => 'htmlpurifier_advanced',
          'htmlpurifier_help' => 1,
          'htmlpurifier_filter_tips' => 'HTML tags will be transformed to conform to HTML standards.',
          'htmlpurifier_config' => array(
            'Null_Attr.AllowedClasses' => 1,
            'Attr.AllowedFrameTargets' => '',
            'Attr.AllowedRel' => '',
            'Attr.AllowedRev' => '',
            'Null_Attr.ClassUseCDATA' => 1,
            'Null_Attr.DefaultImageAlt' => 1,
            'Attr.DefaultInvalidImage' => '',
            'Attr.DefaultInvalidImageAlt' => 'Invalid image',
            'Attr.DefaultTextDir' => 'ltr',
            'Attr.EnableID' => 0,
            'Attr.ForbiddenClasses' => '',
            'Attr.IDBlacklist' => '',
            'Null_Attr.IDBlacklistRegexp' => 1,
            'Attr.IDPrefix' => '',
            'Attr.IDPrefixLocal' => '',
            'AutoFormat.AutoParagraph' => 1,
            'AutoFormat.Custom' => '',
            'AutoFormat.DisplayLinkURI' => 0,
            'AutoFormat.Linkify' => 1,
            'AutoFormat.PurifierLinkify.DocURL' => '#%s',
            'AutoFormat.PurifierLinkify' => 0,
            'AutoFormat.RemoveEmpty.RemoveNbsp.Exceptions' => 'td
th',
            'AutoFormat.RemoveEmpty.RemoveNbsp' => 0,
            'AutoFormat.RemoveEmpty' => 0,
            'AutoFormat.RemoveSpansWithoutAttributes' => 0,
            'CSS.AllowImportant' => 0,
            'CSS.AllowTricky' => 0,
            'Null_CSS.AllowedFonts' => 1,
            'Null_CSS.AllowedProperties' => 1,
            'CSS.ForbiddenProperties' => '',
            'CSS.MaxImgLength' => '1200px',
            'CSS.Proprietary' => 0,
            'CSS.Trusted' => 0,
            'Cache.DefinitionImpl' => 'Drupal',
            'Null_Cache.SerializerPath' => 1,
            'Cache.SerializerPermissions' => 493,
            'Core.AggressivelyFixLt' => 1,
            'Core.AllowHostnameUnderscore' => 0,
            'Core.CollectErrors' => 0,
            'Core.ColorKeywords' => 'maroon:#800000
red:#FF0000
orange:#FFA500
yellow:#FFFF00
olive:#808000
purple:#800080
fuchsia:#FF00FF
white:#FFFFFF
lime:#00FF00
green:#008000
navy:#000080
blue:#0000FF
aqua:#00FFFF
teal:#008080
black:#000000
silver:#C0C0C0
gray:#808080
',
            'Core.ConvertDocumentToFragment' => 1,
            'Core.DirectLexLineNumberSyncInterval' => 0,
            'Core.DisableExcludes' => 0,
            'Core.EnableIDNA' => 0,
            'Core.Encoding' => 'utf-8',
            'Core.EscapeInvalidChildren' => 0,
            'Core.EscapeInvalidTags' => 0,
            'Core.EscapeNonASCIICharacters' => 0,
            'Core.HiddenElements' => 'script
style',
            'Core.Language' => 'en',
            'Null_Core.LexerImpl' => 1,
            'Null_Core.MaintainLineNumbers' => 1,
            'Core.NormalizeNewlines' => 1,
            'Core.RemoveInvalidImg' => 1,
            'Core.RemoveProcessingInstructions' => 0,
            'Null_Core.RemoveScriptContents' => 1,
            'Filter.Custom' => '',
            'Filter.ExtractStyleBlocks.Escaping' => 1,
            'Null_Filter.ExtractStyleBlocks.Scope' => 1,
            'Null_Filter.ExtractStyleBlocks.TidyImpl' => 1,
            'Filter.ExtractStyleBlocks' => 0,
            'Filter.YouTube' => 0,
            'Null_HTML.Allowed' => 1,
            'Null_HTML.AllowedAttributes' => 1,
            'HTML.AllowedComments' => '',
            'Null_HTML.AllowedCommentsRegexp' => 1,
            'Null_HTML.AllowedElements' => 1,
            'Null_HTML.AllowedModules' => 1,
            'HTML.Attr.Name.UseCDATA' => 0,
            'HTML.BlockWrapper' => 'p',
            'HTML.CoreModules' => 'Structure
Text
Hypertext
List
NonXMLCommonAttributes
XMLCommonAttributes
CommonAttributes',
            'Null_HTML.CustomDoctype' => 1,
            'HTML.Doctype' => 'XHTML 1.0 Transitional',
            'HTML.FlashAllowFullScreen' => 0,
            'HTML.ForbiddenAttributes' => '',
            'HTML.ForbiddenElements' => '',
            'HTML.MaxImgLength' => 1200,
            'HTML.Nofollow' => 0,
            'HTML.Parent' => 'div',
            'HTML.Proprietary' => 0,
            'HTML.SafeEmbed' => 1,
            'HTML.SafeIframe' => 1,
            'HTML.SafeObject' => 1,
            'HTML.SafeScripting' => '',
            'HTML.Strict' => 0,
            'HTML.TargetBlank' => 0,
            'HTML.TidyAdd' => '',
            'HTML.TidyLevel' => 'medium',
            'HTML.TidyRemove' => '',
            'HTML.Trusted' => 0,
            'HTML.XHTML' => 1,
            'Output.CommentScriptContents' => 1,
            'Output.FixInnerHTML' => 1,
            'Output.FlashCompat' => 0,
            'Null_Output.Newline' => 1,
            'Output.SortAttr' => 0,
            'Output.TidyFormat' => 0,
            'Test.ForceNoIconv' => 0,
            'URI.AllowedSchemes' => 'http
https
mailto
ftp
nntp
news',
            'Null_URI.Base' => 1,
            'URI.DefaultScheme' => 'http',
            'URI.Disable' => 0,
            'URI.DisableExternal' => 0,
            'URI.DisableExternalResources' => 0,
            'URI.DisableResources' => 0,
            'URI.Host' => 'localhost',
            'URI.HostBlacklist' => '',
            'URI.MakeAbsolute' => 0,
            'Null_URI.Munge' => 1,
            'URI.MungeResources' => 0,
            'Null_URI.MungeSecretKey' => 1,
            'URI.OverrideAllowedSchemes' => 1,
            'URI.SafeIframeRegexp' => '%^http://(www.youtube.|player.vimeo.|maps.google.|www.slideshare.)%',
          ),
        ),
      ),
      'media_filter' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'settings_source' => 'global',
          'local_paths' => '',
          'protocol_style' => 'full',
          'local_settings' => array(
            'protocol_style' => 'full',
            'local_paths' => '',
          ),
        ),
      ),
    ),
  );

  // Exported format: Limited HTML.
  $formats['limited_html'] = array(
    'format' => 'limited_html',
    'name' => 'Limited HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'filter_autop' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'htmlpurifier' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(
          'htmlpurifier_config_name' => 'htmlpurifier_advanced',
          'htmlpurifier_help' => 1,
          'htmlpurifier_filter_tips' => 'HTML tags will be transformed to conform to HTML standards.',
          'htmlpurifier_config' => array(
            'Null_Attr.AllowedClasses' => 1,
            'Attr.AllowedFrameTargets' => '',
            'Attr.AllowedRel' => '',
            'Attr.AllowedRev' => '',
            'Null_Attr.ClassUseCDATA' => 1,
            'Null_Attr.DefaultImageAlt' => 1,
            'Attr.DefaultInvalidImage' => '',
            'Attr.DefaultInvalidImageAlt' => 'Invalid image',
            'Attr.DefaultTextDir' => 'ltr',
            'Attr.EnableID' => 0,
            'Attr.ForbiddenClasses' => '',
            'Attr.IDBlacklist' => '',
            'Null_Attr.IDBlacklistRegexp' => 1,
            'Attr.IDPrefix' => '',
            'Attr.IDPrefixLocal' => '',
            'AutoFormat.AutoParagraph' => 1,
            'AutoFormat.Custom' => '',
            'AutoFormat.DisplayLinkURI' => 0,
            'AutoFormat.Linkify' => 1,
            'AutoFormat.PurifierLinkify.DocURL' => '#%s',
            'AutoFormat.PurifierLinkify' => 0,
            'AutoFormat.RemoveEmpty.RemoveNbsp.Exceptions' => 'td
th',
            'AutoFormat.RemoveEmpty.RemoveNbsp' => 0,
            'AutoFormat.RemoveEmpty' => 0,
            'AutoFormat.RemoveSpansWithoutAttributes' => 0,
            'CSS.AllowImportant' => 0,
            'CSS.AllowTricky' => 0,
            'Null_CSS.AllowedFonts' => 1,
            'Null_CSS.AllowedProperties' => 1,
            'CSS.ForbiddenProperties' => '',
            'CSS.MaxImgLength' => '1200px',
            'CSS.Proprietary' => 0,
            'CSS.Trusted' => 0,
            'Cache.DefinitionImpl' => 'Drupal',
            'Null_Cache.SerializerPath' => 1,
            'Cache.SerializerPermissions' => 493,
            'Core.AggressivelyFixLt' => 1,
            'Core.AllowHostnameUnderscore' => 0,
            'Core.CollectErrors' => 0,
            'Core.ColorKeywords' => 'maroon:#800000
red:#FF0000
orange:#FFA500
yellow:#FFFF00
olive:#808000
purple:#800080
fuchsia:#FF00FF
white:#FFFFFF
lime:#00FF00
green:#008000
navy:#000080
blue:#0000FF
aqua:#00FFFF
teal:#008080
black:#000000
silver:#C0C0C0
gray:#808080
',
            'Core.ConvertDocumentToFragment' => 1,
            'Core.DirectLexLineNumberSyncInterval' => 0,
            'Core.DisableExcludes' => 0,
            'Core.EnableIDNA' => 0,
            'Core.Encoding' => 'utf-8',
            'Core.EscapeInvalidChildren' => 0,
            'Core.EscapeInvalidTags' => 0,
            'Core.EscapeNonASCIICharacters' => 0,
            'Core.HiddenElements' => 'script
style',
            'Core.Language' => 'en',
            'Null_Core.LexerImpl' => 1,
            'Null_Core.MaintainLineNumbers' => 1,
            'Core.NormalizeNewlines' => 1,
            'Core.RemoveInvalidImg' => 1,
            'Core.RemoveProcessingInstructions' => 0,
            'Null_Core.RemoveScriptContents' => 1,
            'Filter.Custom' => '',
            'Filter.ExtractStyleBlocks.Escaping' => 1,
            'Null_Filter.ExtractStyleBlocks.Scope' => 1,
            'Null_Filter.ExtractStyleBlocks.TidyImpl' => 1,
            'Filter.ExtractStyleBlocks' => 0,
            'Filter.YouTube' => 0,
            'Null_HTML.Allowed' => 1,
            'Null_HTML.AllowedAttributes' => 1,
            'HTML.AllowedComments' => '',
            'Null_HTML.AllowedCommentsRegexp' => 1,
            'Null_HTML.AllowedElements' => 1,
            'Null_HTML.AllowedModules' => 1,
            'HTML.Attr.Name.UseCDATA' => 0,
            'HTML.BlockWrapper' => 'p',
            'HTML.CoreModules' => 'Structure
Text
Hypertext
List
NonXMLCommonAttributes
XMLCommonAttributes
CommonAttributes',
            'Null_HTML.CustomDoctype' => 1,
            'HTML.Doctype' => 'XHTML 1.0 Transitional',
            'HTML.FlashAllowFullScreen' => 0,
            'HTML.ForbiddenAttributes' => '',
            'HTML.ForbiddenElements' => '',
            'HTML.MaxImgLength' => 1200,
            'HTML.Nofollow' => 0,
            'HTML.Parent' => 'div',
            'HTML.Proprietary' => 0,
            'HTML.SafeEmbed' => 1,
            'HTML.SafeIframe' => 1,
            'HTML.SafeObject' => 1,
            'HTML.SafeScripting' => '',
            'HTML.Strict' => 0,
            'HTML.TargetBlank' => 0,
            'HTML.TidyAdd' => '',
            'HTML.TidyLevel' => 'medium',
            'HTML.TidyRemove' => '',
            'HTML.Trusted' => 0,
            'HTML.XHTML' => 1,
            'Output.CommentScriptContents' => 1,
            'Output.FixInnerHTML' => 1,
            'Output.FlashCompat' => 0,
            'Null_Output.Newline' => 1,
            'Output.SortAttr' => 0,
            'Output.TidyFormat' => 0,
            'Test.ForceNoIconv' => 0,
            'URI.AllowedSchemes' => 'http
https
mailto
ftp
nntp
news',
            'Null_URI.Base' => 1,
            'URI.DefaultScheme' => 'http',
            'URI.Disable' => 0,
            'URI.DisableExternal' => 0,
            'URI.DisableExternalResources' => 0,
            'URI.DisableResources' => 0,
            'URI.Host' => 'localhost',
            'URI.HostBlacklist' => '',
            'URI.MakeAbsolute' => 0,
            'Null_URI.Munge' => 1,
            'URI.MungeResources' => 0,
            'Null_URI.MungeSecretKey' => 1,
            'URI.OverrideAllowedSchemes' => 1,
            'URI.SafeIframeRegexp' => '%^http://(www.youtube.|player.vimeo.|maps.google.|www.slideshare.)%',
          ),
        ),
      ),
      'media_filter' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'settings_source' => 'global',
          'local_paths' => '',
          'protocol_style' => 'full',
          'local_settings' => array(
            'protocol_style' => 'full',
            'local_paths' => '',
          ),
        ),
      ),
    ),
  );

  // Exported format: PHP code.
  $formats['php_code'] = array(
    'format' => 'php_code',
    'name' => 'PHP code',
    'cache' => 0,
    'status' => 1,
    'weight' => 11,
    'filters' => array(
      'php_code' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => -7,
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'settings_source' => 'global',
          'local_paths' => '',
          'protocol_style' => 'full',
          'local_settings' => array(
            'protocol_style' => 'full',
            'local_paths' => '',
          ),
        ),
      ),
    ),
  );

  // Exported format: Rich text.
  $formats['rich_text'] = array(
    'format' => 'rich_text',
    'name' => 'Rich text',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 1,
        ),
      ),
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'settings_source' => 'global',
          'local_paths' => '',
          'protocol_style' => 'full',
          'local_settings' => array(
            'protocol_style' => 'full',
            'local_paths' => '',
          ),
        ),
      ),
    ),
  );

  return $formats;
}
