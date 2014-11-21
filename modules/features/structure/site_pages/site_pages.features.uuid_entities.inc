<?php
/**
 * @file
 * site_pages.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function site_pages_uuid_default_entities() {
  $entities = array();

  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/a2da3046-4339-42e0-925c-c7ef1f8a6d2c',
      'cause' => 'taxonomy_term/92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Research',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Research',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/research',
        'language' => 'und',
      ),
    ),
    'uuid' => 'a2da3046-4339-42e0-925c-c7ef1f8a6d2c',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 6,
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
      'cause' => 'taxonomy_term/9f091c73-fdcc-470a-a19a-a6bade03039c',
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Institute',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Institute',
    'parent' => array(
      0 => 'a2da3046-4339-42e0-925c-c7ef1f8a6d2c',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/institute',
        'language' => 'und',
      ),
    ),
    'uuid' => '92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/9f091c73-fdcc-470a-a19a-a6bade03039c',
      'cause' => 'node/9e6be2d8-2218-4761-a267-2ff518142b22',
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Cardiovascular Disease',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'GICD',
    'parent' => array(
      0 => '92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/gicd',
        'language' => 'und',
      ),
    ),
    'uuid' => '9f091c73-fdcc-470a-a19a-a6bade03039c',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/9e6be2d8-2218-4761-a267-2ff518142b22',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p><img alt="Deepak Srivastava" class="media-image img__fid__60 img__view_mode__default attr__format__default attr__field_file_image_alt_text[und][0][value]__Deepak Srivastava attr__field_file_image_title_text[und][0][value]__" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/profile_pictures/srivastava-profile.jpg" /></p>

<p><strong>Deepak Srivastava,&nbsp;MD</strong></p>

<p>As a pediatric cardiologist, I see the tremendous suffering caused by cardiovascular disease—the world’s most common cause of death. Many people think of it as an adult illness. But in the United States, cardiovascular disease kills more men and women and children than any other condition. And when it doesn’t kill people outright, cardiovascular disease can leave people so debilitated that they have trouble crossing the parking lot to get from their car to their office. My own father suffers from heart disease and has difficulty climbing a flight of stairs.</p>

<p>People like my dad, and the children I look after, inspire me and my fellow cardiovascular scientists to better understand, prevent, treat and—ultimately—cure cardiovascular disease. We’d like to help create a different world—in which, for example, people who arrive at the emergency room for a heart attack are given an injection that transforms newly forming scar tissue into beating heart cells. Or perhaps a world in which I can dispense prescriptions for new drugs that tell a child’s heart how to repair itself.</p>

<p>As we work together towards this future, I predict rapid progress from the promise of stem cell research. Today’s cellular reprogramming techniques let us turn one kind of cell into another—and are already helping us create heart cells from skin samples of patients with cardiovascular disease. We’re using those heart cells to test the safety and efficacy of new and existing drugs. This kind of personalized, clinical-trial-in-a-dish research is quite revolutionary, as is our vision of using reprogramming techniques to turn cardiac scar tissue into beating heart cells—without open-heart surgery, transplants or postoperative complications.</p>

<p>This is an exciting time in heart research. At Gladstone, while we focus on unraveling the basics of fundamental biology, we do so to fuel breakthroughs in human health. So in our laboratories, basic scientists work side-by-side with physician scientists who, like me, bring the patient perspective to our work. Together, we spend our days examining things on a microscopic level—so that we can have an impact on a global level.</p>

<div style="align: center;"><span style="line-height: 120%;">WATCH: New Hope for Heart Repair</span></div>

<div style="align: center;"><br />
<object data="http://science.kqed.org/quest/files/jw-player-plugin-for-wordpress/player/player.swf" height="258" type="application/x-shockwave-flash" width="460"><param name="src" value="http://science.kqed.org/quest/files/jw-player-plugin-for-wordpress/player/player.swf" /><param name="allowscriptaccess" value="always" /><param name="allowfullscreen" value="true" /><param name="flashvars" value="&amp;bandwidth=2841&amp;controlbar=over&amp;dock=false&amp;file=WS303_heart_repair.flv&amp;image=http%3A%2F%2Fscience.kqed.org%2Fquest%2Ffiles%2F2012%2F04%2Fred-induced-muscle-cells-with-gap-junction-proteins-at-the-cell-boundary_resized.jpg&amp;gapro.accountid=UA-1538528-1&amp;gapro.height=258&amp;gapro.pluginmode=FLASH&amp;gapro.trackpercentage=true&amp;gapro.trackstarts=true&amp;gapro.tracktime=true&amp;gapro.visible=true&amp;gapro.width=460&amp;gapro.x=0&amp;gapro.y=0&amp;plugins=gapro-1&amp;skin=http%3A%2F%2Fscience.kqed.org%2Fquest%2Fwp-content%2Fplugins%2Fjw-player-plugin-for-wordpress%2Fskins%2Fglow.zip&amp;streamer=rtmp%3A%2F%2Fkqed-flash02.streamguys.us%2Fquest%2F&amp;viral.allowmenu=true&amp;viral.bgcolor=0x333333&amp;viral.fgcolor=0xffffff&amp;viral.functions=embed&amp;viral.matchplayercolors=true&amp;viral.oncomplete=false&amp;viral.pluginmode=FLASH" /></object></div>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '9f091c73-fdcc-470a-a19a-a6bade03039c',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Director\'s Vision',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/directors-vision',
        'language' => 'und',
      ),
    ),
    'uuid' => '9e6be2d8-2218-4761-a267-2ff518142b22',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/1ba15dd3-7ce9-4a37-997a-e45e5343b340',
      'cause' => 'node/d40ef406-014d-4ff0-84aa-06d5f9503d25',
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Neurological Disease',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'GIND',
    'parent' => array(
      0 => '92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/gind',
        'language' => 'und',
      ),
    ),
    'uuid' => '1ba15dd3-7ce9-4a37-997a-e45e5343b340',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 2,
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/d40ef406-014d-4ff0-84aa-06d5f9503d25',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '1ba15dd3-7ce9-4a37-997a-e45e5343b340',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Seminars and Events',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/seminars-and-events-1',
        'language' => 'und',
      ),
    ),
    'uuid' => 'd40ef406-014d-4ff0-84aa-06d5f9503d25',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/7c6d4536-94d7-4e46-b9ee-cf4733380546',
      'cause' => 'node/2b82b092-414f-4505-9658-6bf1c6be3e00',
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Stem Cells and Regenerative Medicine',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Stem Cell',
    'parent' => array(
      0 => '92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/stem-cell',
        'language' => 'und',
      ),
    ),
    'uuid' => '7c6d4536-94d7-4e46-b9ee-cf4733380546',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 3,
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/2b82b092-414f-4505-9658-6bf1c6be3e00',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>Gladstone scientists are using stem cell science in our mission to better understand, prevent, treat and cure some of the world’s most relentless diseases.</p>

<p>Many of our investigators are building on the work of <a href="http://www.gladstoneinstitutes.org/scientist/yamanaka">Shinya Yamanaka</a>, MD, PhD. Currently a senior investigator at Gladstone, Dr. Yamanaka is the scientist who in 2006 discovered how to reprogram skin cells into stem cells that, like embryonic stem cells, can develop into virtually any other cell type in the body. This discovery of <em>induced pluripotent stem cells</em>, or iPS cells, has since fundamentally changed the fields of cell biology and stem cell research, opening promising new prospects for both personalized and regenerative medicine.</p>

<p>Since that time, scientists have made many advances in iPS technology and in cell-reprogramming methods that build on it. While all these advances show promise, it is still too early to say which approaches will yield the most effective results for human health. So, at Gladstone we continue to conduct research in several areas of stem cell biology.</p>

<p>For example, <a href="http://www.gladstoneinstitutes.org/scientist/srivastava">Deepak Srivastava</a>, MD, is reprogramming cardiac connective tissue in the heart directly into beating cardiac-muscle cells. <a href="http://www.gladstoneinstitutes.org/scientist/greene">Warner C. Greene,</a> MD, PhD, has been studying whether the retrotransposons (also known as jumping genes, because they move around within the chromosomes of a single cell) that reside in our DNA become more active when a skin cell is reprogrammed into an iPS cell. <a href="http://www.gladstoneinstitutes.org/scientist/sanjabi">Shomyseh Sanjabi</a>, PhD, is using iPS technology to create a new model for testing a vaccine for HIV/AIDS. <a href="http://www.gladstoneinstitutes.org/scientist/ding">Sheng Ding</a>, PhD, is working on new ways to use chemical compounds to convert cells from one type into another—such as reprogramming skin cells directly into brain cells. And <a href="http://www.gladstoneinstitutes.org/scientist/finkbeiner">Steven Finkbeiner,</a> MD, PhD, is using stem cell technology to create cell culture models of Huntington’s disease and Alzheimer’s disease.</p>

<p><strong>Pluripotent Stem Cells</strong></p>

<p>&nbsp;</p>

<p>In 2006, former Gladstone postdoctoral fellow Shinya Yamanaka, MD, PhD, developed a method for inducing skin cells from mice to become pluripotent stem cells. To do this, he treated skin cells with four factors (now called the Yamanaka factors) to induce them to revert back to their pluripotent state. He called them induced pluripotent stem cells, or iPS cells, and in the following year he used the same techniques for converting human skin cells into stem cells.</p>

<p>Such cells are called pluripotent because, like embryonic stem cells, they can develop into virtually any type of cell in the human body. These iPS cells are distinct from embryonic stem cells, though, because they are derived from adult tissue, rather than from embryos. Further, iPS cells are also different from adult stem cells, a small number of which naturally occur in the human body.</p>

<p>By culturing iPS cells in a dish and treating them with other factors, scientists later found a way to reprogram iPS cells into various cell types such as beating heart cells and neurons that transmit chemical signals. They have since used this technique for creating patient-specific cell lines that can be used to research everything from drug testing to regenerative medicine.</p>

<p>Dr. Yamanaka, who is now a senior investigator back at Gladstone, continues to improve iPS technology, making it more viable for regenerative purposes. Currently, he and his Gladstone lab are working on ways to better understand what exactly happens when iPS cells are created—and how to make the process more efficient for both regenerative and personalized medicine.</p>

<p>&nbsp;</p>

<p><strong>Direct Reprogramming</strong></p>

<p>&nbsp;</p>

<p>As soon as Shinya Yamanaka, MD, PhD, showed how to turn back the clock on human cells—making induced pluripotent stem cells, or iPS cells, from adult skin cells—scientists around the world began to build on his technology. These iPS cells are pluripotent because, like embryonic stem cells, they can develop into virtually any type of cell in the human body.</p>

<p>One key stem cell advance over the past five years is called direct reprogramming. This technique can offer a host of advantages over iPS technology when adult cells are reprogrammed directly into another cell type—without first being instructed to revert back to the pluripotent state of stem cells. For example, direct programming can yield new cells more quickly and efficiently than other forms of iPS technology.</p>

<p>At Gladstone, Deepak Srivastava, MD, used direct reprogramming to transform the cardiac scar tissue that impairs heart function directly into beating cardiac-muscle cells. Sheng Ding, PhD, meanwhile, has reprogrammed skin cells directly into brain cells and cardiac cells without returning those cells to the pluripotent state, while Yadong Huang, MD, PhD, has reengineered skin cells into early-stage brain stem cells that are self-renewing and can develop into mature brain cells.</p>

<p>&nbsp;</p>

<p><strong>Chemical Biology</strong></p>

<p>&nbsp;</p>

<p>Recent breakthroughs have revealed that there are different ways to transform adult cells into other cells types—be that pluripotent stem cells or specific cell types such as neurons.</p>

<p>Indeed, the original genetic factors used in iPS technology carry some risk of inducing cancer and other genetic problems (as does the use of embryonic stem cells) that chemical compounds may avoid. For example, Sheng Ding, PhD, has been working on ways to use pharmaceutical chemicals rather than genetic material to reprogram cells. Currently, he is screening a host of chemicals to identify which ones can: instruct stem cells to become a specific type of cell; or control the developmental state of certain cell types, such as cancer cells and immune cells. This breakthrough builds upon the work of Shinya Yamanaka, MD, PhD, who first transformed adult humans cells into pluripotent stem cells.</p>

<p>The use of pharmaceutical chemicals can also improve both the speed and efficiency of cellular reprogramming—effectively shortening the time it will take us to use stem cell technology as a tool for overcoming disease. Dr. Ding’s vision for that day features a heart patient whose new prescription medication causes scar tissue in her heart to transform into robust beating heart cells.</p>

<p><strong>Disease Application</strong></p>

<p>&nbsp;</p>

<p>Gladstone is a basic-research organization with a focus on three disease areas. All of our stem cell work is targeted at finding new ways to overcome cardiovascular, viral and neurological diseases.</p>

<p>The discovery of induced pluripotent stem cells, or iPS cells, has since fundamentally altered the fields of cell biology and stem cell research, opening promising new prospects for both personalized and regenerative medicine. In addition to providing an alternative option to the controversial use of embryonic stem cells, iPS cell technology also represents an entirely new platform for fundamental studies of human disease. Rather than using models made in yeast, flies or mice for disease research, iPS cell technology lets scientists create disease-research models built on cells from a patient with a specific disease. These iPS-based models contain a complete set of the genes that resulted in that disease—thus representing the potential for a far superior model for studying disease and testing disease therapies. In the future, for example, iPS cells could be used in a Petri dish to test both drug safety and efficacy for an individual patient.</p>

<p>Indeed, many drugs fail because they cause health problems that are not detected until clinical trials begin. Using iPS cell technology, researchers can develop heart cells, for example, from reengineered skin cells to test toxicity of drug therapies earlier in the drug-development process—reducing the failure risk for the ensuing and expensive animal or human trials.</p>

<p>At Gladstone, scientists are building on the work of Shinya Yamanaka, MD, PhD, who first developed iPS cell technology in 2006. They are researching the regenerative effects of iPS cells on animal models. For example, Deepak Srivastava, MD, who directs cardiovascular research at Gladstone, is working on ways to use iPS cell technology to re-grow heart muscle in individuals who have suffered heart attacks. Researchers are also testing whether iPS cell technology can help individuals with spinal cord injuries or those with neurodegenerative diseases such as Alzheimer’s disease and Parkinson’s disease.</p>

<p>&nbsp;</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '7c6d4536-94d7-4e46-b9ee-cf4733380546',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Areas of Investigation',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/areas-investigation-2',
        'language' => 'und',
      ),
    ),
    'uuid' => '2b82b092-414f-4505-9658-6bf1c6be3e00',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/264e456a-1f21-4135-a55f-5f8bc41c71ef',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<div><a href="http://www.gladstoneinstitutes.org/yamanaka"><span style="color: #167BA5;">Shinya Yamanaka MD, PhD</span></a>, a senior investigator at the Gladstone Institutes, won the 2012 Nobel Prize in Physiology or Medicine for his discovery of how to transform ordinary adult skin cells into cells that, like embryonic stem cells, can then develop into virtually any other type of cell in the body.</div>

<div style="margin-top: 10px; margin-bottom: 10px;">He called them <i>induced pluripotent stem cells</i>, or iPS cells. Dr. Yamanaka received the award in December of 2012 at the Nobel ceremony in Stockholm. Dr. Yamanaka\'s discovery has altered the fields of cell biology and stem cell research—and opened promising new prospects for the future of both personalized and regenerative medicine.</div>

<div style="margin-bottom: 20px;">You will find more details about stem cell biology at Gladstone <a href="http://www.gladstoneinstitutes.org/our-science/stem-cell-research">here</a>.</div>

<p><span style="margin-left: 0px;"><strong>The Nobel Prize Ceremony in Stockholm</strong></span></p>

<p>&nbsp;</p>

<table border="0" cellpadding="1" cellspacing="0" style="">
	<tbody>
		<tr>
			<td><img alt="Medal" height="465" src="http://www.gladstoneinstitutes.org/sites/default/files/yamanaka_shinya_nobel_2_320x468.jpg" style="margin-bottom: 0px; float: left; margin-bottom: 10px;" title="Nobel Prize Ceremony" width="318" /></td>
			<td><img alt="Medal" height="465" src="http://www.gladstoneinstitutes.org/sites/default/files/yamanaka_shinya_nobel_1_320x468.jpg" style="margin-bottom: 0px; float: right; margin-bottom: 10px;" title="Nobel Prize Ceremony" width="318" /></td>
		</tr>
		<tr>
			<td colspan="2" valign="top" width="660"><span style="text-align: justify;">On the left, Gladstone Senior Investigator, Shinya Yamanaka, MD, PhD, receives the 2012 Nobel Prize in Physiology or Medicine from Sweden\'s King Carl Gustaf on December 10, 2012, in Stockholm, Sweden, and, on the right, Dr. Yamanaka shows his Nobel Prize medal during the Nobel Prize Award ceremony.</span> <span style="font-size: 10px; line-height: 150%;">[Photos: Jonas Ekströmer/Scanpix Sweden/Sipa USA]</span></td>
		</tr>
	</tbody>
</table>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'The Nobel at Gladstone',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/nobel-gladstone',
        'language' => 'und',
      ),
    ),
    'uuid' => '264e456a-1f21-4135-a55f-5f8bc41c71ef',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/1605d409-9090-430d-b155-cbf0d6c987c4',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Scientific Publications',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/scientific-publications',
        'language' => 'und',
      ),
    ),
    'uuid' => '1605d409-9090-430d-b155-cbf0d6c987c4',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/b24f2561-1f63-4adc-adb8-6e46cc8cd4b7',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<div class="ui-node ui-node-page ui-node-lang-neutral ui-odd ui-node-odd ui-node-1 clearfix" id="ui-node-1610">
<div class="ui-content clearfix">
<p>Neurological research at Gladstone focuses on a host of devastating conditions including Alzheimer’s, frontotemporal dementia (FTD), Parkinson’s and Huntington’s disease, amyotrophic lateral sclerosis (ALS, or Lou Gehrig’s disease) and multiple sclerosis. In addition, Gladstone research has potential applications for spinal cord injury, stroke and traumatic brain injury.</p>

<p>Alzheimer’s is the most common neurodegenerative disorder—and in many ways also the most complex. We are therefore attacking Alzheimer’s on many fronts. Already, Gladstone has identified drugs that can counteract detrimental effects of apoE4—the most important genetic risk factor for the disease. Other Gladstone investigators are working to move JM6—a new compound we developed to reduce the progression of both Alzheimer’s and Huntington’s diseases—into human trials. We also found that lowering brain levels of the protein tau improves memory and other cognitive functions in mice genetically engineered to mimic Alzheimer\'s disease. We are now investigating several therapeutic strategies to block tau\'s disease-promoting activities. Other studies have identified additional ways to make the brain more resistant to amyloid-beta peptides that impair neuronal function as they build up in brains of those with Alzheimer’s.</p>

<p>Other Gladstone scientists are investigating the network of brain cells that controls movements in order to figure out how its dysfunction leads to the symptoms of Parkinson’s disease. These studies are yielding novel ways to keep this network functional when relevant brain cells and chemicals are lost as a result of the disease. We are also studying mitochondria, the energy-producing subunits of cells, as their impairment appears to play an important role in multiple neurodegenerative conditions, including Alzheimer’s, Parkinson’s and ALS.</p>

<p>Indeed, in much of our work, Gladstone scientists collaborate across disease areas. We find that scientific leads in one illness can inform work in another. We always look for common threads that might lead to better treatments for multiple conditions. For example, Gladstone scientists are researching how autophagy—a process by which cells eliminate abnormal proteins—can help prevent the destruction of brain cells. This research may benefit people with Alzheimer’s, Huntington’s and other neurological disorders. And our Alzheimer’s research into apoE4 will likely have implications for the treatment of traumatic brain injury. We\'re also studying TDP-43, another protein that may contribute to diverse neurodegenerative disorders.&nbsp;Gladstone investigators also discovered that the p75 neurotrophin receptor—a protein long known for its role in the development of brain cells—plays unexpected roles&nbsp;in metabolic disorders&nbsp;such as Type 2 diabetes.</p>

<p>Several Gladstone scientists study abnormal inflammatory responses by immune cells in the central nervous system, which may contribute to the progression of multiple sclerosis, neurodegenerative disorders and many other neurological conditions. A related line of investigation focuses on the blood protein fibrinogen, whose transgression of the so-called blood-brain barrier appears to be an early trigger of multiple sclerosis and a potential contributor to numerous neurological disorders. Novel approaches to block its detrimental activities hold great promise for the treatment of multiple sclerosis, spinal cord injury, stroke and traumatic brain injury.</p>
</div>
</div>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '1ba15dd3-7ce9-4a37-997a-e45e5343b340',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Areas of Investigation',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/areas-investigation-1',
        'language' => 'und',
      ),
    ),
    'uuid' => 'b24f2561-1f63-4adc-adb8-6e46cc8cd4b7',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/70f4e9ca-ffa3-432c-84bf-879eaf69aa02',
      'cause' => 'node/d958e83c-36fd-4d1c-bc65-90e69bb60e36',
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Translational Research',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Translational',
    'parent' => array(
      0 => '92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/translational',
        'language' => 'und',
      ),
    ),
    'uuid' => '70f4e9ca-ffa3-432c-84bf-879eaf69aa02',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 4,
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/d958e83c-36fd-4d1c-bc65-90e69bb60e36',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p><img alt="Gladstone" height="350" src="http://gladstoneinstitutes.org/sites/default/files/southeastduskcrop250x350.jpg" style="float: right; margin: 0px 7px;" title="Gladstone" width="250" /><strong>The Gladstone Center for Translational Research</strong> facilitates interactions between Gladstone scientists and the biomedical industry—including venture capitalists, biotech firms and large corporations. The Center’s primary goal is to translate the results of Gladstone’s basic science into therapeutics that help patients with cardiovascular, viral or neurological diseases. Working in concert with our intellectual property department, the Center engages with companies interested in licensing our patented technology, collaborating on research goals or launching startups. For example, this molecule-to-marketplace business unit facilitates technology transfer through collaborations with partners such as&nbsp;<a href="http://www.lundbeck.com/">Lundbeck</a>,&nbsp;<a href="http://www.bms.com">Bristol-Myers Squibb</a>&nbsp;and <a href="http://www.takeda.com/">Takeda</a>. If you’d like to explore opportunities to partner with Gladstone, please get in touch with Stephen Freedman, PhD, our Vice President for Corporate Liaison and Ventures.</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '70f4e9ca-ffa3-432c-84bf-879eaf69aa02',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Translational Research',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/translational-research',
        'language' => 'und',
      ),
    ),
    'uuid' => 'd958e83c-36fd-4d1c-bc65-90e69bb60e36',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/2f89ac38-f919-4ed1-bbf5-1bf5662e9f5d',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p style="margin: 0px 0px 1.5em; color: rgb(0, 0, 0); font-family: \'Trebuchet MS\', \'Helvetica Neue\', Arial, Helvetica, sans-serif; font-size: 14px; line-height: 21px;">Gladstone encourages the vital role industry plays in bringing the results of basic science to the service of patients suffering from cardiovascular, viral and neurological diseases. To learn more about opportunities to forge partnerships with Gladstone, please contact one of our two vice presidents who oversee the creation and development of these collaborations.</p>

<p style="margin: 0px 0px 1.5em; color: rgb(0, 0, 0); font-family: \'Trebuchet MS\', \'Helvetica Neue\', Arial, Helvetica, sans-serif; font-size: 14px; line-height: 21px;">Stephen Freedman, PhD<br />
Vice President for Corporate Liaison and Ventures<br />
<a href="mailto:stephen.freedman@gladstone.ucsf.edu" style="text-decoration: none; color: rgb(12, 74, 101);">stephen.freedman@gladstone.ucsf.edu</a><br />
Phone: 415-734-2057<br />
Fax: 415-355-0826</p>

<p style="margin: 0px 0px 1.5em; color: rgb(0, 0, 0); font-family: \'Trebuchet MS\', \'Helvetica Neue\', Arial, Helvetica, sans-serif; font-size: 14px; line-height: 21px;">Dr. Stephen B. Freedman is Director of the Gladstone Center for Translational Research (GCTR) and Vice President for Corporate Liaison and Ventures at the Gladstone Institutes. Through Dr. Freedman’s leadership, GCTR has facilitated a number of significant strategic relationships and alliances—across all of Gladstone’s research areas—with biotech and pharmaceutical companies, venture capital firms and foundations. GCTR is always looking for new opportunities to advance Gladstone’s research through both traditional and non-traditional collaboration models. Dr. Freedman has more than 25 years of experience in the pharmaceutical industry, including senior positions at Merck &amp; Co. and Elan Pharmaceuticals. Dr. Freedman earned a bachelor’s degree in physiology and biochemistry and a PhD in pharmacology from the University of Southampton. He received the G. Kerkut Prize for Physiology in 1978 and completed postdoctoral studies with Professor Richard Miller at the University of Chicago.</p>

<p style="margin: 0px 0px 1.5em; color: rgb(0, 0, 0); font-family: \'Trebuchet MS\', \'Helvetica Neue\', Arial, Helvetica, sans-serif; font-size: 14px; line-height: 21px;">Joan V McIntyre, JD<br />
Vice President for Intellectual Property and Legal Affairs<br />
<a href="mailto:joan.mcintyre@gladstone.ucsf.edu" style="text-decoration: none; color: rgb(12, 74, 101);">joan.mcintyre@gladstone.ucsf.edu</a><br />
Phone: 415-734-2018<br />
Fax: 415-355-0930</p>

<p style="margin: 0px 0px 1.5em; color: rgb(0, 0, 0); font-family: \'Trebuchet MS\', \'Helvetica Neue\', Arial, Helvetica, sans-serif; font-size: 14px; line-height: 21px;">Joan McIntyre is the Director of Intellectual Property, and Intellectual Property Counsel at the Gladstone Institutes. Ms. McIntyre is responsible for all aspects of Gladstone’s intellectual property, including technology licensing and research-related agreements. She joined Gladstone in 1997 and has more than 25 years of experience in intellectual property law—having worked in private practice, the medical-device industry and technology transfer for academia. She is admitted to practice before the U.S. Patent and Trademark Office, State of Minnesota, the Federal District Court of Minnesota, the Eighth Circuit Court of Appeals, the Court of Appeals for the Federal Circuit and as Registered In-House Counsel in the State of California. Ms. McIntyre is a registered U. S. Patent Attorney who earned a bachelor’s degree in medical microbiology at the University of Minnesota and a JD from the William Mitchell College of Law in St. Paul, Minn.</p>

<p style="margin: 0px 0px 1.5em; color: rgb(0, 0, 0); font-family: \'Trebuchet MS\', \'Helvetica Neue\', Arial, Helvetica, sans-serif; font-size: 14px; line-height: 21px;">Material Transfer Request</p>

<p style="margin: 0px 0px 1.5em; color: rgb(0, 0, 0); font-family: \'Trebuchet MS\', \'Helvetica Neue\', Arial, Helvetica, sans-serif; font-size: 14px; line-height: 21px;">To initiate a new request for Gladstone research materials, please e-mail the appropriate investigator from this list of Gladstone investigators. Once approved, your request will be forwarded to our office for processing and you can expect to receive a material request form from our office soon thereafter.</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '70f4e9ca-ffa3-432c-84bf-879eaf69aa02',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Information for Industry',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/information-industry',
        'language' => 'und',
      ),
    ),
    'uuid' => '2f89ac38-f919-4ed1-bbf5-1bf5662e9f5d',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/e5b1b656-9be1-4f67-ad32-a433cc94c497',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '70f4e9ca-ffa3-432c-84bf-879eaf69aa02',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Technologies Available',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/technologies-available',
        'language' => 'und',
      ),
    ),
    'uuid' => 'e5b1b656-9be1-4f67-ad32-a433cc94c497',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/a1089f06-dcd5-4112-8a03-4d0ea4d827bc',
      'cause' => FALSE,
    ),
    'body' => array(),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Licensing Opportunities',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/licensing-opportunities',
        'language' => 'und',
      ),
    ),
    'uuid' => 'a1089f06-dcd5-4112-8a03-4d0ea4d827bc',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/470cf091-cf81-4c9b-b6ab-193af3071c28',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '1ba15dd3-7ce9-4a37-997a-e45e5343b340',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Scientific Advisory Board',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/scientific-advisory-board-1',
        'language' => 'und',
      ),
    ),
    'uuid' => '470cf091-cf81-4c9b-b6ab-193af3071c28',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/f0d451f2-d12b-42ab-8f15-f153767e4b84',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '1ba15dd3-7ce9-4a37-997a-e45e5343b340',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Publications',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/publications-2',
        'language' => 'und',
      ),
    ),
    'uuid' => 'f0d451f2-d12b-42ab-8f15-f153767e4b84',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/33890157-70e8-4b8f-baa0-ac6051467b2d',
      'cause' => 'node/38dfb3cc-e892-40aa-b9ca-1b2765b8f7d1',
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Virology & Immunology',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'GIVI',
    'parent' => array(
      0 => '92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/givi',
        'language' => 'und',
      ),
    ),
    'uuid' => '33890157-70e8-4b8f-baa0-ac6051467b2d',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 1,
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/38dfb3cc-e892-40aa-b9ca-1b2765b8f7d1',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '33890157-70e8-4b8f-baa0-ac6051467b2d',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Recent Advances',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/recent-advances-0',
        'language' => 'und',
      ),
    ),
    'uuid' => '38dfb3cc-e892-40aa-b9ca-1b2765b8f7d1',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/27f0846d-0a84-47dd-8514-5e56dc2f5fbf',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '33890157-70e8-4b8f-baa0-ac6051467b2d',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Honors and Awards',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/honors-and-awards-1',
        'language' => 'und',
      ),
    ),
    'uuid' => '27f0846d-0a84-47dd-8514-5e56dc2f5fbf',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/65878e16-3415-407a-9d03-c65b9bdc6499',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>Training tomorrow’s scientists is a cornerstone of Gladstone’s commitment to overcoming some of the world’s most devastating diseases. We pride ourselves on training curious, passionate, and ambitious graduate students, medical students, and postdoctoral fellows—showing them how to approach complex problems from multiple angles.</p>

<p>Gladstone’s investigators are faculty members at the University of California, San Francisco (UCSF), with which we share a <a href="/current/builds/demo/node/27">vibrant partnership</a>. We seek the best and brightest trainees to find new therapies for illnesses such as heart failure, HIV/AIDS, and Alzheimer’s disease.</p>

<p>Some of the world’s leading scientists—including Nobel laureate <a href="/current/builds/demo/our-science/people/shinya-yamanaka">Shinya Yamanaka</a>, MD, PhD—trained at Gladstone.</p>

<p>To learn more about joining Gladstone for your graduate or postdoctoral training, you can explore our <a href="/current/builds/demo/node/54">graduate student</a> and <a href="/current/builds/demo/node/53">postdoc</a> pages.&nbsp;&nbsp;</p>

<p>We also help with training alternatives for health professionals at the Gladstone Lipid Clinic. To learn more, please click on the links listed below.</p>

<ul>
	<li><a href="/current/builds/demo/node/32">Health Professionals Page</a></li>
	<li><a href="http://gladstoneinstitutes.org/u/tbersot/ldtp.html">Lipid Disorders Training Program Registration</a></li>
	<li><a href="/current/builds/demo/node/37">Student Outreach</a></li>
</ul>

<p>&nbsp;</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Training Programs',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/training-programs',
        'language' => 'und',
      ),
    ),
    'uuid' => '65878e16-3415-407a-9d03-c65b9bdc6499',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/a241fb4c-9f40-4066-b8ea-01f1df0e62ad',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>Gladstone is committed to ensuring that the design, conduct, and reporting of any research involving Gladstone staff will not be biased by any conflicting financial interest of any researcher, his/her spouse, and/or dependent children. The Public Health Service ("PHS") requires that researchers disclose any significant financial interest as defined by federal regulations (42 CFR Part 50 Subpart F) that reasonably appears to be related to the Investigator\'s institutional responsibilities. The Gladstone Institutes Conflict of Interest Committee is responsible for reviewing any possible conflict of interest involving a significant financial interest.</p>

<p>Questions regarding this policy may be directed to:</p>

<div><strong>Joan V. McIntyre, Vice President for Intellectual Property and Legal Affairs</strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>

<div>Gladstone Institutes</div>

<div>1650 Owens Street</div>

<div>San Francisco, CA 94158</div>

<div>phone: 415-734-2018</div>

<div>fax: 415-355-0930</div>

<div>email: <a href="mailto:joan.mcintyre@gladstone.ucsf.edu">joan.mcintyre@gladstone.ucsf.edu</a></div>

<p>&nbsp;</p>

<p><strong>CONFLICT OF INTEREST – OBJECTIVITY IN PHS-FUNDED RESEARCH </strong></p>

<p><strong>POLICY: </strong>Gladstone is committed to ensuring that the design, conduct, and reporting of any research involving Gladstone Staff or the use of Gladstone funds or facilities will not be biased by any conflicting financial interest of any researcher, his/her spouse, and/or dependent children. The U.S. Public Health Service ("PHS") requires that researchers disclose any significant financial interest as defined by federal regulations (42 CFR Part 50 Subpart F) that reasonably appear to be related to their professional responsibilities or activities. The PHS has exempted Small Business Innovative Research ("SBIR") and Small Business Technology Transfer ("STTR"), Phase I applications from these requirements.</p>

<p>A Gladstone Staff member is considered to have a potential conflict of interest when he/she or his/her spouse or dependent children ("immediate family") has a significant financial interest that is related to, or is in an entity whose activities are related to, that Gladstone Staff member\'s responsibilities at Gladstone. Included in such responsibilities are all activities in which he/she is engaged in the areas of teaching, research, patient care, research consultation, Gladstone or UCSF committee memberships, or administrative responsibilities.</p>

<p><strong>APPLICABILITY: This policy applies to all Gladstone Staff who fit the definition of Investigator, below, in regard to any activity funded by or for which research funding is sought from the Public Health Service (PHS). Subcontractors, collaborators, visiting researchers, consortium members, or consultants may also be subject to this policy if they are responsible for the design, conduct or reporting of PHS-funded research or research that is proposed for PHS funding. </strong></p>

<p><strong>DEFINITIONS </strong>for purposes of this Policy<strong>: </strong></p>

<p><em>COIC</em> means the Gladstone Conflict of Interest Committee.</p>

<p><em>Disclosure of significant financial interests</em> means an Investigator\'s disclosure of significant financial interests to Gladstone.</p>

<p><em>Financial conflict of interest </em>(FCOI) means a significant financial interest that could directly and significantly affect the design, conduct, or reporting of PHS-funded research.</p>

<p><em>FCOI report</em> means Gladstone\'s report of a financial conflict of interest to a PHS Awarding Component.</p>

<p><em>Financial interest </em>means anything of monetary value, whether or not the value is readily ascertainable.</p>

<p><em>HHS</em> means the United States Department of Health and Human Services, and any components of the Department to which the authority involved may be delegated.</p>

<p><em>Institutional responsibilities</em> means an Investigator\'s professional responsibilities on behalf of Gladstone such as research, research consultation, teaching, professional practice, Gladstone or UCSF committee memberships, and administrative responsibilities.</p>

<p><em>Investigator</em> means the project director or principal Investigator and any other person, regardless of title or position, who is responsible for the design, conduct, or reporting of research funded by the PHS, or proposed for such funding, which may include, for example, collaborators or consultants.</p>

<p><em>Manage</em> means taking action to address a financial conflict of interest, which can include reducing or eliminating the financial conflict of interest, to ensure, to the extent possible, that the design, conduct, and reporting of research will be free from bias.</p>

<p><em>PD/PI </em>means a project director or principal Investigator of a PHS-funded research project; the PD/PI is included in the definitions of senior/key personnel and Investigator under this subpart.</p>

<p><em>PHS </em>means the Public Health Service of the U.S. Department of Health and Human Services, and any components of the PHS to which the authority involved may be delegated, including the National Institutes of Health (NIH).</p>

<p><em>PHS Awarding Component </em>means the organizational unit of the PHS that funds the research that is subject to this subpart.</p>

<p><em>Public Health Service Act</em> or PHS Act means the statute codified at 42 U.S.C. 201 et seq.</p>

<p><em>Research</em> means a systematic investigation, study or experiment designed to develop or contribute to generalizable knowledge relating broadly to public health, including behavioral and social-sciences research. The term encompasses basic and applied research (e.g., a published article, book or book chapter) and product development (e.g., a diagnostic test or drug). As used in this policy, the term includes any such activity for which research funding is available from a PHS Awarding Component through a grant or cooperative agreement, whether authorized under the PHS Act or other statutory authority, such as a research grant, career development award, center grant, individual fellowship award, infrastructure award, institutional training grant, program project, or research resources award.</p>

<p><em>Senior/key personnel</em> means the PD/PI and any other person identified as senior/key personnel by Gladstone in the grant application, progress report, or any other report submitted to the PHS by the Institution under this subpart.</p>

<p><em>Significant financial interest</em> means:</p>

<ol>
	<li>A financial interest consisting of one or more of the following interests of the Investigator (and those of the Investigator\'s spouse and dependent children) that reasonably appears to be related to the Investigator\'s institutional responsibilities:
	<ol type="a">
		<li>With regard to any publicly traded entity, a significant financial interest exists if the value of any remuneration received from the entity in the twelve months preceding the disclosure and the value of any equity interest in the entity as of the date of disclosure, when aggregated, exceeds $5,000. For purposes of this definition, remuneration includes salary and any payment for services not otherwise identified as salary (e.g., consulting fees, honoraria, paid authorship); equity interest includes any stock, stock option, or other ownership interest, as determined through reference to public prices or other reasonable measures of fair market value;</li>
		<li>With regard to any non-publicly traded entity, a significant financial interest exists if the value of any remuneration received from the entity in the twelve months preceding the disclosure, when aggregated, exceeds $5,000, or when the Investigator (or the Investigator\'s spouse or dependent children) holds any equity interest (e.g., stock, stock option, or other ownership interest); or</li>
		<li>Intellectual property rights and interests (e.g., patents, copyrights), upon receipt of income related to such rights and interests.</li>
	</ol>
	</li>
	<li>Investigators also must disclose the occurrence of any reimbursed or sponsored travel (i.e., that which is paid on behalf of the Investigator and not reimbursed to the Investigator so that the exact monetary value may not be readily available), related to their institutional responsibilities; provided, however, that this disclosure requirement does not apply to travel that is reimbursed or sponsored by a Federal, state, or local government agency, an Institution of higher education, an academic teaching hospital, a medical center, or a research institute that is affiliated with an Institution of higher education. The disclosure will include, at a minimum, the purpose of the trip, the identity of the sponsor/organizer, the destination, and the duration. Gladstone official(s) will determine if further information is needed, including a determination or disclosure of monetary value, in order to determine whether the travel constitutes a financial conflict of interest with the PHS-funded research.</li>
	<li>The term significant financial interest does not include the following types of financial interests: salary, royalties, or other remuneration paid by Gladstone to the Investigator if the Investigator is currently employed or otherwise appointed by Gladstone, including intellectual property rights assigned to Gladstone and agreements to share in royalties related to such rights; income from investment vehicles, such as mutual funds and retirement accounts, as long as the Investigator does not directly control the investment decisions made in these vehicles; income from seminars, lectures, or teaching engagements sponsored by a Federal, state, or local government agency, an Institution of higher education, an academic teaching hospital, a medical center, or a research institute that is affiliated with an Institution of higher education; or income from service on advisory committees or review panels for a Federal, state, or local government agency, an Institution of higher education, an academic teaching hospital, a medical center, or a research institute that is affiliated with an Institution of higher education.</li>
</ol>

<p>&nbsp;</p>

<p><strong>PROCEDURES: </strong></p>

<p><u>Notice</u></p>

<p>All Gladstone Staff will be provided a copy of this Policy at the time of employment or first access to Gladstone funds or facilities, and annually thereafter, by the Intellectual Property Department.</p>

<p>&nbsp;</p>

<p><u>Disclosures</u></p>

<ol>
	<li>Potential conflicts of interest must be disclosed by Gladstone Staff to the COIC immediately. Without limiting the foregoing, before submitting a PHS application with respect to a project, Investigator(s) must complete and submit to the Vice President for Intellectual Property and Legal Affairs a Gladstone Outside Activities &amp; Financial Disclosure ("OAFD") form reporting any Significant Financial Interest(s), as defined in this Policy.</li>
	<li>The Grants and Contracts Officer will send the Investigator(s) involved in such PHS application an OAFD form. This form must be completed and submitted to the Intellectual Property department before the grant proposal is submitted. The Grants and Contracts Officer will verify that a current OAFD form has been completed for each involved Gladstone Staff member before submission of such proposals.</li>
	<li>Each Investigator participating in PHS-funded research must update his or her disclosure annually during the period of the award to reflect any information not disclosed initially or updates to any previously-disclosed Significant Financial Interests (e.g., the updated value of previously disclosed equity interests). Investigators are also required to report a new Significant Financial Interest within 30 days of discovering or acquiring the interest.</li>
</ol>

<p>&nbsp;</p>

<p><u>Review and Management of Financial Disclosures</u></p>

<ol>
	<li>Completed OAFD forms will be sent by the Intellectual Property Department to the applicable Institute Director or the President for review in accordance with this Policy. If in his/her judgment, the OAFD form indicates a potential conflict of interest or a Significant Financial Interest that is related to PHS-funded research, the OAFD form will be referred to the COIC.</li>
	<li>Review of disclosures by the Institute Director, President or COIC shall include a determination of whether an Investigator\'s Significant Financial Interest is related to a PHS-funded research project at Gladstone and, if so, whether the Significant Financial Interest constitutes a financial conflict of interest.
	<ol type="a">
		<li>An Investigator\'s Significant Financial Interest is related to PHS-funded research when (i) the Significant Financial Interest could be affected by the PHS-funded research or (ii) the Significant Financial Interest is in an entity whose financial interest could be affected by the research.</li>
		<li>A financial conflict of interest exists when an Investigator\'s Significant Financial Interest could directly and significantly affect the design, conduct, or reporting of PHS-funded research.</li>
	</ol>
	</li>
	<li>The Investigator involved in review by the COIC will be notified in writing of the COIC\'s determination. Gladstone will take such actions as are necessary to manage financial conflicts of interest in PHS-funded research, including, prior to the expenditure of PHS award funds, development and implementation of a management plan that specifies the actions that have been or will be taken to manage, reduce or eliminate the financial conflict of interest.</li>
	<li>Whenever, in the course of an ongoing PHS-funded research project, a Significant Financial Interest is disclosed by a new Investigator or an existing Investigator discloses a Significant Financial Interest not previously reported, or it comes to the attention of Gladstone officials that a Significant Financial Interest related to the PHS-funded research was not disclosed in a timely manner by an Investigator, the interest shall be reviewed within 60 days and a decision shall be made as to whether the Significant Financial Interest constitutes a financial conflict of interest. If Gladstone determines that a financial conflict of interest exists, Gladstone shall implement, on at least an interim basis, a management plan that shall specify the actions that have been, or will be taken, to manage the Financial Conflict of Interest.</li>
</ol>

<p>&nbsp;</p>

<p><u>Financial Conflict of Interest Reports by Gladstone</u></p>

<ol>
	<li>Prior to the expenditure of any funds under a PHS-funded research award, Gladstone shall submit to the PHS Awarding Component a financial conflict of interest report ("Report") regarding any Significant Financial Interests related to the PHS-funded research that Gladstone finds to be conflicting and implement a management plan as set forth in this Policy. In addition, if, during the course of a PHS-funded research project and subsequent to its initial Report, Gladstone identifies a financial conflict of interest, Gladstone will provide the PHS Awarding Component with a Report, and implement a management plan, within 60 days of identifying the financial conflict of interest.</li>
	<li>For any financial conflict of interest previously reported by Gladstone to PHS, Gladstone shall provide updated Reports annually for the duration of the PHS-funded research project (including extensions with or without funds) in the time and manner specified by the PHS Awarding Component.</li>
	<li>Any required Reports shall be submitted to the PHS Awarding Component by the Gladstone Grants and Contracts Department.</li>
</ol>

<p>&nbsp;</p>

<p><u>Retrospective Reviews</u></p>

<ol>
	<li>If Gladstone identifies a Significant Financial Interest that was not disclosed timely by the Investigator or, for whatever reason, was not previously reviewed by Gladstone during an ongoing PHS-funded research project (e.g., was not timely reviewed or reported by a subrecipient), Gladstone shall, within 60 days: review the Significant Financial Interest, determine whether it is related to PHS-funded research, determine whether a financial conflict of interest exists, and if so, implement, on at least an interim basis, a management plan that shall specify the actions that have been, and will be, taken to manage such financial conflict of interest going forward.</li>
	<li>In addition, whenever a financial conflict of interest in PHS-funded research is not identified or managed in a timely manner, Gladstone shall, within 120 days of the determination of noncompliance, complete a retrospective review of the Investigator\'s activities and the PHS-funded research project to determine whether any PHS-funded research, or portion thereof, conducted during the time period of noncompliance, was biased in the design, conduct, or reporting of such research. Gladstone shall document the review in accordance with PHS requirements.</li>
	<li>Based on the results of the retrospective review, Gladstone will, if appropriate, update the previously submitted Reports affected by the review, specifying the actions that will be taken to manage the financial conflict of interest going forward. If the retrospective review determines that the research was biased in its design, conduct or reporting, Gladstone, through its Grants and Contracts Department, will promptly notify and submit a mitigation report to PHS.</li>
	<li>Furthermore, in any case in which the U.S. Department of Health and Human Services determines that a PHS-funded project of clinical research evaluating the safety or effectiveness of a drug, medical device, or treatment has been designed, conducted, or reported by an Investigator with a conflicting interest that was not managed or reported by Gladstone as required by this Policy, Gladstone shall require the Investigator to disclose the conflicting interest in each public presentation of the results of the research and to request an addendum to previously published presentations.</li>
</ol>

<p>&nbsp;</p>

<p><u>Maintenance and Disclosure of Records</u></p>

<ol>
	<li>In accordance with PHS requirements, the Intellectual Property Department will maintain records relating to all financial disclosures made by Investigators engaged in PHS-funded research, as well as Gladstone\'s review of, and response to, such disclosures (whether or not a disclosure resulted in Gladstone\'s determination of a financial conflict of interest) and all actions taken under this Policy (including any retrospective review, if applicable) for at least 3 years from submission of the final expenditures report for a grant or cooperative agreement and 3 years after final payment for a contract, or for such longer periods as prescribed in applicable regulations, and will make such records available in appropriate circumstances for inspection and review upon request by duly authorized agencies.</li>
	<li>In addition, Gladstone, through the Intellectual Property Department, will provide a written response to a requestor within 5 business days of a request for information concerning a Significant Financial Interest held by a Project Director/Principal Investigator and any other person identified by Gladstone to PHS as senior/key personnel if Gladstone has determined that the Significant Financial Interest constitutes a financial conflict of interest in PHS-funded research.</li>
</ol>

<p>&nbsp;</p>

<p><u>Subgrantees, Contractors, and Collaborators</u></p>

<ol>
	<li>If Gladstone carries out PHS-funded research through a subrecipient (e.g., subgrantees, contractors, or collaborators), Gladstone, through the Gladstone Grants and Contracts Department, will include in its written agreement with the subrecipient a statement as to whether the financial conflicts of interest policy of Gladstone or that of the subrecipient applies to the subrecipient\'s Investigators.</li>
	<li>If the subrecipient\'s financial conflicts of interest policy applies to subrecipient Investigators, the subrecipient shall certify as part of the agreement that its policy complies with the PHS regulations. If the subrecipient cannot make such a certification, Gladstone\'s policy will apply to subrecipient Investigators to the extent necessary for compliance with the PHS regulations.</li>
	<li>If the subrecipient\'s financial conflict of interest policy applies, Gladstone, through the Gladstone Grants and Contracts Department, will include in the subrecipient agreement time periods for the subrecipient to report all identified financial conflicts of interests to Gladstone. Such time periods must provide Gladstone with sufficient time to review the reports and make timely reports to PHS, as necessary.</li>
	<li>If subrecipient Investigators are subject to Gladstone\'s policy, the subrecipient agreement will specify time periods for the subrecipient to submit subrecipient Investigators\' disclosures of Significant Financial Interests to Gladstone so that Gladstone has sufficient time to review the disclosures and comply timely with its review, management, and reporting obligations under this Policy.</li>
</ol>

<p>&nbsp;</p>

<p><u>Notification to PHS</u></p>

<p>Gladstone, through the Intellectual Property Department, will promptly notify the PHS Awarding Component of failure of an Investigator to comply with this Policy or with a management plan provided for hereunder has biased the design, conduct, or reporting of PHS-funded research.</p>

<p>&nbsp;</p>

<p><u>Training</u></p>

<p>Investigators engaged in PHS-funded research are required to complete training regarding their responsibilities under this Policy prior to engaging in any PHS-funded research project and at least every 4 years. Investigators must complete such training immediately if they are new to Gladstone, if Gladstone revises this Policy or its conflict of interest procedures in a manner that affects the requirements of Investigators, or if Gladstone finds that the Investigator is not in compliance with this Policy or a management plan adopted thereunder.</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Conflict of Interest in Research Policy',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/conflict-interest-research-policy',
        'language' => 'und',
      ),
    ),
    'uuid' => 'a241fb4c-9f40-4066-b8ea-01f1df0e62ad',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/cbfd15ca-b753-4b98-8af5-3846e72451bf',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'People',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/people',
        'language' => 'und',
      ),
    ),
    'uuid' => 'cbfd15ca-b753-4b98-8af5-3846e72451bf',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/8454325c-04a0-40c0-a737-d12eb38dd432',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>Gladstone uses game-changing stem cell biology to advance our mission to better understand, prevent, treat and ultimately cure some of the world’s most relentless diseases. Building on current stem cell research, our scientists envision a world in which:</p>

<ul>
	<li>a heart attack patient gets an injection of genetic or chemical factors that reprogram cardiac scar tissue directly into beating heart cells—avoiding the need for a heart transplant or some other form of open-heart surgery;</li>
	<li>a patient with Alzheimer’s disease takes a pill that instructs the patient’s brain to repair or replace injured neurons, thus avoiding the cognitive decline that comes with the condition; and</li>
	<li>stem cells are used to create a human immune system in the laboratory, where it is used to test a vaccine that prevents HIV/AIDS.</li>
</ul>

<p>&nbsp;</p>

<div style="margin-bottom: 28px;"><span style="font-size: 14px; font-weight: bold;">A Nobel Discovery to Fight Disease</span><br />
<iframe frameborder="0" height="236" src="http://player.vimeo.com/video/44776613" width="420"></iframe></div>

<p><a href="/current/builds/demo/node/57"><img alt="The Nobel at Gladstone" class="media-image img__fid__211 img__view_mode__default attr__format__default attr__field_file_image_alt_text[und][0][value]__The Nobel at Gladstone attr__field_file_image_title_text[und][0][value]__" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/Nobel-TN.jpg" style="float: left; margin-right: 15px; margin-top: 6px;" /></a>Gladstone investigators are leading the charge in many of these areas.&nbsp;<a href="/scientist/yamanaka">Shinya Yamanaka</a>, MD, PhD is the scientist who in 2006 discovered how to reprogram skin cells into stem cells that, like embryonic stem cells, can develop into other cell types in the body. This discovery of&nbsp;<em>induced pluripotent stem cells</em>, or iPS cells, has since fundamentally transformed the fields of developmental biology and stem cell research—opening promising new prospects for both personalized and regenerative medicine.</p>

<p>Stem cell biomedicine has advanced rapidly since that time. Thanks to iPS cell technology and ensuing cell-reprogramming discoveries, scientists can now create human stem cells from the skin cells of patients with a specific disease—for research and drug discovery purposes. Such iPS cells contain a complete set of the genes that resulted in that disease and may turn out to be superior to conventional models made in yeast, flies or mice. The use of iPS cells may also eventually reduce the need for controversial embryonic stem cell research. &nbsp;</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '7c6d4536-94d7-4e46-b9ee-cf4733380546',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Stem Cell Biology and Regenerative Medicine',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/stem-cell-biology-and-regenerative-medicine',
        'language' => 'und',
      ),
    ),
    'uuid' => '8454325c-04a0-40c0-a737-d12eb38dd432',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/3c520a70-1169-4209-a376-af4dcac511e3',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>The Stem Cell Core (directed by <a href="/current/builds/demo/our-science/people/kathryn-ivey">Kathryn Ivey</a>, PhD) is a shared research facility—supported by the <a href="http://cirm.ca.gov/">California Institute for Regenerative Medicine</a>—open for use by scientists who wish to employ mouse and human stem cell research techniques. The Core offers comprehensive training, all the necessary equipment and reagents, and technical support for studying human and mouse induced pluripotent stem (iPS) cells and embryonic stem cell lines. It also provides services to derive human iPS cells and form teratomas to test cell lines for pluripotency.</p>

<p><iframe allowfullscreen="" frameborder="0" height="281" mozallowfullscreen="" src="http://player.vimeo.com/video/44776613" webkitallowfullscreen="" width="500"></iframe></p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '7c6d4536-94d7-4e46-b9ee-cf4733380546',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Stem Cell Core',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/stem-cell-core',
        'language' => 'und',
      ),
    ),
    'uuid' => '3c520a70-1169-4209-a376-af4dcac511e3',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/18da3c03-409a-4954-bbb4-562f0b45ae15',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '1ba15dd3-7ce9-4a37-997a-e45e5343b340',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Recent Advances',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/recent-advances-1',
        'language' => 'und',
      ),
    ),
    'uuid' => '18da3c03-409a-4954-bbb4-562f0b45ae15',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/cafc4d46-4bcf-41d2-893f-0ab0a0f52bfa',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '1ba15dd3-7ce9-4a37-997a-e45e5343b340',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Honors and Awards',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/honors-and-awards-2',
        'language' => 'und',
      ),
    ),
    'uuid' => 'cafc4d46-4bcf-41d2-893f-0ab0a0f52bfa',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/388b85fc-4711-46fd-acec-bdc2b629eae3',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>Throughout its history, Gladstone has fostered a collaborative approach to research. Working with a variety of academic and research organizations across disciplines and around the world lets our scientists expand their scientific expertise and technological understanding—in addition to sharing their ideas with others to advance biomedical discovery.</p>

<p>Some of our current research partners are as follows:</p>

<p>[Add graphics - See comments on Trello for suggestions about graphics to add]</p>

<p><strong>Institute for Systems Biology (ISB) </strong>— Collaborative studies between Gladstone and the ISB are based on shared interests in neurodegenerative disorders and cardiovascular disease. The studies involve the use of stem cell technology, whole genome sequencing, and other systems biology approaches to identify gene products and drug targets for Alzheimer’s disease and Huntington’s disease as well as modifier genes for congenital heart disease. Gladstone Investigators leading the studies are <a href="/current/builds/demo/our-science/people/steve-finkbeiner">Steve Finkbeiner</a>, MD, PhD; <a href="/current/builds/demo/our-science/people/yadong-huang">Yadong Huang</a>, MD, PhD; <a href="/current/builds/demo/our-science/people/robert-mahley">Robert Mahley</a>, MD, PhD; <a href="/current/builds/demo/our-science/people/lennart-mucke">Lennart Mucke</a>, MD; and <a href="/current/builds/demo/our-science/people/deepak-srivastava">Deepak Srivastava</a>, MD.</p>

<p><strong>Global Virus Network (GVN) </strong>— The GVN comprises a worldwide network of pre-eminent medical virologists and serves as a global resource for identifying, investigating, and eradicating viral diseases that pose threats to mankind. <a href="/current/builds/demo/our-science/people/warner-greene">Warner Greene</a>, MD, PhD—who directs Gladstone’s virology and immunology research—is also a GVN director. The GVN acts as a resource to government and international organizations by providing guidance about viral disease threats, prevention, and response strategies—and as an advocate for research and training on virus infections and their disease manifestations—disseminating information to authorities and scientific communities throughout the world.</p>

<p><strong>National Resource for Network Biology (NRNB) </strong>— Alexander Pico, PhD, who leads the systems biology bioinformatics group at Gladstone, also serves as the executive director of the NRNB. The NRNB is a center that helps researchers and clinicians analyze the ever-growing wealth of complex biological data by providing access to tools for conducting advanced studies of biological systems and generating sophisticated models of how human systems function or fail—ultimately leading to new and improved treatments and therapies.</p>

<p><strong>iPierian Inc. </strong>— For many years, Gladstone has collaborated with the biopharmaceutical company iPierian Inc. on new applications for induced pluripotent stem cell (iPS cell) technology. iPierian\'s focus on iPS cell applications complements Gladstone\'s commitment to basic biomedical research. <a href="/current/builds/demo/our-science/people/deepak-srivastava">Deepak Srivastava</a>, MD, who directs cardiovascular and stem cell research at Gladstone, co-chairs iPierian\'s scientific advisory board, which includes Gladstone Senior Investigators <a href="/current/builds/demo/our-science/people/benoit-bruneau">Benoit Bruneau</a>, PhD; <a href="/current/builds/demo/our-science/people/bruce-conklin">Bruce Conklin</a>, MD; <a href="/current/builds/demo/our-science/people/shinya-yamanaka">Shinya Yamanaka</a>, MD, PhD; and <a href="/current/builds/demo/our-science/people/lennart-mucke">Lennart Mucke</a>, MD—who directs neurological research at Gladstone.</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Partners in Research',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/partners-research',
        'language' => 'und',
      ),
    ),
    'uuid' => '388b85fc-4711-46fd-acec-bdc2b629eae3',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/9f567285-daab-48d9-a6d9-54a5ca9f1c55',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>The Gladstone Core Facilities provide state-of-the-art services to scientists at the Gladstone Institutes, the University of California, San Francisco, and other research organizations. Services are provided by expert staff on a fee-for-service basis.</p>

<p>To learn more about requesting a service from one of our cores, please click below on that specific core—or click straight through to <span style="background-color:Yellow;">iLab [link to the iLab pages, when created]</span>, where you can log a service request, reserve equipment time, plan a project, or manage payment.</p>

<hr />
<p><span style="background-color:Yellow;">[Add links/images to core lab pages]</span></p>

<p>Behavioral&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Bioinformatics &nbsp;&nbsp;&nbsp;&nbsp; Electron Microscopy</p>

<p>Flow Cytometry&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Genomics&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Histology and LM</p>

<p>Mass Spectrometry&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Stem Cell&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Transgenic Gene Targeting</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Core Facilities',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/core-facilities',
        'language' => 'und',
      ),
    ),
    'uuid' => '9f567285-daab-48d9-a6d9-54a5ca9f1c55',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/8baa67d8-59d6-41ad-b0a5-ce36503f2edb',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>Gladstone founded the Roddenberry Center for Stem Cell Biology and Medicine in 2011 with a $5M gift from the Roddenberry Foundation. The Roddenberry Foundation is led by Heidi and Eugene "Rod" Roddenberry, Jr. and supports and inspires efforts that create and expand new frontiers for the benefit of humanity. It funds innovative solutions to critical global issues in the areas of science and technology, the environment, education, and humanitarian advances.</p>

<p><img alt="Rod Roddenberry" class="media-image img__fid__256 img__view_mode__default attr__format__default attr__field_file_image_alt_text[und][0][value]__Rod Roddenberry attr__field_file_image_title_text[und][0][value]__" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/roddenberry-event_0.jpg" /><br />
Rod Roddenberry, co-founder and chair of the board of directors of the Roddenberry Foundation</p>

<p>Deepak Srivastava, MD, leads the Roddenberry Center for Stem Cell Biology and Medicine at Gladstone, which was set up to honor Star Trek creator Gene Roddenberry. In part, the Center builds on pioneering work done by Gladstone Senior Investigator Shinya Yamanaka, MD, PhD—who currently divides his time between Gladstone and Kyoto University\'s Center for iPS Cell Research and Application (CiRA). Dr. Yamanaka\'s 2006 discovery of induced pluripotent stem cells, or iPS cells, has altered the fields of cell biology and stem cell research—opening promising new avenues for both personalized and regenerative medicine. The Center, which collaborates with the CiRA, houses all stem cell research being performed by Gladstone scientists. Scientists working at the Center are currently creating human disease models based on iPS cells that are needed to speed drug development for a host of devastating cardiovascular, viral, and neurological illnesses. They are also devising new ways to reprogram cells into functional cells that could regenerate damaged organs such as the heart and brain.</p>

<p><a href="/current/builds/demo/node/57"><img alt="The Nobel at Gladstone" class="media-image img__fid__211 img__view_mode__default attr__format__default attr__field_file_image_alt_text[und][0][value]__The Nobel at Gladstone attr__field_file_image_title_text[und][0][value]__" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/Nobel-TN.jpg" /></a><br />
Nobel at Gladstone</p>

<p>Within the Center, scientists are applying pioneering principles of stem cell biology for the advancement of human health. The Center provides them with resources for both blue-sky and de-risking work: blue-sky research follows up on promising but uncertain scientific leads; while de-risking research is necessary to move a promising biomedical discovery through all the rigorous tests required for clinical applications. With tools such as the Roddenberry Clinical-Therapy Accelerator at Gladstone—also made possible by generous support from the Roddenberry Foundation—scientists are already making significant strides towards executing a program for regenerative medicine from basic discoveries to clinical treatments.</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '7c6d4536-94d7-4e46-b9ee-cf4733380546',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Roddenberry Center for Stem Cell Biology and Medicine',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/roddenberry-center-stem-cell-biology-and-medicine',
        'language' => 'und',
      ),
    ),
    'uuid' => '8baa67d8-59d6-41ad-b0a5-ce36503f2edb',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/ece8c7cf-ac5d-4522-8a6e-ee787c95930f',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<div class="ui-node ui-node-page ui-node-lang-neutral ui-odd ui-node-odd ui-node-1 clearfix" id="ui-node-1626">
<div class="ui-content clearfix">
<p><img alt="industry" height="160" src="http://www.gladstoneinstitutes.org/sites/default/files/content/industrypartners240x160.png" style="float: right; margin-left: 7px;" title="industry" width="240" />Gladstone often teams with industry partners to convert results of research discoveries into potential therapies for patients. Such collaborations give pharmaceutical or biotech partners access to new knowledge of disease biology and new technologies that may help with the prevention, treatment and cure of cardiovascular, viral and neurological diseases.</p>

<p>In 2012, Gladstone and <a href="http://www.takeda.com/">Takeda</a> entered into a research collaboration with a focus on neurological diseases. Gladstone has developed proprietary genetically modified mouse models that mimic key aspects of certain neurodegenerative diseases. &nbsp;These models are ideally suited to evaluate&nbsp;compounds―with the hope of identifying promising drug candidates that will ultimately provide benefit to patients with neurological disorders.</p>

<p>Gladstone partnered with <a href="http://www.bms.com/pages/default.aspx">Bristol-Myers Squibb</a>&nbsp;in 2011 to identify biological targets for new drugs that affect a protein called tau. Several lines of evidence suggest that tau contributes to the pathogenesis of Alzheimer’s disease. By identifying targets that can prevent or reverse the disease-causing properties of tau, Bristol-Myers Squibb and Gladstone hope to identify new therapeutic strategies to alleviate the suffering of millions of Alzheimer’s patients and their families around the world.</p>

<p>The previous year, Gladstone began a collaborative research agreement with the international pharmaceutical firm <a href="http://www.lundbeck.com/global">H. Lundbeck A/S</a>, to study and identify drug candidates for neurological diseases such as multiple sclerosis. Lundbeck’s expertise in drug development for central nervous system disorders is an excellent complement for Gladstone’s knowledge of microscopic imaging techniques, biological targets for new drugs and the origins of neurological disease.</p>
</div>
</div>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '70f4e9ca-ffa3-432c-84bf-879eaf69aa02',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Industry Partners',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/industry-partners',
        'language' => 'und',
      ),
    ),
    'uuid' => 'ece8c7cf-ac5d-4522-8a6e-ee787c95930f',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/a98083c8-13e3-40c3-b20d-259245099e9f',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<div class="ui-node ui-node-page ui-node-lang-neutral ui-odd ui-node-odd ui-node-1 clearfix" id="ui-node-31">
<div class="ui-content clearfix">
<p>The Gladstone Institutes provides an outstanding environment for graduate training. Approximately 40 students are currently pursuing PhD or MD/PhD degrees with Gladstone faculty. These students come to Gladstone laboratories via admission to graduate programs primarily at the <a href="http://gladstoneinstitutes.org/about-us/ucsf-affiliation">University of California, San Francisco</a> (UCSF), with which Gladstone is affiliated. Graduate students receive their degree from the University of California.</p>

<p>Gladstone participates in the following affiliated graduate programs:</p>

<ul>
	<li><a href="http://bioeng.berkeley.edu/gradhome.php">Bioengineering (BIO)</a></li>
	<li><a href="http://bmi.ucsf.edu/">Biological and Medical Informatics (BMI)</a></li>
	<li><a href="http://bms.ucsf.edu/">Biomedical Sciences (BMS)</a></li>
	<li><a href="http://biophysics.ucsf.edu/">Biophysics (BIO)</a>&nbsp;</li>
	<li><a href="http://ccb.ucsf.edu/">Chemistry and Chemical Biology&nbsp; (CCB)</a></li>
	<li><a href="http://dscb.ucsf.edu/">Developmental and Stem Cell Biology (DSCB)</a></li>
	<li><a href="http://bms.ucsf.edu/research-area/immunology">Immunology (BMS/PIBS)</a></li>
	<li><a href="http://www.neuroscience.ucsf.edu/neurograd/Index.html">Neuroscience</a></li>
	<li><a href="http://bts.ucsf.edu/pspg/">Pharmaceutical Sciences &amp; Pharmacogenomics (PSPG)</a></li>
	<li><a href="http://tetrad.ucsf.edu/">Tetrad</a></li>
</ul>

<p>In addition, many members of the Gladstone faculty have affiliations with a number of other UCSF programs. Interested individuals should contact either one of our <a href="http://today.gladstone.internal:8888/current/builds/demo/our-science/directors-and-investigators">faculty members</a> or the appropriate UCSF department.</p>
</div>
</div>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Graduate Students',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/graduate-students',
        'language' => 'und',
      ),
    ),
    'uuid' => 'a98083c8-13e3-40c3-b20d-259245099e9f',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/49e2a4a4-bfcd-4cb3-b3df-b9e2c50bb00e',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<div class="ui-node ui-node-page ui-node-lang-neutral ui-odd ui-node-odd ui-node-1 clearfix" id="ui-node-38">
<div class="ui-content clearfix">
<p>Gladstone believes local youth should be able to grow up to play a key role in the biomedical revolution that is happening right now in the San Francisco Bay Area. So we’ve spearheaded numerous programs to engage San Francisco students—especially those who are underrepresented in the sciences—in the game-changing research happening at Gladstone.</p>

<div style="float: right; padding: 10px 0px 10px 15px;">
<div style="width: 420px; border-bottom: solid 2px #167BA6;"><img alt="Students" border="0" height="258" src="http://gladstoneinstitutes.org/sites/default/files/students-lab-coats420x258.jpg" style="" width="420" />
<div style="margin-top: 10px; margin-bottom: 10px;"><span style="font-family: helvetica; font-size: 11px;"><strong>Student Scholars at Gladstone</strong></span></div>
</div>
</div>

<p><span style="line-height: 200%; font-size: 16px;"><strong>Gladstone NSLC Scholars</strong></span><br />
Gladstone awards 12 scholarships to San Francisco Unified School District (SFUSD) high school students to attend the National Student Leadership Conference (NSLC) at UC Berkeley for free. Health Science Academy teachers at Galileo Academy, Phillip &amp; Sala Burton and Raoul Wallenberg are responsible for identifying students for this scholarship at each of their school sites. This 10-day conference gives students a peek into the world of science, medicine and healthcare. Gladstone also invites all NSLC students to visit our facilities each summer, where they participate in a series of scientific lectures on hot medical topics.</p>

<p><span style="line-height: 200%; font-size: 16px;"><strong>Gladstone Summer Scholars Internship Program</strong></span><br />
In 2008 we created the Gladstone Summer Scholars internship program (GSS) to increase the number of diverse students who pursue undergraduate and graduate science degrees—and to expose them to cutting-edge biomedical research. This 9-week paid internship partners each student with a scientific mentor and culminates with the student presenting his or her work, hypothesis and findings to the scientific community at Gladstone. The GSS program is available to 6 rising seniors from SFUSD public high schools, an emphasis is placed on identifying students from low-income backgrounds and those from groups that are historically underrepresented in the sciences (i.e., African-American, Hispanic, Native Pacific Islander, or Native American students).</p>

<p><span style="line-height: 200%; font-size: 16px;"><strong>Gladstone Science Squad</strong></span><br />
Throughout the school year, 40 Gladstone scientists reach nearly 1,200 students in SFUSD high school science classrooms. During these visits—which take place three times a year—Gladstone scientists give interactive lectures and hands-on demonstrations that showcase biomedical research on three topics: HIV/AIDS, the brain and stem cells.&nbsp;</p>

<p><span style="line-height: 200%; font-size: 16px;"><strong>Contact Information:</strong></span><br />
<strong>Shannon Noonan</strong><br />
Education and Community Partnerships Manager<br />
<a href="mailto:shannon.noonan@gladstone.ucsf.edu">shannon.noonan@gladstone.ucsf.edu</a><br />
415-734-2054</p>
</div>
</div>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Student',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/student',
        'language' => 'und',
      ),
    ),
    'uuid' => '49e2a4a4-bfcd-4cb3-b3df-b9e2c50bb00e',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/13485367-a9f7-48d8-be7e-bb313263ac59',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '7c6d4536-94d7-4e46-b9ee-cf4733380546',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Publications',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/publications-3',
        'language' => 'und',
      ),
    ),
    'uuid' => '13485367-a9f7-48d8-be7e-bb313263ac59',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/6aead1ba-44bb-46d6-8882-f95be325e664',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '7c6d4536-94d7-4e46-b9ee-cf4733380546',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Seminars and Events',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/seminars-and-events-2',
        'language' => 'und',
      ),
    ),
    'uuid' => '6aead1ba-44bb-46d6-8882-f95be325e664',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/8024f440-c2a2-4368-bb28-111ca798b0c5',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '7c6d4536-94d7-4e46-b9ee-cf4733380546',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Recent Advances',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/recent-advances-2',
        'language' => 'und',
      ),
    ),
    'uuid' => '8024f440-c2a2-4368-bb28-111ca798b0c5',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/13ad48a3-1cbe-465f-b193-f138bb72294d',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<div class="block-content">
<article class="node node-basic-page article clearfix" id="node-61" role="article">
<div class="node-content">
<div class="field field-name-body field-type-text-with-summary field-label-hidden view-mode-full">
<div class="field-items">
<div class="field-item even">
<p><strong>Center for In Vivo Imaging Research (CIVIR)</strong></p>

<div style="display: block;">
<p>In 2010, the Gladstone Institutes established the Center for In Vivo Imaging Research (CIVIR). CIVIR’s mission is<em> </em>to develop technologies to investigate the dynamic interactions between the immune, vascular and nervous systems as a way to better understand the origins and progress of neurological diseases. We plan to use these techniques to design and test effective treatments for these diseases.</p>

<p><a href="http://www.gladstoneinstitutes.org/akassoglou">Katerina Akassoglou, PhD</a>, is CIVIR’s founding Director while <a href="http://www.gladstoneinstitutes.org/davalos">Dimitrios Davalos, PhD</a>, serves as Associate Director. Different funding sources contributed to the establishment of CIVIR, including the international pharmaceutical company H. Lundbeck A/S, &nbsp;the S.D. Bechtel, Jr. &nbsp;Foundation and an anonymous donor.</p>
</div>

<p><strong>Taube/Koret Center for Huntington\'s Disease Research</strong></p>

<div style="display: block;">
<p>In 2009, Gladstone joined forces with Taube Philanthropies and the Koret Foundation to found the Taube/Koret Center for Huntington\'s Disease Research. The Center focuses on new solutions for overcoming this crippling neurodegenerative disorder, which robs patients of their independence by causing things such as short-term memory loss, involuntary movements of the head and trouble with swallowing. Eventually, fatalities occur from complications such as choking or heart failure. No approved drugs exist to even slow the progression of this relentless disorder.</p>

<p>Gladstone’s Taube/Koret Center plays a vital role in decreasing such human suffering by addressing what is known in the biomedical industry as the&nbsp;<em>valley of death</em>. This is the barren territory that few traverse successfully, as many research institutions fail to move a promising biomedical discovery through all the rigorous tests required before a drug company wants to transform the discovery into a pharmaceutical product to help patients. To help Gladstone discoveries successfully cross through the valley, the Taube/Koret Center subsidizes the myriad of early-stage, de-risking tests necessary to make a drug candidate more attractive to pharmaceutical-industry partners, such as tests that reveal at what concentrations a therapeutic compound becomes efficacious—or toxic.&nbsp;</p>

<p>The Center is also an example of how Gladstone leverages donations for maximum benefit to patients. Using the inaugural $3.6M gift from the Koret Foundation and Taube Philanthropies, Gladstone has since brought in $22M in additional donations. This pattern of leverage can double the value of a gift and ultimately lead to more value to patients and families struck by devastating diseases such as Huntington’s.</p>
</div>

<p><strong>Roddenberry Center for Stem Cell Biology and Medicine</strong></p>

<div style="display: block;">
<p>Gladstone founded the Roddenberry Center for Stem Cell Biology and Medicine in 2011 with an unprecedented $5M gift from the <a href="http://roddenberryfoundation.org/">Roddenberry Foundation</a>. Deepak Srivastava, MD, leads the Center, which was set up to honor <em>Star Trek</em> creator Gene Roddenberry. In part, the Center builds on pioneering work done by Gladstone Senior Investigator <a href="http://www.gladstoneinstitutes.org/yamanaka">Shinya Yamanaka</a>, MD, PhD—who currently divides his time between Gladstone and Kyoto University’s Center for iPS Cell Research and Application (<a href="http://www.cira.kyoto-u.ac.jp/e/">CiRA</a>). Dr. Yamanaka’s 2006 discovery of <em>induced pluripotent stem cells</em>, or iPS cells, has altered the fields of cell biology and stem cell research—opening promising new prospects for both personalized and regenerative medicine. The Center, which collaborates with CiRA, is creating human, iPS-based disease models needed to accelerate drug development for a host of devastating for cardiovascular, viral and neurological illnesses.&nbsp;</p>

<p>Scientists working at the Center focus on applying the pioneering the principles of stem cell biology for the advancement of human health. The Center provides them with resources for both blue-sky and de-risking work: blue-sky research follows up on promising but uncertain scientific leads; while de-risking research is necessary to move a promising biomedical discovery through all the rigorous tests required for clinical applications.</p>
</div>

<p><strong>Hellman Family Foundation Alzheimer\'s Research Program</strong></p>

<div style="display: block;">
<p>Thanks to a 2011 gift of $1 million from the Hellman Family Foundation, Gladstone launched the Hellman Family Foundation Alzheimer’s Research Program to help spur the development of medications for this devastating illness. Headed by Gladstone Senior Investigator&nbsp;<a href="http://www.gladstoneinstitutes.org/finkbeiner">Steve Finkbeiner</a>, MD, PhD, the Program encourages industry interest in creating drugs for the millions around the world with Alzheimer’s disease. The Hellman Family Foundation Alzheimer’s Research Program at Gladstone, which operates in collaboration with the Memory and Aging Center at the University of California, San Francisco (UCSF), leverages infrastructure, resources and research from Gladstone’s existing Taube-Koret Center for Huntington’s Disease Research.</p>

<p>The Program plays a vital role in addressing what is known as the&nbsp;<em>valley of death</em>&nbsp;among those in the biomedical industry. This is the barren territory that few traverse successfully, as many research institutions fail to move a promising biomedical discovery through all the rigorous tests required before a drug company wants to transform the discovery into a pharmaceutical product to help patients. To help Gladstone discoveries successfully cross through the valley of death, the Hellman Family Foundation Alzheimer’s Research Program subsidizes the myriad of early-stage, de-risking tests necessary to make a drug candidate more attractive to pharmaceutical-industry partners, such as tests that reveal at what concentrations a drug stops being therapeutic and instead becomes toxic. Further, the program’s partnership with UCSF’s Memory and Aging Center improves our capacity to do clinical trials.</p>
</div>

<p><strong>Center for Comprehensive Alzheimer’s Disease Research</strong></p>

<div style="display: block;">
<p>In 2011, the S.D. Bechtel, Jr. Foundation helped launch the Center for Comprehensive Alzheimer’s Disease Research at Gladstone with a generous $6M lead gift. This investment is helping Gladstone scientists more quickly develop therapies for those suffering from Alzheimer’s, or who are at increased risk of getting the disease. Currently, the field lacks effective medications to prevent, halt or reverse this devastating illness.</p>

<p>The Center taps Gladstone’s unique expertise in neurodegenerative diseases. In recent years, for instance, Gladstone scientists demonstrated how amyloid proteins that build up in brains of Alzheimer patients disrupt cognitive processes such as memory—and how this process may be prevented and reversed. We have also established one of the world’s leading drug-development programs targeting Alzheimer’s main genetic risk factor. Last year, Gladstone scientists announced a promising new drug candidate that prevents memory deficits and the loss of synaptic connections between brain cells—key features of Alzheimer’s—in mice modeling the disease.</p>

<p>Since the establishment of this Center, some of its most promising research efforts have been leveraged into collaborations with leading pharmaceutical companies, including Bristol-Myers Squibb and Takeda Pharmaceuticals.</p>

<p>Internal collaborations between this Center and the <a href="http://www.gladstoneinstitutes.org/our-science/translational-research">Gladstone Center for Translational Research</a> will allow scientists to build on these successes and to identify additional drug targets and drug candidates that can be transferred to outside entities for further development and delivery to patients.</p>
</div>
</div>
</div>
</div>
</div>
</article>
</div>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '70f4e9ca-ffa3-432c-84bf-879eaf69aa02',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Centers',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/centers-1',
        'language' => 'und',
      ),
    ),
    'uuid' => '13ad48a3-1cbe-465f-b193-f138bb72294d',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/2ddd6211-a2ac-43da-b227-9cc2abac4017',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>A gift to Gladstone can take many forms:</p>

<ul>
	<li><a href="#CC">Credit Card (online or by phone)</a></li>
	<li><a href="#Ck">Check</a></li>
	<li><a href="#eft">Electronic Funds Transfer</a></li>
	<li><a href="#sec">Securities</a></li>
	<li><a href="#pgift">Planned Gift</a></li>
</ul>

<p>&nbsp;</p>

<p><a name="CC"></a> <span style="font-size: 18px; line-height: 200%;"><strong>Credit Card</strong></span><br />
Credit card contributions may be made <a href="https://donation.towercare.com/gladstone-donation-form">online</a> via our secure form, or by phone. Please contact us at 415.734.2581 should you wish to make a credit card gift by phone.</p>

<p><a name="Ck"></a><strong><span style="font-size: 18px; line-height: 200%;">Check</span></strong><br />
Please make checks payable to:</p>

<p>Gladstone Foundation</p>

<p>Checks may be mailed to:</p>

<p>Gladstone Institutes<br />
Attention: Philanthropy<br />
1650 Owens Street<br />
San Francisco, CA&nbsp;94158</p>

<p><a name="eft"></a><strong><span style="font-size: 18px;">Electronic Funds Transfer</span></strong></p>

<p>To donate to Gladstone via electronic funds transfer, please use the following Gladstone Foundation bank information:</p>

<p>First Republic Bank<br />
101 Pine Street<br />
San Francisco, CA&nbsp; 94111<br />
ABA: 321 081 669<br />
Account: 80000891789</p>

<p>Please include the beneficiary name “Gladstone Foundation” with your contribution.</p>

<p><a name="sec"></a><strong><span style="font-size: 18px;">Securities</span></strong></p>

<p>To make a donation of securities to Gladstone, please download our <a href="/sites/default/files/Gladstone_Securities_Transfer_Form.pdf">securities transfer form [PDF]</a> or use the following Gladstone broker information:</p>

<div style="width: 150px; float: left;">
<div>
<p>Broker name:<br />
Phone:<br />
Transfer to:<br />
Gladstone account:</p>

<p style="height: 40px;">Registration of:</p>
</div>
</div>

<div style="">
<div>
<p>First Republic Securities<br />
877.348.5576<br />
DTC 0443<br />
33L086965</p>

<p>Gladstone Foundation<br />
1650 Owens Street<br />
San Francisco, CA 94158</p>
</div>
</div>

<p>Please notify us of your securities contribution by contacting us with:</p>

<ul>
	<li>Your name</li>
	<li>Name(s) of contributed securities</li>
</ul>

<p>Contact information:</p>

<p>Gladstone Philanthropy<br />
415.734.2581<br />
<a href="mailto:giving@gladstone.ucsf.edu">giving@gladstone.ucsf.edu</a></p>

<p><span style="font-size: 19px;"><strong>Planned Gift</strong></span></p>

<p>For more information about making a planned gift to Gladstone, such as a bequest or charitable trust, please contact:</p>

<p>Gladstone Philanthropy<br />
415.734.2581<br />
<a href="mailto:giving@gladstone.ucsf.edu">giving@gladstone.ucsf.edu</a></p>

<p><strong>Thank you very much for supporting Gladstone’s efforts to improve human health around the world. </strong></p>

<p><span style="line-height: 130%;"><em>Gladstone Institutes Federal Tax Identification Number:<br />
23-7203666</em> </span></p>

<p><span style="line-height: 130%;"><a name="pgift"></a></span></p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Ways to Give',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/ways-give',
        'language' => 'und',
      ),
    ),
    'uuid' => '2ddd6211-a2ac-43da-b227-9cc2abac4017',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/9fb10ca3-6364-4905-a34a-de624cbdd5a4',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>From underwriting events to providing in-kind contributions, Gladstone’s generous corporate sponsors help us to achieve revolutionary human health discoveries.</p>

<p>We greatly appreciate the support of each of our sponsors:</p>

<div style="padding: 20px 0px;">
<div style="border-top: solid 1px #507B8A; border-bottom: solid 1px #507B8A;"><a href="https://www.hover.com/" target="_blank"><img alt="Hover" border="0" height="55" src="http://gladstoneinstitutes.org/sites/default/files/hover-logo-w-text-420x55.png" style="padding: 10px 0px 10px 0px;" width="420" /></a></div>
</div>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Our Sponsors',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/our-sponsors',
        'language' => 'und',
      ),
    ),
    'uuid' => '9fb10ca3-6364-4905-a34a-de624cbdd5a4',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/182dc2e5-452f-438c-aec3-f7b5f2406aeb',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<div style="margin-bottom: 20px;">
<div style="margin-bottom: 20px;">
<p>Why support Gladstone?</p>

<p><em>Our human health discoveries are improving countless lives.</em></p>

<p>Our scientists...</p>

<div style="width: 360px;">
<ul>
	<li>Won the Nobel Prize for discovering how to transform ordinary adult skin cells into cells that, like embryonic stem cells, are pluripotent—capable of becoming any cell in the body<br />
	<span style="line-height: 1em;">&nbsp;</span></li>
	<li>Identified a potential new therapy that may block AIDS, based on their discovery of how the body—and not the HIV virus—kills most of the immune system’s essential white blood cells<br />
	<span style="line-height: 1em;">&nbsp;</span></li>
	<li>Transformed non-beating cells into beating heart muscle cells with the potential to replace tissues destroyed by heart attack<br />
	<span style="line-height: 1em;">&nbsp;</span></li>
	<li>Discovered that a gene variant associated with long life may also help defend against Alzheimer’s and other diseases that impair cognition<br />
	<span style="line-height: 1em;">&nbsp;</span></li>
	<li>Used revolutionary drug cocktails to turn skin cells into fully functioning cells needed for regenerative medicine: a neuron, beating heart cell, liver cell, and insulin-producing pancreas cell</li>
</ul>
</div>
...and so much more.</div>
Watch our scientists describe extraordinary examples of the work made possible with philanthropic support:</div>
<!-- VIDEOS -->

<div align="center" style="margin-top: 15px;"><!-- CARDIO --><iframe allowfullscreen="" frameborder="0" height="237" mozallowfullscreen="" src="http://player.vimeo.com/video/44776347?title=0&amp;byline=0&amp;portrait=0" webkitallowfullscreen="" width="420"></iframe><br />
<span style="font-size: 16px; line-height: 200%;"><strong>Cardiovascular Disease</strong></span></div>

<div align="center" style="margin-top: 15px;"><!-- VIROLOGY --><iframe allowfullscreen="" frameborder="0" height="237" mozallowfullscreen="" src="http://player.vimeo.com/video/44776404?title=0&amp;byline=0&amp;portrait=0" webkitallowfullscreen="" width="420"></iframe><br />
<span style="font-size: 16px; line-height: 200%;"><strong>Immunological and Viral Disease</strong></span></div>

<div align="center" style="margin-top: 15px;"><!-- NEURO --><iframe allowfullscreen="" frameborder="0" height="237" mozallowfullscreen="" src="http://player.vimeo.com/video/44776456?title=0&amp;byline=0&amp;portrait=0" webkitallowfullscreen="" width="420"></iframe><br />
<span style="font-size: 16px; line-height: 200%;"><strong>Neurological Disease</strong></span></div>

<div align="center" style="margin-top: 15px;"><!-- STEM CELL --><iframe allowfullscreen="" frameborder="0" height="237" mozallowfullscreen="" src="http://player.vimeo.com/video/44776613?title=0&amp;byline=0&amp;portrait=0" webkitallowfullscreen="" width="420"></iframe><br />
<span style="font-size: 16px; line-height: 200%;"><strong>Stem Cells and Regenerative Medicine</strong></span></div>
<!-- END VIDEOS -->

<p>For more information, please contact Gladstone Philanthropy at 415.734.2581 or <a href="mailto:giving@gladstone.ucsf.edu">giving@gladstone.ucsf.edu</a>.</p>',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Why Give to Gladstone',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/why-give-gladstone',
        'language' => 'und',
      ),
    ),
    'uuid' => '182dc2e5-452f-438c-aec3-f7b5f2406aeb',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/2f06ee2e-ceb2-4bef-b5cf-269e86f19145',
      'cause' => FALSE,
    ),
    'body' => array(),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Events for Scientists',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/events-scientists',
        'language' => 'und',
      ),
    ),
    'uuid' => '2f06ee2e-ceb2-4bef-b5cf-269e86f19145',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/ba73d164-20c0-46e8-9265-a3f678a6a789',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p><img alt="Stem Cell Timeline" class="media-image img__fid__257 img__view_mode__default attr__format__default attr__field_file_image_alt_text[und][0][value]__Stem Cell Timeline attr__field_file_image_title_text[und][0][value]__" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/Stem-Cell-Timeline_03_674.png" /></p>

<ol>
	<li>Gurdon, JB, Elsdale TR, Fischberg M. Sexually mature individuals of Xenopus laevis from the transplantation of single somatic nuclei. Nature 182: 65–65. 1958.</li>
	<li>Till J, McCulloch E. A direct measurement of the radiation sensitivity of normal mouse bone marrow cells. Radiation Research 14 (2): 213–222, 1961.</li>
	<li>Jaenisch R, Mintz B. Simian virus 40 DNA sequences in DNA of healthy adult mice derived from preimplantation blastocysts injected with viral DNA. Proc. Natl. Acad. Sci. USA 71(4): 1250–1254, 1974.</li>
	<li>Evans M, Kaufman M. Establishment in culture of pluripotential cells from mouse embryos. Nature 292 (5819): 154–156, 1981.</li>
	<li>Martin G. Isolation of a pluripotent cell line from early mouse embryos cultured in medium conditioned by teratocarcinoma stem cells. Proc Natl Acad Sci USA 78 (12): 7634–7638, 1981.</li>
	<li>Campbell KHS, McWhir J, Ritchie WA, Wilmut I. Sheep cloned by nuclear transfer from a cultured cell line. Nature 380 (6569): 64–66, 1996.</li>
	<li>Jones J, Marshall V, Swiergiel J, Waknitz M, Shapiro S, Itskovits-Eldor J, Thomson J. Embryonic stem cell lines derived from human blastocysts. Science 282 (5391): 1145–1147, 1998.</li>
	<li>Takahashi K, Yamanaka S. Induction of pluripotent stem cells from mouse embryonic and adult fibroblast cultures by defined factors. Cell 126: 663–676, 2006.</li>
	<li>Takahashi K, Tanabe K, Ohnuki M, Narita M, Ichisaka T, Tomoda K, Yamanaka S. Induction of pluripotent stem cells from adult human fibroblasts by defined factors. Cell 131: 861–872, 2007.</li>
	<li>Nakagawa M, Koyanagi M, Tanabe K, Takahashi K, Ichisaka T, Aoi T, Okita K, Mochiduki Y, Takizawa N, Yamanaka S. Generation of induced pluripotent stem cells without Myc from mouse and human fibroblasts. Nat Biotechnol 26: 101–106, 2008, Epub 2007 Nov 30.</li>
	<li>Yu J, Vodyanik M, Smuga-Otto K, Antosiewicz-Bourget J, Frane J, Tian S, Nie J, Jonsdottir G, Ruotti V, Stewart R, Slukvin I, Thomson J. Induced pluripotent stem cell lines derived from human somatic cells. Science 318: 1917-1920, 2007. Epub Nov 2007.</li>
	<li>Hanna J, Wernig M, Markoulaki S, Sun CW, Meissner A, Cassady CP, Beard C, Brambrink T, Wu LC, Townes TM, Jaenisch R. Treatment of sickle cell anemia mouse model with iPS cells generated from autologous skin. Science 318(5858): 1920-1923, 2007.</li>
	<li>Wernig M, Zhao JP, Pruszak J, Hedlund E, Fu D, Soldner F, Broccoli V, Constantine-Paton M, Isacson O, Jaenisch R. Neurons derived from reprogrammed fibroblasts functionally integrate into the fetal brain and improve symptoms of Parkinson’s disease. Proc. Natl. Acad. Sci. USA 105(15): 5856-5861, 2008.</li>
	<li>Okita K, Nakagawa M, Hyenjong H, Ichisaka T, Yamanaka S. Generation of mouse induced pluripotent stem cells without viral vectors. Science 322 (5903): 949-953, 2008.</li>
	<li>Vierbuchen T, Ostermeier A, Pang ZP, Kokubu Y, Sudhof TC, Wernig M. Direct conversion of fibroblasts to functional neurons by defined factors. Nature 463 (7284): 1035-41. Epub 2010 Jan 27.</li>
	<li>Ieda M, Fu J, Delgado-Olguin P, Vedantham V, Hayashi Y, Bruneau B, Srivastava D. Direct reprogramming of fibroblasts into functional cardiomyocytes by defined factors. Cell 142: 375-386, 2010.</li>
	<li>Szabo E, Rampalli S, Risueno R, Schnerch A, Mitchell R, Fiebig-Comyn A, Levadoux-Martin M, Bhatia M. Direct conversion of human fibroblasts to multilineage blood progenitors. Nature 468: 521-526, 2010.</li>
	<li>Zhu S, Li W, Zhou H, Wei W, Ambasudhan R, Lin T, Kim J, Zhang K, Ding S. Reprogramming of human primary somatic cells by OCT4 and chemical compounds. Cell Stem Cell 7:651–655, 2010.</li>
	<li>Ambasudhan R, Talantova M, Coleman R, Yuan X, Zhu S, Lipton S, Ding S. Direct reprogramming of adult human fibroblasts to functional neurons under defined conditions. Cell Stem Cell 9: 113-118, 2011.</li>
	<li>Qian L, Huang Y, Spencer CI, Foley A, Vedantham V, Liu L, Conway SJ, Fu JD, Srivastava D. In vivo reprogramming of murine cardiac fibroblasts into induced cardiomyocytes. Nature 485: 593–8, 2012.</li>
	<li>The HD iPSC Consortium. Induced Pluripotent Stem Cells from Patients with Huntington’s Disease Show CAG-Repeat-Expansion-Associated Phenotypes. Cell Stem Cell 11:264-278, 2012.</li>
	<li>http://mainichi.jp/english/english/newsselect/news/20120613p2a00m0na005000c.html</li>
	<li>Ring KL, Tong LM, Balestra ME, Javier R, Andrews-Zwilling Y, Li G, Walker D, Zhang WR, Kreitzer AC, Huang Y. Direct reprogramming of mouse and human fibroblasts into multipotent neural stem cells with a single factor. Cell Stem Cell 11: 100-9, 2012.</li>
	<li>Tomoda K, Takahashi K, Leung K, Okada A, Narita M, Yamada NA, Eilertson KE, Tsang P, Baba S, White MP, Sami S, Srivastava D, Conklin BR, Panning B, Yamanaka S. Derivation conditions impact x-inactivation status in female human induced pluripotent stem cells. Cell Stem Cell 11: 91-9, 2012.</li>
</ol>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '7c6d4536-94d7-4e46-b9ee-cf4733380546',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Stem Cells: A timeline',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/stem-cells-timeline',
        'language' => 'und',
      ),
    ),
    'uuid' => 'ba73d164-20c0-46e8-9265-a3f678a6a789',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/348de9da-98dd-4b52-aab5-8895cf2c8d31',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>Gladstone CIRM Scholars Program The Gladstone CIRM Scholars Program, made possible with generous support from the California Institute for Regenerative Medicine (CIRM), is one of the hallmarks of Gladstone\'s stem cell research efforts. The program trains 10 biomedical scientists each year: seven postdoctoral and three clinical scholars.</p>

<p>Gladstone offers a unique training environment for CIRM Scholars, characterized by a commitment to educating the next generation of biomedical scientists—with substantial feedback from experienced mentors. Mentoring is a key aspect of the Gladstone postdoctoral program. This emphasis results from the commitment of an exemplary group of investigators who are dedicated to training young scientists.</p>

<p>The primary goal of the CIRM Scholars Program is to conduct research on regenerative medicine to develop new therapies for the treatment of disease.</p>

<p><strong>Current CIRM Scholars</strong></p>

<p><a href="/current/builds/demo/our-science/people/bruce-conklin">Conklin Laboratory</a></p>

<p>Nathaniel Huebsch, PhD</p>

<p>Luke Judge, MD, PhD</p>

<p>Ding Laboratory</p>

<p>Saiyong Zhu, PhD</p>

<p><a href="/current/builds/demo/our-science/people/steve-finkbeiner">Finkbeiner Laboratory</a></p>

<p>Kelly Haston, PhD</p>

<p>Julia Kaye, PhD</p>

<p><a href="/current/builds/demo/our-science/people/yadong-huang">Huang Laboratory</a></p>

<p>Helen Fong, PhD</p>

<p><a href="/current/builds/demo/our-science/people/deepak-srivastava">Srivastava Laboratory</a></p>

<p>Kimberly Cordes, PhD</p>

<p><a href="/current/builds/demo/our-science/people/shinya-yamanaka">Yamanaka Laboratory</a></p>

<p>Katie Worringer, PhD</p>

<p>Past CIRM Scholars</p>

<p>Yen Bui, MD, PhD I</p>

<p>rfan Kathiriya, MD, PhD</p>

<p>Yaisa Andrews-Zwilling, PhD</p>

<p>Shiro Baba, PhD</p>

<p>Cheng-Zhong Wang, PhD</p>

<p>Patrick Devine, PhD</p>

<p>Li Qian, PhD</p>

<p>Tim Rand, PhD</p>

<p>Kiichiro Tomoda, PhD</p>

<p>Silke Wissing, PhD</p>

<p>Zhiyuan Yang, PhD</p>

<p>Juan Jose Fung, PhD</p>

<p>CIRM Grants Gladstone investigators have received several CIRM grants to advance their regenerative medicine programs. Gladstone has received $34.7 million in grants—more than many large academic institutions and a testament to the high quality of stem cell research being performed at Gladstone.</p>

<p>Current CIRM Grants</p>

<p><a href="/current/builds/demo/our-science/people/benoit-bruneau">Benoit Bruneau, PhD</a></p>

<p>Induction of Cardiogenesis in Pluripotent Cells via Chromatin Remodeling Factors</p>

<p>Sheng Ding, PhD</p>

<p>Reprogramming of Human Somatic Cells back to Pluripotent Embryonic Stem Cells Autologous Retinal Pigmented Epithelial Cells Derived from Induced Pluripotent Stem Cells for the Treatment of Atrophic Age Related Macular Degeneration</p>

<p><a href="/current/builds/demo/our-science/people/warner-greene">Warner C. Greene, MD, PhD</a></p>

<p>Maximizing the Safety of Induced Pluripotent Stem Cells as an Infusion Therapy: Limiting the Mutagenic Threat of Retroelement Retrotransportation during iPSC Generation, Expansion, and Differentiation.</p>

<p><a href="/current/builds/demo/our-science/people/yadong-huang">Yadong Huang, MD, PhD</a></p>

<p>Defining the Isoform-Specific Effects of Apolipoprotein E on the Development of iPS Cells into Functional Neurons in Vitro and in Vivo.</p>

<p><a href="/current/builds/demo/our-science/people/robert-mahley">Robert Mahley, MD, PhD</a></p>

<p><a href="/current/builds/demo/our-science/people/bruce-conklin">Bruce Conklin, MD</a></p>

<p>CIRM Training Program Deepak Srivastava, MD Mechanisms of Direct Cardiac Reprogramming The Gladstone CIRM Shared Human Embryonic Stem Cell Core Laboratory</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '7c6d4536-94d7-4e46-b9ee-cf4733380546',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'California Institute for Regenerative Medicine',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/california-institute-regenerative-medicine',
        'language' => 'und',
      ),
    ),
    'uuid' => '348de9da-98dd-4b52-aab5-8895cf2c8d31',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/339e97a6-2a57-4c8b-94f1-ffcc866e85bc',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<div class="ui-node ui-node-page ui-node-lang-neutral ui-odd ui-node-odd ui-node-1 clearfix" id="ui-node-37">
<div class="ui-content clearfix">
<div style="float: right; padding: 4px 0px 10px 15px;">
<div style="width: 315px; border-bottom: solid 2px #167BA6;"><img alt="Leor Weinberger at the Commonwealth Club" border="0" height="198" src="http://gladstoneinstitutes.org/sites/default/files/weinberger-commonwealth-club315x198.jpg" style="" width="315" />
<div style="margin-top: 10px; margin-bottom: 10px;"><span style="font-family: helvetica; font-size: 11px;"><strong>Gladstone scientists speak at community events</strong></span></div>
</div>
</div>

<p>As part of our mandate to help science overcome disease, Gladstone is dedicated to training tomorrow’s scientists. We send our researchers to local schools to discuss topics such as HIV/AIDS, brain disorders and the future of stem cell research. We also offer scholarships and internships to local high school students—including our next-door neighbors in the Hunter’s Point and Bayview communities—to train and inspire groups who are otherwise underrepresented in the sciences.</p>

<p>For the broader community, Gladstone offers public lectures on the latest advances and trends in cardiovascular, viral, neurological and stem cell research. We also work closely with advocacy groups such as the <a href="http://www.alz.org/norcal/">Alzheimer’s Association</a> and the <a href="http://www.heart.org/HEARTORG/Affiliate/SanFrancisco/California/Home_UCM_WSA022_AffiliatePage.jsp">American Heart Association</a>.</p>

<div style="float: left; padding: 4px 15px 10px 0px;">
<div style="width: 315px; border-bottom: solid 2px #167BA6;"><img alt="Student and mentors" border="0" height="198" src="http://gladstoneinstitutes.org/sites/default/files/marianna-mentors315x198.jpg" style="" width="315" />
<div style="margin-top: 10px; margin-bottom: 10px;"><span style="font-family: helvetica; font-size: 11px;"><strong>Student mentoring at Gladstone</strong></span></div>
</div>
</div>

<p>For those focused on cardiovascular care, the <a href="/current/builds/demo/node/24">Gladstone Institute of Cardiovascular Disease</a> and the <a href="http://www.lipid.org/">National Lipid Association</a> jointly sponsor the Gladstone Lipid Clinic—which sees patients and teaches <a href="http://gladstoneinstitutes.org/u/tbersot/ldtp.html">lipid-disorder management courses</a> to healthcare professionals.</p>
</div>
</div>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Outreach',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/outreach',
        'language' => 'und',
      ),
    ),
    'uuid' => '339e97a6-2a57-4c8b-94f1-ffcc866e85bc',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/2b9a6c60-4ac1-454f-b4bb-b275756d3777',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<div style="margin-bottom: 15px;">Are you a community college student interested in doing research in a lab this summer? Then the Gladstone PUMAS internship program is for you! We are now accepting applications for this summer; the deadline to apply is Friday May 9, 2014 at 6:00pm.</div>

<p><span style="line-height: 160%;"><strong>About the Gladstone Institutes</strong></span><br />
To ensure our work does the greatest good, the Gladstone Institutes focus on conditions with profound medical, economic, and social impact – unsolved diseases of the brain, the heart, and the immune system. Affiliated with the University of California, San Francisco, Gladstone is an independent, nonprofit life science research organization that uses visionary science and technology to overcome disease.</p>

<p><strong>About the PUMAS program</strong></p>

<ul>
	<li>Limited to 4 qualified students (see below for eligibility requirements)</li>
	<li>8-week summer internship from Monday June 16 – Friday August 9, 2014</li>
	<li>Students will be paid minimum wage ($10.74/hr) and work full-time (~32hrs/wk)</li>
	<li>PUMAS interns will work 1-on-1 with a scientific mentor doing hands-on biomedical research in a laboratory at Gladstone</li>
	<li>Location of internship is at the Gladstone Institutes, 1650 Owens Street, San Francisco, CA</li>
	<li>During the summer, PUMAS interns will also participate in regular weekly meetings with their mentors, labmates, and fellow interns</li>
	<li>Housing is NOT provided. Students are responsible for their own housing and for their own transportation to and from Gladstone. However, students are eligible for a housing/travel allowance of up to $2,400</li>
</ul>

<p>&nbsp;</p>

<p><strong>Eligibility Requirements</strong></p>

<ul>
	<li>No prior research experience required</li>
	<li>Must be a United States citizen or permanent resident to apply. International students are NOT eligible for this program.</li>
	<li>Be currently enrolled as a community college student whose planning on transferring to a 4-year institution to pursue a B.S. in a STEM field (Science Technology Engineering &amp; Math)</li>
	<li>Minimum cumulative Grade Point Average GPA of 2.50</li>
	<li>Successful completion of 2 semesters of college-level science courses with a lab component (chemistry and molecular biology preferred but not required)</li>
	<li>Emphasis is placed on identifying applicants who are historically underrepresented in the sciences (African-American, Hispanic, Pacific Islander, Native American), including students who are socioeconomically disadvantaged, first-generation college students, or students with disabilities.</li>
</ul>

<p>&nbsp;</p>

<p><strong>Application Process</strong></p>

<ul>
	<li>Complete the PUMAS application form which includes answering essay questions, attaching a resume, a copy of your most recent college transcript (unofficial is fine) and 1-2 letters of recommendation from a science faculty/professor at your college</li>
	<li>Use the application checklist to make sure you have included all documents</li>
	<li>Applications need to be scanned/emailed, faxed or postmarked to us by Friday, May 9, 2014 at 6:00pm</li>
	<li>Students will be contacted for phone interviews in mid-May and notified of their acceptance by the end of May</li>
</ul>

<p>&nbsp;</p>

<p><span style="line-height: 160%;"><strong>Commitment to Diversity</strong></span><br />
Gladstone is committed to broadening participation in biomedical research. We strongly encourage students from historically under-represented groups in the sciences to apply to our internship program, including students who are socioeconomically disadvantaged, first-generation college students, or students with disabilities.</p>

<p><span style="line-height: 160%;"><strong>If you have questions, please contact:</strong></span><br />
Shannon Noonan<br />
Education &amp; Community Partnerships Manager<br />
<a href="mailto:shannon.noonan@gladstone.ucsf.edu">shannon.noonan@gladstone.ucsf.edu</a><br />
Phone: 415-734-2054<br />
Fax: 415-355-0826</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'PUMAS Internship Program',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/pumas-internship-program',
        'language' => 'und',
      ),
    ),
    'uuid' => '2b9a6c60-4ac1-454f-b4bb-b275756d3777',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/ae5ef747-233b-4418-ac3f-33a0472c9e6a',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<div style="float: right; padding: 8px 0px 10px 15px;">
<div style="width: 210px; border-bottom: solid 2px #167BA6;"><img alt="Student" border="0" height="239" src="http://gladstoneinstitutes.org/sites/default/files/nicole-210x239.jpg" style="" width="210" />
<div style="margin-top: 10px; margin-bottom: 10px;"><span style="font-family: helvetica; font-size: 11px;"><strong>Hands-on lab experience</strong></span></div>
</div>
</div>

<p><span style="line-height: 200%; font-size: 16px;"><strong>Calling all rising seniors in San Francisco public schools</strong></span></p>

<p>Do you see yourself as a future scientist? Then the Gladstone Summer Scholars (GSS) internship program is for you! We are now accepting applications for this summer; the deadline to apply is Friday February 28, 2014 at 5:00pm.</p>

<p>&nbsp;</p>

<p><span style="line-height: 200%; font-size: 16px;"><strong>About the Gladstone Institutes</strong></span><br />
To ensure our work does the greatest good, the Gladstone Institutes focus on conditions with profound medical, economic, and social impact – unsolved diseases of the brain, the heart, and the immune system. Affiliated with the University of California, San Francisco, Gladstone is an independent, nonprofit life science research organization that uses visionary science and technology to overcome disease.</p>

<p>&nbsp;</p>

<p><span style="font-size: 16px;"><strong>About the GSS program</strong></span></p>

<ul>
	<li>Limited to 6 qualified students (see below for eligibility requirements)</li>
	<li>9-week summer internship from Monday June 9 - Friday August 8, 2014</li>
	<li>Students will be paid minimum wage ($10.74/hr) and work part-time (25 hours per week)</li>
	<li>Work 1-on-1 with a mentor doing hands-on biomedical research in a laboratory at Gladstone</li>
	<li>Students are responsible for their own transportation to and from Gladstone</li>
	<li>Must participate in a mandatory orientation in May with a parent/guardian</li>
	<li>During the summer, interns must participate in regular weekly meetings with their mentors, labmates, and fellow interns</li>
	<li>Interns present their research findings at the end of the summer during a “Poster Session” for mentors, lab members, parents, friends and teachers on Thursday August 7, 2014</li>
</ul>

<p>&nbsp;</p>

<p>&nbsp;</p>

<div style="float: left; padding: 4px 15px 10px 0px; margin-right: 15px;">
<div style="width: 210px; border-bottom: solid 2px #167BA6;"><img alt="Student and mentors" border="0" height="239" src="http://gladstoneinstitutes.org/sites/default/files/ivan-mentors210x239.jpg" style="" width="210" />
<div style="margin-top: 10px; margin-bottom: 10px;"><span style="font-family: helvetica; font-size: 11px;"><strong>Mentoring at Gladstone</strong></span></div>
</div>
</div>

<p><span style="font-size: 16px;"><strong>Eligibility Requirements</strong></span></p>

<ul>
	<li>Rising seniors from a San Francisco Unified School District (SFUSD) public high school (graduating class of 2015)</li>
	<li>Applicants must have successfully completed at least one year of high school level chemistry and/or biology with a grade of “C” or higher</li>
	<li>Minimum cumulative grade point average of 3.0, however all students are encouraged to apply</li>
	<li>Emphasis is placed on applicants from low-income backgrounds. We will verify your eligibility for SFUSD’s Free &amp; Reduced Priced Meal Program (see pg. 7 of application for more info)</li>
	<li>Emphasis is placed on identifying and recruiting students from groups that are historically underrepresented in the sciences (i.e., African-American, Hispanic, Native Pacific Islander, or Native American students).</li>
</ul>

<p>&nbsp;</p>

<p>&nbsp;</p>

<p><span style="font-size: 16px;"><strong>Application process</strong></span></p>

<ul>
	<li>Complete the application form including parent signature</li>
	<li>Use the application checklist to make sure you have included all documents</li>
	<li>Applications need to be emailed, faxed or postmarked to us by Friday, February 28, 2014 at 5:00pm</li>
	<li>Students will be contacted for interviews in late March and notified of their acceptance by the end of April</li>
</ul>

<p>&nbsp;</p>

<p><span style="line-height: 200%; font-size: 16px;"><strong>If you have any questions, please contact Paul:</strong></span><br />
<strong>Paul Li</strong><br />
Science Education Specialist<br />
<a href="mailto:paul.li@gladstone.ucsf.edu?subject=GSS%20Internship%20Question">paul.li@gladstone.ucsf.edu</a><br />
Phone: 415-734-2593<br />
Fax: 415-355-0826</p>

<p>&nbsp;</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'GSS Internship Program',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/gss-internship-program',
        'language' => 'und',
      ),
    ),
    'uuid' => 'ae5ef747-233b-4418-ac3f-33a0472c9e6a',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/99ffa822-afde-4d3c-a55c-6d24574553b8',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>Gladstone is no longer involved in sending students to the National Student Leadership Conference (NSLC) summer program at UC Berkeley on medicine and healthcare careers. Instead, teachers at participating high schools with health sciences academies in San Francisco will identify students at their school site to attend NSLC on scholarship. Those high schools include: Galileo Academy, Phillip &amp; Sala Burton, and Raoul Wallenberg.</p>

<p>If you are still interested in participating in the NSLC program, please <a href="http://www.nslcleaders.org/" target="_blank">visit the NSLC website</a> directly for information on how to apply and how to receive partial financial aid: <a href="http://www.nslcleaders.org/" target="_blank">nslcleaders.org</a></p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'NSLC Scholarship Program',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/nslc-scholarship-program',
        'language' => 'und',
      ),
    ),
    'uuid' => '99ffa822-afde-4d3c-a55c-6d24574553b8',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/aa20ec5e-8b76-4835-a404-e5ad2204d384',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<div class="clearfix" role="main">
<div class="grid_12 alpha" id="content">
<div class="clearfix" id="content-inner">Our educational partnerships with the community extend well beyond public schools to workforce boards, state and federal agencies, corporations, and more. For instance, we are a key partner in the annual Bay Area Science Festival (BASF), a ten-day event designed to energize local youth about science, technology, engineering, and math (STEM). During BASF, Gladstone scientists lead several STEM discussions at local museums and universities; they also staff a booth at “Discovery Day,” the festival’s grand finale event at AT&amp;T Park, where 30,000 attendees explore a free outdoor museum with hundreds of interactive displays. In another example, our investigators partner with the California Academy of Sciences, giving presentations and engaging with young visitors during their science festivals and events.
<div id="content-inner-inner">
<div class="ui-node ui-node-page ui-node-lang-neutral ui-odd ui-node-odd ui-node-1 clearfix" id="ui-node-41">
<div class="ui-content clearfix">
<div style="float: right; padding: 4px 0px 10px 15px;">
<div style="width: 400px; border-bottom: solid 2px #167BA6;"><img alt="Students" border="0" height="568" src="http://gladstoneinstitutes.org/sites/default/files/att-comp400x568.jpg" style="" width="400" />
<div style="margin-top: 10px; margin-bottom: 10px;"><span style="font-family: helvetica; font-size: 11px;"><strong>Discovery Day at AT&amp;T Ballpark in San Francisco</strong></span></div>
</div>
</div>
</div>
</div>
</div>
</div>
</div>
</div>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Community',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/community',
        'language' => 'und',
      ),
    ),
    'uuid' => 'aa20ec5e-8b76-4835-a404-e5ad2204d384',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/80a9aa92-f612-40f5-9375-c05f14481365',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<div class="ui-node ui-node-page ui-node-lang-neutral ui-odd ui-node-odd ui-node-1 clearfix" id="ui-node-40">
<div class="ui-content clearfix">
<p>Lipid disorders underlie some of today’s most important health problems, including obesity, heart disease and diabetes. Management of lipid levels is critical—but fewer than 25% of patients in the United States ever reach their target lipid levels.</p>

<p>At Gladstone, <a href="/current/builds/demo/our-science/people/thomas-bersot">Thomas P. Bersot, MD, PhD</a>, directs two lipid-level management efforts: assisting patients directly and training healthcare providers to do the same.</p>

<p>The <strong>Gladstone Lipid Clinic</strong> manages patients with lipid disorders who have been referred to the Clinic by private physicians and the San Francisco County health care system. The Clinic also provides an ideal training environment for UCSF internal medicine trainees and students.</p>

<p>The <a href="http://labs.gladstone.ucsf.edu/bersot"><strong>Gladstone Lipid Disorders Training Center</strong></a> trains practicing physicians, pharmacists, nurses and dietitians in the management of plasma lipid disorders. The courses provide lectures, laboratory demonstrations and discussions for trainees. In a demonstration clinic, course participants interview patients from the Gladstone Lipid Clinic and review their case histories.</p>

<p>The Center activities have been planned and implemented in accordance with the Essential Areas and policies of the <a href="http://www.accme.org/">Accreditation Council for Continuing Medical Education (ACCME)</a> through the joint sponsorship of the <a href="http://www.heart.org/">American Heart Association</a>, <a href="http://www.lipid.org/">the National Lipid Association</a> and the <a href="/current/builds/demo/node/24">Gladstone Institute of Cardiovascular Disease</a>. The National Lipid Association is accredited by ACCME with the goal of providing continuing medical education for physicians.</p>

<p><a href="http://gladstoneinstitutes.org/u/tbersot/ldtp.html"><strong>Lipid Disorders Training Program Registration</strong></a></p>
</div>
</div>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Health Professionals',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/health-professionals',
        'language' => 'und',
      ),
    ),
    'uuid' => '80a9aa92-f612-40f5-9375-c05f14481365',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/9c486a08-beb0-4c0b-a488-88fc63568998',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>Scientists and trainees who have spent time at the Gladstone Institutes have gone on to impressive careers at a host of important places, including <a href="http://www.duke.edu/" target="_blank">Duke</a>, <a href="http://www.hopkinsmedicine.org/som/">Johns Hopkins</a>, <a href="http://www.lundbeck.com/" target="_blank">Lundbeck</a>, <a href="http://www.gilead.com/" target="_blank">Gilead</a> and the <a href="http://www.nibr.com/">Novartis Institutes of Biomedical Research</a>. Some of our alumni even come back—such as our former postdoc Shinya Yamanaka, MD, PhD, who is now a senior investigator at Gladstone and former graduate student&nbsp;<a href="http://gladstoneinstitutes.org/staff/michael-l-penn-jr-md-phd" target="_blank">Michael L. Penn, Jr., MD, PhD</a>, who returned to Gladstone as Vice President for Strategy. For those who want to connect with other Gladstone alumni, the <a href="http://www.linkedin.com/groups?home=&amp;gid=2138216&amp;trk=anet_ug_hm&amp;goback=.gdr_1331861193671_1" target="_blank">Gladstone Alumni</a> subgroup on Linkedin invites all former Gladstone staff members who use LinkedIn—postdocs, graduate students, technicians, administrative support and scientists—to join.</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Alumni',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/alumni',
        'language' => 'und',
      ),
    ),
    'uuid' => '9c486a08-beb0-4c0b-a488-88fc63568998',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/63f882e2-5d22-4385-8dc0-54c495c5c23c',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>These videos provide a glimpse of how Gladstone researchers work with purpose and urgency to overcome diseases that afflict millions of people around the world. Please share these videos with your colleagues, relatives and friends.</p>

<p><strong>BETTER COGNITION SEEN WITH GENE VARIANT CARRIED BY 1 in 5</strong><br />
Gladstone Institutes and UC San Francisco Scienitsts have discovered that a common form of a gene associated with long life also improves learning and memory.<br />
<!-- START VIDEO --><iframe frameborder="0" height="270" src="http://www.youtube.com/embed/tAjtoYRXm84?rel=0" width="480"></iframe><!-- END VIDEO --></p>

<p>&nbsp;</p>

<p><strong>CELLULAR REPROGRAMMING 2.0</strong><br />
Gladstone’s Deepak Srivastava, MD, describes his use of "cellular reprogramming 2.0" to repair catastrophic heart damage.<br />
<!-- START VIDEO --><iframe allowfullscreen="" frameborder="0" height="270" src="http://www.youtube.com/embed/C23pM1i_MVI?rel=0" width="480"></iframe><!-- END VIDEO --></p>

<p>&nbsp;</p>

<p><strong>INSPIRED SCIENCE</strong><br />
Gladstone research inspires people such as Rod Roddenberry, the son of Star Trek creator Gene Roddenberry. Learn more about Gladstone\'s achievements in scientific research.<br />
<iframe allowfullscreen="" frameborder="0" height="270" mozallowfullscreen="" src="http://player.vimeo.com/video/51255383?title=0&amp;byline=0&amp;portrait=0" webkitallowfullscreen="" width="480"></iframe></p>

<p>&nbsp;</p>

<p><strong>REGENERATING HEARTS AT GLADSTONE</strong><br />
See how Gladstone cardiovascular researchers are working on new solutions for the world\'s number one killer.<br />
<iframe allowfullscreen="" frameborder="0" height="270" mozallowfullscreen="" src="http://player.vimeo.com/video/44776347" webkitallowfullscreen="" width="480"></iframe></p>

<p>&nbsp;</p>

<p><strong>UNRAVELING HIV/AIDS</strong><br />
Discover how patients have motivated Gladstone scientists to find a cure for HIV/AIDS— and the accelerated aging it causes.<br />
<iframe allowfullscreen="" frameborder="0" height="270" mozallowfullscreen="" src="http://player.vimeo.com/video/44776404" webkitallowfullscreen="" width="480"></iframe></p>

<p>&nbsp;</p>

<p><strong>ATTACKING ALZHEIMER\'S AT GLADSTONE</strong><br />
Meet some of the people who inspire Gladstone researchers to find solutions for devastating conditions such as Alzheimer\'s disease.<br />
<iframe allowfullscreen="" frameborder="0" height="270" mozallowfullscreen="" src="http://player.vimeo.com/video/44776456" webkitallowfullscreen="" width="480"></iframe></p>

<p>&nbsp;</p>

<p><strong>A NOBEL DISCOVERY TO FIGHT DISEASE</strong><br />
Learn how Gladstone hopes to use the latest cellular reprogramming technology to solve some of mankind\'s worst diseases.<br />
<iframe allowfullscreen="" frameborder="0" height="270" mozallowfullscreen="" src="http://player.vimeo.com/video/44776613" webkitallowfullscreen="" width="480"></iframe></p>',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Videos',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/videos',
        'language' => 'und',
      ),
    ),
    'uuid' => '63f882e2-5d22-4385-8dc0-54c495c5c23c',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/2cc8bb77-d826-4f63-9321-50ab8658d931',
      'cause' => FALSE,
    ),
    'body' => array(),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Empty Site Page',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/empty-site-page',
        'language' => 'und',
      ),
    ),
    'uuid' => '2cc8bb77-d826-4f63-9321-50ab8658d931',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/86f18178-81f6-41b3-a373-41579500cc50',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p><span style="font-size: 16px;">Browse the list below for the latest news, highlights, and more about how Gladstone is converging on cures for unsolved diseases with profound medical, economic, and social impact:</span></p>

<p><a href="http://today.gladstone.internal:8888/current/builds/demo/blog"><span style="font-size: 16px;">News and Highlights</span></a><br />
Here you\'ll discover breaking Gladstone news, in-depth features, and much more. And by <a href="http://lb.benchmarkemail.com//listbuilder/signupnew?9bGwlFuGOREK7yW8HfQ6A3TVLJ38FkWyBw1WHzVrH8T5mj5OqPbK3uMzIjNtMjwz">signing up for our e-newsletter</a>, you can have the latest info delivered right to your inbox.</p>

<p><a href="http://today.gladstone.internal:8888/current/builds/demo/about-us/pressroom/news-coverage"><span style="font-size: 16px;">Media Coverage</span></a><br />
Check here for press coverage of Gladstone scientists and research by media outlets around the globe. And be sure to follow us on <a href="http://www.facebook.com/gladstoneinstitutes">Facebook</a> and <a href="https://twitter.com/#!/gladstonelabs">Twitter</a> for breaking announcements.</p>

<p><a href="http://www.youtube.com/user/GladstoneScience"><span style="font-size: 16px;">Videos</span></a><br />
View our videos for a glimpse into the world of Gladstone researchers, as they work with purpose and urgency to overcome diseases that countless people.</p>

<p><a href="/current/builds/demo/about-us/publications"><span style="font-size: 16px;">Publications</span></a><br />
From our e-newsletter to scientific papers, check here for a constant stream of communications about our groundbreaking discoveries in diseases of the brain, heart, and immune system.</p>

<p><a href="http://today.gladstone.internal:8888/current/builds/demo/about-us/pressroom"><span style="font-size: 16px;">For Journalists</span></a><br />
Members of the media can browse here for Gladstone press releases, media contact info, images, and more.</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'News Hub',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/news-hub',
        'language' => 'und',
      ),
    ),
    'uuid' => '86f18178-81f6-41b3-a373-41579500cc50',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/8fbbb324-88dd-451e-8060-3893f0324d17',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>Gladstone’s president and our three institute directors—with oversight from our three Trustees—strategically guide the organization to foster and enrich innovation, talent, entrepreneurship and financial strength. Executives in intellectual property, business development and other administration areas support the scientists’ work, while two philanthropic groups—the Gladstone Foundation and the President\'s Council—offer support and guidance to accelerate our scientific mission.</p>

<div>
<div>
<p><img alt="Sandy Williams, Warner Greene, Lennart Mucke and Deepak Srivastava" class="image-style-large" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/styles/large/public/Directors-and-Sandy-1400.jpg?itok=o96NJhRS" style="border:0px; height:auto; max-width:100%" title="" /></p>
</div>
</div>

<div>
<div>
<p>Warner C. Greene, MD, PhD, R. Sanders Williams, MD,<br />
Lennart Mucke, MD, and Deepak Srivastava, MD</p>
</div>
</div>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Leadership',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/leadership',
        'language' => 'und',
      ),
    ),
    'uuid' => '8fbbb324-88dd-451e-8060-3893f0324d17',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/338fc5a5-dffa-41ef-b67c-ec311ee86b72',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<div class="ui-node ui-node-page ui-node-lang-neutral ui-odd ui-node-odd ui-node-1 clearfix" id="ui-node-5513">
<div class="ui-content clearfix">
<p class="colorbox-load"><strong><span style="color: #336699;">Mentoring</span></strong></p>

<p class="colorbox-load">Mentoring is a hallmark of the Gladstone postdoctoral program. The full development of postdoctoral scholars depends on an excellent mentoring program to provide role models for scientists just establishing their careers and to solve problems in the laboratory. <a href="/current/builds/demo/node/2803">Mentoring Standards</a> have been developed and distributed to all investigators, postdoctoral scholars, and graduate students. Each of us has a part in this important effort.</p>

<p><strong><span style="color: #336699;">Investigators</span></strong></p>

<p class="p1">The ability of senior scientists to mentor is now a specific item for discussion during the annual performance reviews—both between trainees and principal investigators, and between directors and principal investigators. Mentors will receive feedback about their performance as a mentor and may receive additional training on issues identified as needing particular attention. Training maycome through management-development seminars, talks by outside investigators who are particularly successful mentors and pertinent literature.&nbsp;</p>

<p class="colorbox-load"><strong><span style="color: #336699;">Postdoctoral Scholars</span></strong></p>

<p class="colorbox-load">We also want to make postdoctoral scholars more aware of procedures that exist for addressing problems between postdoctoral scholars and mentors. We encourage scholars to approach their mentor directly. However, if further action is required, postdocs can seek resolution from the institute director, the postdoctoral advisor in the Human Resources department, or the president. The directors and the Human Resources will consider an external consultant if the conflicts remain unresolved. Training in conflict resolution (for mentors and trainees) is part of the in-house training program.</p>
</div>
</div>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Mentoring',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/mentoring',
        'language' => 'und',
      ),
    ),
    'uuid' => '338fc5a5-dffa-41ef-b67c-ec311ee86b72',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/d6a853e0-63d9-4bc7-ab72-c692740a2470',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p style="margin: 0px 0px 1.5em; color: rgb(0, 0, 0); font-family: \'Trebuchet MS\', \'Helvetica Neue\', Arial, Helvetica, sans-serif; font-size: 14px; line-height: 21px;">One of Gladstone’s most important missions is to train scientists and to prepare them for successful careers. To achieve this goal, mentors and trainees must cooperate actively to develop the trainee’s creativity, knowledge, communication skills, initiative, and perseverance, as these are the qualities that help scientists excel in diverse career paths.</p>

<p style="margin: 0px 0px 1.5em; color: rgb(0, 0, 0); font-family: \'Trebuchet MS\', \'Helvetica Neue\', Arial, Helvetica, sans-serif; font-size: 14px; line-height: 21px;">We realize that each individual and each mentor-trainee relationship are unique and that there are many aspects of good mentoring that are difficult to put in words. However, we believe that following the standards outlined below will go a long way toward making the interaction between mentor and trainee a mutually rewarding experience.</p>

<p style="margin: 0px 0px 1.5em; color: rgb(0, 0, 0); font-family: \'Trebuchet MS\', \'Helvetica Neue\', Arial, Helvetica, sans-serif; font-size: 14px; line-height: 21px;">The standards were based, in good part, on practices promulgated by the NIH. Several of the NIH guidelines were expanded or modified, with input from postdoctoral fellows and investigators, to optimally support our postdoctoral training program. The standards will be reviewed and updated periodically.</p>

<p style="margin: 0px 0px 1.5em; color: rgb(0, 0, 0); font-family: \'Trebuchet MS\', \'Helvetica Neue\', Arial, Helvetica, sans-serif; font-size: 14px; line-height: 21px;">Mentors<br />
Trainees<br />
Orientation<br />
• explicitly discuss with the trainee the scientific and educational goals of the fellowship as well as your (and the trainee’s) expectations<br />
• make the trainee aware of available resources in your lab that could facilitate the start-up period<br />
• alert the trainee to HR support and procedures for conflict resolution<br />
• encourage the trainee to let you know right away should s/he ever feel treated unfairly, and carefully follow up on any such concerns<br />
• explicitly discuss with the mentor the scientific and educational goals of the fellowship as well as your (and the mentor’s) expectations<br />
• ask about and utilize available resources in the lab that could facilitate your start-up period<br />
• find out about HR support and know/utilize procedures for conflict resolution<br />
• let your mentor know right away should you ever feel treated unfairly<br />
Education<br />
• create protected time (uninterrupted by phone calls, e-mails, etc.) to share your knowledge, experience, and love for science with the trainee<br />
• explicitly instruct the trainee in rigorous experimental design, careful analysis of data, effective problem-solving strategies, and critical interpretation of the scientific literature<br />
• inform the trainee of available resources and be willing to refer him/her to someone else for help/information (e.g., cores, materials, equipment and expertise in other labs)<br />
• involve the trainee in establishing successful collaborations<br />
• involve the trainee in scientific discussions within lab meetings and/or on an individual basis<br />
• participate in and encourage participation in talks/seminars<br />
• provide opportunities for the trainee to participate in the writing and reviewing of papers and grants<br />
• provide constructive feedback on oral and written communication skills (papers, fellowship/grant applications) and encourage participation in related educational seminars/activities<br />
• make the trainee aware of skills and procedures required for successful lab management (e.g., budgeting, recruitment strategies) and encourage participation in related seminars<br />
• encourage creativity and independence<br />
• strive to be a role model with respect to collegiality and ethical conduct of science and make sure the trainee does the same<br />
• be especially supportive during difficult times<br />
• seek out protected time (uninterrupted by phone calls, e-mails, etc.) for mentors to share with you their knowledge, experience, and love for science<br />
• actively develop your research skills, including rigorous experimental design, careful analysis of data, effective problem-solving strategies, and critical interpretation of the scientific literature<br />
• be aware of and utilize available resources and be willing to seek help/information from someone other than your mentor<br />
• cooperate with your mentor in establishing successful collaborations<br />
• initiate scientific discussions within lab meetings and/or individually with your mentor<br />
• actively participate in talks/seminars<br />
• take advantage of opportunities to write and/or review papers and grants<br />
• continually try to improve your oral and written communication skills, ask your mentor and other colleagues for critical feedback on your performance, and participate in related educational seminars/activities<br />
• discuss with your mentor what skills and procedures are required for successful lab management (e.g., budgeting, recruitment strategies) and participate in related seminars<br />
• strive to be creative in your approach to questions posed; develop your own ideas, and do not hesitate to discuss them with your mentor<br />
• make sure your interactions with other research/admin staff are appropriate and you receive proper guidance in the ethical conduct of science<br />
• let your mentor know when you encounter major obstacles in your project or if things are not going well for you otherwise<br />
Evaluation<br />
• maintain open communication with the trainee regarding career goals and options and periodically review mutual expectations<br />
• offer frank and candid assessment of the trainee’s potential to become an independent investigator and discuss other suggestions and possibilities as indicated<br />
• ask the trainee periodically how the fellowship is going and whether there is anything you could do to further improve the training experience • maintain open communication with the mentor regarding career goals and options and periodically review mutual expectations<br />
• be realistic about goals to become an independent investigator, creatively consider career options, and formulate one-year and five-year career plans<br />
• provide your mentor with feedback on how the fellowship is going and openly discuss with him/her any adjustments that might further improve your training experience<br />
Career Promotion<br />
• support/encourage the trainee to present their work at local, national, and international meetings (including Gladstone Scientific Advisory Boards)<br />
• help the trainee network (e.g., introduce him/her to colleagues, make calls)<br />
• play an active role in the trainee’s job search (e.g., advice on application letters, CV, interviews, presentations)<br />
• consider asking the the trainee to be a co-author of invited book chapters/review articles (unless this would distract him/her from completing a research article of higher impact)<br />
• offer opportunities for the trainee to develop supervisory skills through training students and other research staff<br />
• encourage the trainee to participate in career development seminars and activities<br />
• encourage the trainee to actively seek opportunities for experience and advancement (e.g., volunteer on committees, help organize scientific meetings/retreats) • seek opportunities to present your work (or represent your mentor) at local, national, and international meetings (including Gladstone Scientific Advisory Boards)<br />
• take advantage of networking opportunities (e.g., follow-up with professional contacts)<br />
• ask your mentor for advice on your job search (e.g., application letters, CV, interviews, presentations)<br />
• take advantage of opportunities to co-author invited book chapters/review articles (unless this would distract you from completing a research article of higher impact)<br />
• participate in career development seminars and activities<br />
• seek opportunities to develop supervisory skills through training students and other research staff<br />
• actively seek opportunities for experience and advancement (e.g., volunteer on committees, help organize scientific meetings/retreats)</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Mentoring Guidance',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/mentoring-guidance',
        'language' => 'und',
      ),
    ),
    'uuid' => 'd6a853e0-63d9-4bc7-ab72-c692740a2470',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/f924c277-0734-47cd-8a44-ba1b694b14a1',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p><em><strong>How to Make Interactions Between Mentors<br />
and Trainees as Synergistic and Fruitful as Possible</strong></em></p>

<p>One of Gladstone’s most important missions is to train scientists and to prepare them for successful careers. To achieve this goal, mentors and trainees must cooperate actively to develop the trainee’s creativity, knowledge, communication skills, initiative, and perseverance, as these are the qualities that help scientists excel in diverse career paths.</p>

<p>We realize that each individual and each mentor-trainee relationship are unique and that there are many aspects of good mentoring that are difficult to put in words. However, we believe that following the standards outlined below will go a long way toward making the interaction between mentor and trainee a mutually rewarding experience.</p>

<p>The standards were based, in good part, on practices promulgated by the NIH. Several of the NIH guidelines were expanded or modified, with input from postdoctoral fellows and investigators, to optimally support our postdoctoral training program. The standards will be reviewed and updated periodically.</p>

<table align="center" border="0" style="width: 100%;">
	<tbody>
		<tr>
			<td bgcolor="#006666" height="15" width="51%">
			<div align="center"><span style="font-family: Verdana,Arial,Helvetica,sans-serif; font-size: x-small;"><strong><span style="color: #ffffff;">Mentors</span></strong></span></div>
			</td>
			<td bgcolor="#006666" height="15" width="49%">
			<div align="center"><span style="font-family: Verdana,Arial,Helvetica,sans-serif; font-size: x-small;"><strong><span style="color: #ffffff;">Trainees</span></strong></span></div>
			</td>
		</tr>
		<tr valign="top">
			<td bgcolor="#FFFFFF" colspan="2" width="100%">
			<div align="center"><span style="font-family: Verdana,Arial,Helvetica,sans-serif; font-size: x-small;"><strong><em>Orientation</em></strong></span></div>
			</td>
		</tr>
		<tr>
			<td bgcolor="#E1F3B0" valign="top" width="51%"><span style="font-family: Verdana,Arial,Helvetica,sans-serif; font-size: x-small;">• explicitly discuss with the trainee the scientific and educational goals of the fellowship as well as your (and the trainee’s) expectations<br />
			• make the trainee aware of available resources in your lab that could facilitate the start-up period<br />
			• alert the trainee to HR support and procedures for conflict resolution<br />
			• encourage the trainee to let you know right away should s/he ever feel treated unfairly, and carefully follow up on any such concerns </span></td>
			<td bgcolor="#E1F3B0" valign="top" width="49%"><span style="font-family: Verdana,Arial,Helvetica,sans-serif; font-size: x-small;">• explicitly discuss with the mentor the scientific and educational goals of the fellowship as well as your (and the mentor’s) expectations<br />
			• ask about and utilize available resources in the lab that could facilitate your start-up period<br />
			• find out about HR support and know/utilize procedures for conflict resolution<br />
			• let your mentor know right away should you ever feel treated unfairly </span></td>
		</tr>
		<tr valign="top">
			<td colspan="2" width="100%">
			<div align="center"><span style="font-family: Verdana,Arial,Helvetica,sans-serif; font-size: x-small;"><strong><em>Education</em></strong></span></div>
			</td>
		</tr>
		<tr bgcolor="#CAEDDC">
			<td valign="top" width="51%"><span style="font-family: Verdana,Arial,Helvetica,sans-serif; font-size: x-small;">• create protected time (uninterrupted by phone calls, e-mails, etc.) to share your knowledge, experience, and love for science with the trainee<br />
			• explicitly instruct the trainee in rigorous experimental design, careful analysis of data, effective problem-solving strategies, and critical interpretation of the scientific literature<br />
			• inform the trainee of available resources and be willing to refer him/her to someone else for help/information (e.g., cores, materials, equipment and expertise in other labs)<br />
			• involve the trainee in establishing successful collaborations<br />
			• involve the trainee in scientific discussions within lab meetings and/or on an individual basis<br />
			• participate in and encourage participation in talks/seminars<br />
			• provide opportunities for the trainee to participate in the writing and reviewing of papers and grants<br />
			• provide constructive feedback on oral and written communication skills (papers, fellowship/grant applications) and encourage participation in related educational seminars/activities<br />
			• make the trainee aware of skills and procedures required for successful lab management (e.g., budgeting, recruitment strategies) and encourage participation in related seminars<br />
			• encourage creativity and independence<br />
			• strive to be a role model with respect to collegiality and ethical conduct of science and make sure the trainee does the same<br />
			• be especially supportive during difficult times </span>
			<p>&nbsp;</p>
			</td>
			<td valign="top" width="49%"><span style="font-family: Verdana,Arial,Helvetica,sans-serif; font-size: x-small;">• seek out protected time (uninterrupted by phone calls, e-mails, etc.) for mentors to share with you their knowledge, experience, and love for science<br />
			• actively develop your research skills, including rigorous experimental design, careful analysis of data, effective problem-solving strategies, and critical interpretation of the scientific literature<br />
			• be aware of and utilize available resources and be willing to seek help/information from someone other than your mentor<br />
			• cooperate with your mentor in establishing successful collaborations<br />
			• initiate scientific discussions within lab meetings and/or individually with your mentor<br />
			• actively participate in talks/seminars<br />
			• take advantage of opportunities to write and/or review papers and grants<br />
			• continually try to improve your oral and written communication skills, ask your mentor and other colleagues for critical feedback on your performance, and participate in related educational seminars/activities<br />
			• discuss with your mentor what skills and procedures are required for successful lab management (e.g., budgeting, recruitment strategies) and participate in related seminars<br />
			• strive to be creative in your approach to questions posed; develop your own ideas, and do not hesitate to discuss them with your mentor<br />
			• make sure your interactions with other research/admin staff are appropriate and you receive proper guidance in the ethical conduct of science<br />
			• let your mentor know when you encounter major obstacles in your project or if things are not going well for you otherwise</span></td>
		</tr>
		<tr valign="top">
			<td colspan="2" width="100%">
			<div align="center"><span style="font-family: Verdana,Arial,Helvetica,sans-serif; font-size: x-small;"><strong><em>Evaluation</em></strong></span></div>
			</td>
		</tr>
		<tr bgcolor="#F4FCCA">
			<td valign="top" width="51%"><span style="font-family: Verdana,Arial,Helvetica,sans-serif; font-size: x-small;">• maintain open communication with the trainee regarding career goals and options and periodically review mutual expectations<br />
			• offer frank and candid assessment of the trainee’s potential to become an independent investigator and discuss other suggestions and possibilities as indicated<br />
			• ask the trainee periodically how the fellowship is going and whether there is anything you could do to further improve the training experience </span></td>
			<td valign="top" width="49%"><span style="font-family: Verdana,Arial,Helvetica,sans-serif; font-size: x-small;">• maintain open communication with the mentor regarding career goals and options and periodically review mutual expectations<br />
			• be realistic about goals to become an independent investigator, creatively consider career options, and formulate one-year and five-year career plans<br />
			• provide your mentor with feedback on how the fellowship is going and openly discuss with him/her any adjustments that might further improve your training experience </span></td>
		</tr>
		<tr valign="top">
			<td colspan="2" width="100%">
			<div align="center"><span style="font-family: Verdana,Arial,Helvetica,sans-serif; font-size: x-small;"><strong><em>Career Promotion</em></strong></span></div>
			</td>
		</tr>
		<tr bgcolor="#D0FCDA">
			<td valign="top" width="51%"><span style="font-family: Verdana,Arial,Helvetica,sans-serif; font-size: x-small;">• support/encourage the trainee to present their work at local, national, and international meetings (including Gladstone Scientific Advisory Boards)<br />
			• help the trainee network (e.g., introduce him/her to colleagues, make calls)<br />
			• play an active role in the trainee’s job search (e.g., advice on application letters, CV, interviews, presentations)<br />
			• consider asking the the trainee to be a co-author of invited book chapters/review articles (unless this would distract him/her from completing a research article of higher impact)<br />
			• offer opportunities for the trainee to develop supervisory skills through training students and other research staff<br />
			• encourage the trainee to participate in career development seminars and activities<br />
			• encourage the trainee to actively seek opportunities for experience and advancement (e.g., volunteer on committees, help organize scientific meetings/retreats)</span></td>
			<td valign="top" width="49%"><span style="font-family: Verdana,Arial,Helvetica,sans-serif; font-size: x-small;">• seek opportunities to present your work (or represent your mentor) at local, national, and international meetings (including Gladstone Scientific Advisory Boards)<br />
			• take advantage of networking opportunities (e.g., follow-up with professional contacts)<br />
			• ask your mentor for advice on your job search (e.g., application letters, CV, interviews, presentations)<br />
			• take advantage of opportunities to co-author invited book chapters/review articles (unless this would distract you from completing a research article of higher impact)<br />
			• participate in career development seminars and activities<br />
			• seek opportunities to develop supervisory skills through training students and other research staff<br />
			• actively seek opportunities for experience and advancement (e.g., volunteer on committees, help organize scientific meetings/retreats)</span></td>
		</tr>
	</tbody>
</table>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Mentor Standards',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/mentor-standards',
        'language' => 'und',
      ),
    ),
    'uuid' => 'f924c277-0734-47cd-8a44-ba1b694b14a1',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/ce345569-4ea3-46b5-93ae-a218cfda7faf',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<div class="ui-node ui-node-page ui-node-lang-neutral ui-odd ui-node-odd ui-node-1 clearfix" id="ui-node-5512">
<div class="ui-content clearfix">
<p>Career development is a major focus of the revised program. Our goal is to help our postdoctoral scholars to achieve their greatest potential.</p>

<p><strong>Career Counseling</strong></p>

<p>Principal investigators formally discuss career plans and prospects with their scholars at least yearly. In addition, scholars are encouraged to seek career-planning advice from other faculty members on an informal basis. Principal investigators mentor postdoctoral scholars about how to become a successful investigator through various means, such a offering informal opportunities for postdoctoral scholars to interact with principal investigators.</p>

<p><strong>Networking</strong></p>

<p>Gladstone is actively establishing a network of contacts with Gladstone alumni and other scientists to assist the scholars with career development and job opportunities. A Career Opportunities Seminar Series featuring successful scientists will be established to assist scholars who select nonacademic careers in industry or elsewhere. Gladstone alumni will be invited to visit Gladstone to discuss career strategies and opportunities with the scholars.</p>

<p><strong>Promotion Opportunities</strong></p>

<p>Gladstone has established mentoring and career counseling programs that will help to avoid unnecessarily long scholarships. Within Gladstone, scholars are eligible for promotion to research scientist after three years, based on merit and scientific achievement.</p>
</div>
</div>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Career Development',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/career-development',
        'language' => 'und',
      ),
    ),
    'uuid' => 'ce345569-4ea3-46b5-93ae-a218cfda7faf',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/322a2fd6-628d-442c-b333-be0260cdb193',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>&nbsp;</p>

<p>Gladstone offers a vibrant multidisciplinary environment for postdoctoral research. Individuals interested in pursuing postdoctoral studies should contact Gladstone investigators directly about opportunities in their laboratory. Typically, postdoctoral positions are appointed annually and are renewable on an annual basis for up to an additional three years upon agreement between the postdoc and the principal investigator.</p>

<p>Please visit <a href="/current/builds/demo/node/30">Gladstone’s Career page</a> to view some of the postdoctoral positions currently available at Gladstone. This list is not comprehensive as many principal investigators advertise available postdoctoral positions in scholarly publications and on the internet. Additionally, many principal investigators do not advertise their postdoctoral positions, preferring to meet with potential postdocs at professional meetings or in response to presentations. If the PI you want to work with isn\'t listed here, please contact her/him directly.</p>

<p>&nbsp;</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Postdoctoral Opportunities',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/postdoctoral-opportunities',
        'language' => 'und',
      ),
    ),
    'uuid' => '322a2fd6-628d-442c-b333-be0260cdb193',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/3f9fcb99-831e-4eb6-9825-2897ffadb5c1',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>Faith Kreitzer, PhD, is the Program Director in the Office of Postdoctoral Affairs for the Gladstone Institutes. She reports to John Peck, Associate Director of Human Resources.</p>

<p>Faith oversees the Office of Postdoctoral Affairs, which includes serving as primary contact for postdoctoral scholars with regard to employee relations, conflict resolution issues, career development, and career counseling. She runs the postdoc program and is public face of, and ambassador for, Gladstone postdocs. Faith will also coordinate diversity recruitment-sourcing female and other underrepresented candidates-as well as build and maintain relationships with affinity organizations.</p>

<p>John Peck is the Associate Director for Human Resources at Gladstone. Faith and John serve as the primary contact for postdoctoral scholars for employee relations, conflict-resolution issues, counseling and career development. They works with Gladstone\'s Postdoctoral Advisory Committee, whose mission is to help Gladstone create a superior training environment that maximizes the professional and scientific development of postdoctoral scholars at Gladstone.</p>

<p>John currently serves on the National Postdoc Association\'s (NPA) Advisory Council. Previously, he served for four years on the NPA\'s Board of Directors.</p>

<p><strong>Contact Information</strong></p>

<p>Faith Kreitzer, PhD<br />
Program Director<br />
<a href="mailto:faith.kreitzer@gladstone.ucsf.edu">faith.kreitzer@gladstone.ucsf.edu</a><br />
Phone: (415) 734-2596<br />
Fax: (415) 355-0910</p>

<p>John Peck, MA<br />
Associate Director, Human Resources<br />
Postdoctoral Advisor<br />
<a href="mailto:john.peck@gladstone.ucsf.edu">john.peck@gladstone.ucsf.edu</a><br />
Phone: (415) 734-2036<br />
Fax: (415) 355-0910</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Postdoctoral Training Program Coordinator',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/postdoctoral-training-program-coordinator',
        'language' => 'und',
      ),
    ),
    'uuid' => '3f9fcb99-831e-4eb6-9825-2897ffadb5c1',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/35607929-1ae3-4ab4-923d-035786226bd3',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<div class="ui-node ui-node-page ui-node-lang-neutral ui-odd ui-node-odd ui-node-1 clearfix" id="ui-node-95">
<div class="ui-content clearfix">
<p class="style4">The Gladstone Institutes is a leading and independent biomedical-research facility affiliated with the University of California, San Francisco. Gladstone strives to advance human health through research. We always seek the very best and brightest to join our diverse team.</p>

<p class="style4">Gladstone offers a wide array of career opportunities both in our administrative offices and in our research areas. We seek a workforce that is as diverse as our areas of research are.</p>

<p>Gladstone is committed to a policy that provides equal employment opportunities to all employees and applicants for employment without regard to race, color, sex, religion, national origin, ancestry, age, marital status, medical condition, physical or mental disability, veteran status, sexual orientation, or any other non-job related characteristic; making all employment decisions so as to further this principle of equal employment.</p>

<p class="style4">Scientists know that using a diversity of approaches is often the most efficient strategy for solving a problem. New and different perspectives engender the very innovation that Gladstone prizes. This is one of the many reasons why we value diversity at Gladstone—be that a diversity of race, culture, religion, mental or physical ability, heritage, age, gender, sexual orientation or other characteristics. Our employees hail from more than 30 countries around the globe and we seek to hire the best and brightest for our diverse team of scientists and administrators.</p>
</div>
</div>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Careers',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/careers',
        'language' => 'und',
      ),
    ),
    'uuid' => '35607929-1ae3-4ab4-923d-035786226bd3',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/12eb6f8c-b99e-42cf-aadd-09401159a570',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'All Directors and Investigators',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/all-directors-and-investigators',
        'language' => 'und',
      ),
    ),
    'uuid' => '12eb6f8c-b99e-42cf-aadd-09401159a570',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/abd408c6-a9d6-449c-813d-428db6a10658',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<table border="0" cellpadding="4" cellspacing="1" style="height:100%;width:600px;">
	<tbody>
		<tr>
			<td><strong>Gladstone Institutes</strong><br />
			1650 Owens Street<br />
			San Francisco, CA 94158-2261<br />
			Telephone: 415-734-2000<br />
			<a href="mailto:info@gladstone.ucsf.edu">info@gladstone.ucsf.edu</a><br />
			<a href="http://twitter.com/gladstonelabs">twitter.com/gladstonelabs</a><br />
			<a href="http://www.facebook.com/gladstoneinstitutes">facebook.com/gladstoneinstitutes</a></td>
			<td><img alt="The Gladstone Building" class="media-image img__fid__263 img__view_mode__default attr__format__default attr__field_file_image_alt_text[und][0][value]__The Gladstone Building attr__field_file_image_title_text[und][0][value]__" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/bldgfront100.png" /></td>
		</tr>
	</tbody>
</table>

<p>&nbsp;</p>

ADD MAP WIDGET',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Contact Us',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/contact-us',
        'language' => 'und',
      ),
    ),
    'uuid' => 'abd408c6-a9d6-449c-813d-428db6a10658',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/093c808d-cedd-4d70-a0a4-70c8d42f0fdd',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<table align="left" border="0" cellpadding="5" cellspacing="0" style="width: 660px;">
	<tbody>
		<tr>
			<td align="left" valign="top">The Gladstone Institutes strives to provide the best training for its postdoctoral scholars, including rigorous scientific training, personalized attention and mentoring, and a rich research environment supplemented by close interactions with colleagues at the <a href="http://www.ucsf.edu">University of California, San Francisco.</a></td>
			<td align="right" valign="top">&nbsp;</td>
		</tr>
	</tbody>
</table>

<table align="left" border="0" cellpadding="5" cellspacing="0" style="width: 660px;">
	<tbody>
		<tr>
			<td align="left" colspan="2" valign="top">Gladstone is a sustaining member of the NPA. Postdoctoral appointees&nbsp; can join the NPA for free as an affliliate, non-voting member by registering using their @gladstone.ucsf.edu email address. Postdocs can also join as individual, dues-paying members and will receive their own vote.</td>
			<td align="left" valign="top"><img height="200" src="http://gladstoneinstitutes.org/sites/default/files/content/hr/postdoc_npa.gif" width="200" /></td>
		</tr>
	</tbody>
</table>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Postdocs',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/postdocs',
        'language' => 'und',
      ),
    ),
    'uuid' => '093c808d-cedd-4d70-a0a4-70c8d42f0fdd',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/1584e0e6-a2f7-4dee-b04a-464eab143b88',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>Gladstone Postdoctoral Training Program Gladstone’s postdoctoral training program recognizes that postdoctoral scholars are one of the “prime engines” of scientific advancement at Gladstone. Our program complements the scientific research training and helps our postdoctoral scholars achieve their full potential. By providing the best training and support to our scholars, we also enhance our overall research program—thereby contributing to the health and well-being of all people.</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'The Training Program',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/training-program',
        'language' => 'und',
      ),
    ),
    'uuid' => '1584e0e6-a2f7-4dee-b04a-464eab143b88',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/46317f42-6156-47f0-8239-d4d63ad74665',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<h3><strong>Postdoctoral Scholar Salary Scale<br />
Annual Salaries for 2014</strong></h3>

<div align="center">
<table border="0" cellpadding="0" cellspacing="0" style="width: 530px;">
	<tbody>
		<tr>
			<td width="98">
			<p align="center" class="paragraph"><span style="text-decoration: underline;">Years of Experience</span></p>
			</td>
			<td width="100">
			<p align="center"><span style="text-decoration: underline;">Postdoctoral Salary</span></p>
			</td>
			<td width="126">
			<p align="center"><span style="text-decoration: underline;">Research Scientist </span><br />
			<span style="text-decoration: underline;">Salary</span></p>
			</td>
			<td width="114">
			<p align="center"><span style="text-decoration: underline;">Bioinformatics&nbsp; </span><br />
			<span style="text-decoration: underline;">Postdoc Salary</span></p>
			</td>
			<td width="91">
			<p align="center"><span style="text-decoration: underline;">NIH </span><br />
			<span style="text-decoration: underline;">Salary</span></p>
			</td>
		</tr>
		<tr>
			<td width="98">
			<p align="center" class="paragraph">0–1</p>
			</td>
			<td width="100">
			<p align="center">$44,000</p>
			</td>
			<td width="126">
			<p align="center">N/A</p>
			</td>
			<td width="114">
			<p align="center">$48,500</p>
			</td>
			<td width="91">
			<p align="center">$42,000</p>
			</td>
		</tr>
		<tr>
			<td width="98">
			<p align="center" class="paragraph">1–2</p>
			</td>
			<td width="100">
			<p align="center">$46,000</p>
			</td>
			<td width="126">
			<p align="center">N/A</p>
			</td>
			<td width="114">
			<p align="center">$50,900</p>
			</td>
			<td width="91">
			<p align="center">$43,680</p>
			</td>
		</tr>
		<tr>
			<td width="98">
			<p align="center" class="paragraph">2–3</p>
			</td>
			<td width="100">
			<p align="center">$48,500</p>
			</td>
			<td width="126">
			<p align="center">N/A</p>
			</td>
			<td width="114">
			<p align="center">$52,700</p>
			</td>
			<td width="91">
			<p align="center">$45,432</p>
			</td>
		</tr>
		<tr>
			<td width="98">
			<p align="center" class="paragraph">3–4</p>
			</td>
			<td width="100">
			<p align="center">$50,900</p>
			</td>
			<td width="126">
			<p align="center">$51,900</p>
			</td>
			<td width="114">
			<p align="center">$54,600</p>
			</td>
			<td width="91">
			<p align="center">$47,244</p>
			</td>
		</tr>
		<tr>
			<td width="98">
			<p align="center" class="paragraph">4–5</p>
			</td>
			<td width="100">
			<p align="center">$52,700</p>
			</td>
			<td width="126">
			<p align="center">$53,800</p>
			</td>
			<td width="114">
			<p align="center">$55,700</p>
			</td>
			<td width="91">
			<p align="center">$49,125</p>
			</td>
		</tr>
		<tr>
			<td width="98">
			<p align="center" class="paragraph">5–6</p>
			</td>
			<td width="100">
			<p align="center">$54,600</p>
			</td>
			<td width="126">
			<p align="center">$55,700</p>
			</td>
			<td width="114">
			<p align="center">$56,800</p>
			</td>
			<td width="91">
			<p align="center">$51,096</p>
			</td>
		</tr>
		<tr>
			<td width="98">
			<p align="center" class="paragraph">6–7</p>
			</td>
			<td width="100">
			<p align="center">$55,700</p>
			</td>
			<td width="126">
			<p align="center">$56,800</p>
			</td>
			<td width="114">
			<p align="center">$57,900</p>
			</td>
			<td width="91">
			<p align="center">$53,148</p>
			</td>
		</tr>
		<tr>
			<td width="98">
			<p align="center" class="paragraph">7–8</p>
			</td>
			<td width="100">
			<p align="center">$56,800</p>
			</td>
			<td width="126">
			<p align="center">$57,900</p>
			</td>
			<td width="114">
			<p align="center">$59,000</p>
			</td>
			<td width="91">
			<p align="center">$55,272</p>
			</td>
		</tr>
	</tbody>
</table>
</div>

<p>Salaries are determined by years of relevant experience, based on satisfactory performance. (Those who do not perform satisfactorily are assisted in exploring other career opportunities.) One year of additional experience is given for each year of medical residency and relevant postdoctoral experience, up to a maximum of five years; for physicians, this credit is awarded only if the MD degree was obtained from an accredited medical school (as defined by the California Board of Medicine).</p>

<p>Starting postdoctoral scholars who live greater than 50 miles from Gladstone will receive a one-time relocation/personal setup allowance of $2,000 as a lump sum, paid on the first paycheck. Postdocs who live and relocate within 50 miles of Gladstone will receive a $1,000 relocation/personal setup allowance as a lump sum, paid on the first paycheck.</p>

<h3>&nbsp;</h3>

<h3><strong>Postdoctoral Benefits</strong></h3>

<p>Gladstone offers excellent benefits. All postdoctoral scholars and research scientists are eligible for these benefits:</p>

<ul>
	<li>Vacation: 15 days per year (accrued 10 hours per month)</li>
	<li>Sick leave: 12 days per year (accrued 8 hours per month)</li>
	<li>12 paid holidays</li>
	<li>Health insurance</li>
	<li>Employer sponsored retirement plan</li>
	<li>Dental insurance</li>
	<li>Vision services plan</li>
	<li>403(b) retirement plan</li>
	<li>Life/AD&amp;D insurance</li>
	<li>Voluntary life insurance</li>
	<li>Travel insurance</li>
	<li>Medical Care Reimbursement Account</li>
	<li>Dependent Care Reimbursement Account</li>
	<li>Short-term disability insurance</li>
	<li>Long-term disability insurance</li>
	<li>Tuition reimbursement</li>
	<li>Gladstone Extension Training &amp; Development Program</li>
	<li>Credit union</li>
	<li>Pre-tax commuter check program</li>
	<li>Health club membership fee assistance</li>
</ul>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Salary and Benefits',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/salary-and-benefits',
        'language' => 'und',
      ),
    ),
    'uuid' => '46317f42-6156-47f0-8239-d4d63ad74665',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/655bfda0-6a3c-49fd-aab2-9236fd86bca7',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>&nbsp;</p>

<p><em><strong>Our mission</strong> is to use visionary science and technology to overcome major unsolved diseases.</em></p>

<p>President’s Vision</p>

<p><img alt="Sandy Williams" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/profile_pictures/williams-profile.jpg" style="float:left;height:239px;padding:6px 15px 0px 0px;width:180px;" />Like many physicians, I’ll never forget the first time I witnessed the death of a patient under my direct care. It was the summer of 1974 and I was an intern at the Massachusetts General Hospital. As I simply watched—there was nothing more to be done—my young patient’s heart stopped and could not be restarted.</p>

<p>This was, of course, an experience that repeated many times in the decades that followed, but the inadequacy of even our most advanced medicine was always glaringly and painfully apparent. Time and again, the experience drove my determination to get back to the laboratory and the search for solutions not yet available.</p>

<p>During the course of my life in medicine, science has provided wonderfully effective new therapies in some areas of medicine—but sadly not so in others. Relentless varieties of cardiovascular, viral and neurological diseases continue to confound patients and physicians—and here is where Gladstone focuses its efforts. A core belief in the ability of science to overcome such diseases, in fact, animates all of Gladstone. <strong>We are a community of scientists where our concern for patients and our curiosity about the fundamentals of biology are combined in a distinctive—and perhaps even unique—blend of motivation and drive. We value the best of scientific inquiry, including elegance of experimental design, leaps of creative genius and seminal discoveries that drive a deeper and more insightful understanding of biology.</strong> We value the imagination, innovation, perseverance and intellectual discipline that are the hallmarks of excellence in basic science. And in expressing these values, we are committed to providing new knowledge and inventions that empower the biomedical ecosystem to create and deliver new medicines, procedures and diagnostics to allay human suffering caused by illness.&nbsp; Science overcoming disease—Gladstone gathers together the talented professionals and the volunteers and philanthropists who together can make this happen.</p>

<p><strong>WATCH: INSPIRED SCIENCE</strong><br />
<iframe allowfullscreen="" frameborder="0" height="281" mozallowfullscreen="" src="http://player.vimeo.com/video/51255383" webkitallowfullscreen="" width="500"></iframe></p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Mission and President\'s Vision',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/mission-and-presidents-vision',
        'language' => 'und',
      ),
    ),
    'uuid' => '655bfda0-6a3c-49fd-aab2-9236fd86bca7',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/a51d76b2-4dca-4269-8ee7-b7fcb551859a',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>Gladstone welcomes inquiries from journalists. Our media-relations staff is on hand to provide local, regional, national, and international journalists with accurate information about Gladstone’s research and our investigators’ areas of expertise. We are available to arrange interviews with Gladstone scientists and assist in developing story ideas.</p>

<p><strong><big>Please contact:</big></strong><br />
<strong>Dana Smith</strong><br />
Communications and Media Relations Specialist<br />
<a href="mailto:dana.smith@gladstone.ucsf.edu" style="text-decoration: none; color: rgb(12, 74, 101);">dana.smith@gladstone.ucsf.edu</a><br />
Direct line: 415.734.2532<br />
Mobile: 415.806.6245</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'For Journalists',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/journalists',
        'language' => 'und',
      ),
    ),
    'uuid' => 'a51d76b2-4dca-4269-8ee7-b7fcb551859a',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/fceb4abc-0f1c-494b-9f85-57eeb2ddeb7f',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Press Releases',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/press-releases',
        'language' => 'und',
      ),
    ),
    'uuid' => 'fceb4abc-0f1c-494b-9f85-57eeb2ddeb7f',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/e560f33d-f061-40e3-91b8-ada2b53be6fb',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Media Coverage',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/media-coverage',
        'language' => 'und',
      ),
    ),
    'uuid' => 'e560f33d-f061-40e3-91b8-ada2b53be6fb',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/2904519f-22c8-4534-a4ff-57a10ffdb5be',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p><strong>Roddenberry Center for Stem Cell Biology and Medicine</strong></p>

<p><img alt="Roddenberry Stem Cell Center" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/rodsign-220.png" style="float:right;" /></p>

<p>In 2011, Gladstone founded the <a href="/current/builds/demo/node/70">Roddenberry Center for Stem Cell Biology and Medicine</a> with an unprecedented $5M gift from the <a href="http://roddenberryfoundation.org/">Roddenberry Foundation</a> to honor Star Trek creator Gene Roddenberry. Deepak Srivastava, MD, leads the Center, which, in part, builds on pioneering work done by Nobel laureate and Gladstone Senior Investigator Shinya Yamanaka, MD, PhD.&nbsp; Dr. Yamanaka’s 2006 discovery of induced pluripotent stem cells, or iPS cells, has revolutionized the fields of cell biology and stem cell research—opening promising new avenues for both personalized and regenerative medicine. The Center, which collaborates with the <a href="http://www.google.com/url?sa=t&amp;rct=j&amp;q=&amp;esrc=s&amp;source=web&amp;cd=1&amp;cad=rja&amp;uact=8&amp;ved=0CB8QFjAA&amp;url=http%3A%2F%2Fwww.cira.kyoto-u.ac.jp%2Fe%2F&amp;ei=697WU9HFNqaKjALVu4CYBQ&amp;usg=AFQjCNGQtaPymF2iZWRfqqHMihBh6Dh_pQ&amp;bvm=bv.71778758,d.cGE">Center for iPS Cell Research and Application (CiRA)</a>, is creating models of human disease based on iPS cells to speed drug development for a number of devastating cardiovascular, viral, and neurological conditions.</p>

<p>Scientists working at the Center apply the pioneering principles of stem cell biology to advance studies of human health. Through the Center, scientists gain resources for both blue-sky and de-risking work: blue-sky research follows up on promising but uncertain scientific leads, while de-risking research moves a promising biomedical discovery through all the rigorous tests required for clinical applications.</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '9f091c73-fdcc-470a-a19a-a6bade03039c',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Centers',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/centers',
        'language' => 'und',
      ),
    ),
    'uuid' => '2904519f-22c8-4534-a4ff-57a10ffdb5be',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/d2980c46-8037-42d8-9092-cf9d38579a04',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p><img alt="UCSF Sign" src="http://gladstoneinstitutes.org/sites/default/files/ucsfmunisign250x170.jpg" style="border:0px; float:right; height:auto; margin:0px 7px; max-width:100%; width:250px" title="UCSF Sign" />Gladstone is an administratively and financially independent not for profit organization which has a vibrant partnership with the<a href="http://www.ucsf.edu/" style="text-decoration: none; color: rgb(12, 74, 101);" target="_blank">University of California, San Francisco</a>&nbsp;(UCSF), one of the nation’s premier health-sciences institutions. All of Gladstone’s principal investigators hold faculty positions at UCSF.</p>

<p>Gladstone was originally housed at San Francisco General Hospital—which UCSF has long used as a teaching hospital—but moved into its own building adjacent to UCSF’s Mission Bay campus in 2004. Gladstone’s graduate program is offered in partnership with UCSF and all Gladstone investigators mentor UCSF PhD candidates and/or medical students. The two organizations also conduct their searches for new investigators together and jointly make decisions about promotions. Gladstone hosts and shares its core facilities with UCSF, while its investigators have access to all UCSF programs and services—including the university’s biomedical library, lectures, workshops and retreats.</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'UCSF Affiliation',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/ucsf-affiliation',
        'language' => 'und',
      ),
    ),
    'uuid' => 'd2980c46-8037-42d8-9092-cf9d38579a04',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/9ba43768-2def-4674-900f-d1598276f48f',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>Diseases that affect the brain or other components of the central nervous system are among the most devastating and complex conditions plaguing mankind today. As populations around the world live longer, diseases related to aging present an unprecedented challenge. Estimates indicate that the number of those who suffer from Alzheimer\'s around the world will double to 34 million by 2025, while the number of people in the United States alone who have Alzheimer’s disease is expected to nearly triple to 16 million by 2050. Numbers are also rising for those with Parkinson’s disease, which afflicts an estimated 10 million worldwide. Huntington’s disease is less common, but does strike about 1 in 10,000 and is the most frequent inherited neurodegenerative disorder.</p>

<div style="margin-bottom: 28px;"><span style="font-size: 14px; font-weight: bold;">Attacking Alzheimer\'s at Gladstone</span><br />
<iframe frameborder="0" height="236" src="http://player.vimeo.com/video/44776456" width="420"></iframe></div>

<p>At Gladstone, we focus on these diseases and others—such as frontotemporal dementia (FTD), amyotrophic lateral sclerosis (ALS, or Lou Gehrig’s disease) and multiple sclerosis—with urgency. And we have discovered much. For example, we have identified processes that can explain why apolipoprotein (apo) E4 is the main genetic risk factor for Alzheimer’s disease and also worsens outcome after traumatic brain injury. These findings have culminated in the computer-aided design of compounds that can block detrimental apoE4 effects. Related studies have elucidated how proteins that build up to abnormally high levels in the brain of Alzheimer patients—amyloid beta, tau and alpha-synuclein—interact to disrupt brain function and promote memory loss. We have turned conventional thinking on its head by revealing that the clumps of proteins, known as inclusion bodies, found in the brain of those with Huntington\'s disease are actually part of a defense mechanism against the disease—rather than its cause.</p>

<p>We have developed a compound that in animal models protects against signs of Huntington’s and Alzheimer’s. Our scientists have also pointed the way to a new therapeutic strategy for multiple sclerosis and other neurological diseases by identifying that a blood protein, fibrinogen, plays a causal role in damaging the central nervous system. And just recently, a Gladstone scientist developed methods to convert adult skin cells into neurons that are able to transmit electrical signals—expanding capabilities in regenerative and personalized medicine.</p>

<p>But there is still much to do—and no time to lose. We therefore bring together basic scientists, who concentrate on unraveling fundamental mechanisms underlying nervous system functions in health and disease, with physician-scientists who approach their research with a keen eye on unresolved medical problems and patients’ needs. Together, we are dedicated to interdisciplinary research that yields the multi-faceted solutions these complex conditions demand.</p>

<p>We impart this approach to tomorrow’s neuroscientists, whom we train as part of our mission to solve nature’s riddles and overcome disease. Our principal investigators are professors at the University of California, San Francisco (UCSF) and train graduate students and postdoctoral fellows in their labs. Together with major components of UCSF’s Neuroscience Program and Department of Neurology, which are located across the street from Gladstone on UCSF’s Mission Bay campus, we are an integral and collaborative part of one of the nation’s largest collections of neuroscientists and neurologists. To learn more about training at Gladstone, please visit the <a href="/node/3474">Training Programs</a> section of our website.</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '1ba15dd3-7ce9-4a37-997a-e45e5343b340',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Neurological Disease',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/neurological-disease',
        'language' => 'und',
      ),
    ),
    'uuid' => '9ba43768-2def-4674-900f-d1598276f48f',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/680139ee-1c9b-4e8a-84d3-2f2d799cdda3',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p><img alt="Lennart Mucke, MD" class="media-image img__fid__28 img__view_mode__default attr__format__default attr__field_file_image_alt_text[und][0][value]__Lennart Mucke, MD attr__field_file_image_title_text[und][0][value]__Lennart" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/profile_pictures/mucke-profile.jpg" title="Lennart Mucke, MD" /></p>

<p><strong>Lennart Mucke, MD</strong></p>

<p>Alzheimer’s disease robs people of more than just their memories. Unrelentingly, it also steals their very sense of self and causes great emotional distress in patients and families alike. When I grew up in Germany, I witnessed every aspect of Alzheimer’s from an up-close and personal view, as I watched my grandfather struggle with this devastating disease and, in the end, lose the battle.</p>

<p>Today, for millions of others like my grandfather, my colleagues and I have taken on the unprecedented challenge of this and many other neurological illnesses that rob people of their abilities to think, remember, control their movements, and even breathe. Because these diseases are extremely complex, they require an interdisciplinary approach. We have therefore built a highly collaborative team in which basic scientists—focused on unraveling the fundamentals of disease mechanisms—interact fluidly with physician-scientists like myself, who bring the critical patient perspective to our research.</p>

<p>We are on the cusp of several important advancements towards our mission of better understanding, preventing, treating, and—ultimately—curing neurological disease. For Alzheimer’s in particular, but also for other diseases we study, we expect Gladstone advancements to lead to personally tailored and multipronged therapies. Just as we can now effectively treat HIV-infected patients with a cocktail of antiretroviral drugs—and we treat people with hypertension using diuretics, beta blockers and other drugs—we expect to treat patients with complex neurological conditions with drug combinations that target both the worst symptoms and the root causes of the diseases.</p>

<p>Rapidly evolving approaches to the comprehensive profiling of patients’ risk factors, such as whole-genome sequencing, will play an increasingly important role in overcoming neurological disease, in much the same way as these approaches are already used to match up certain cancer patients with specific drugs they stand to benefit from the most. We will combine large-scale screening approaches with focused explorations and validations of promising leads and continue to advance our understanding of the nervous system until rational strategies can be developed for the treatment and prevention of the most disabling neurological ailments.</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '1ba15dd3-7ce9-4a37-997a-e45e5343b340',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Director\'s Vision',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/directors-vision-1',
        'language' => 'und',
      ),
    ),
    'uuid' => '680139ee-1c9b-4e8a-84d3-2f2d799cdda3',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/f8d4934f-b7d4-46ee-86e0-95b5a28f9368',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>Four accomplished physician scientists lead Gladstone</p>

<table align="left" border="0" cellpadding="5" cellspacing="0" style="height: 100%; width: 500px;">
	<tbody>
		<tr>
			<td><img alt="Sandy Williams" class="media-image img__fid__64 img__view_mode__teaser attr__format__teaser attr__field_file_image_alt_text[und][0][value]__Sandy Williams attr__field_file_image_title_text[und][0][value]__" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/styles/medium/public/profile_pictures/williams-profile.jpg?itok=vvC97Una" /></td>
			<td><a href="/current/builds/demo/our-science/people/r-sanders-williams">R. Sanders Williams, MD</a><br />
			President<br />
			<a href="mailto:rs.williams@gladstone.ucsf.edu">rs.williams@gladstone.ucsf.edu</a><br />
			Phone:&nbsp;(415) 734-2000<br />
			Fax:&nbsp;(415) 355-0820</td>
		</tr>
		<tr>
			<td><img alt="Deepak Srivastava" class="media-image img__fid__60 img__view_mode__teaser attr__format__teaser attr__field_file_image_alt_text[und][0][value]__Deepak Srivastava attr__field_file_image_title_text[und][0][value]__" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/styles/medium/public/profile_pictures/srivastava-profile.jpg?itok=dtG_YCTH" /></td>
			<td><a href="/current/builds/demo/our-science/people/deepak-srivastava">Deepak Srivastava, MD</a><br />
			Director<br />
			<a href="mailto:dsrivastava@gladstone.ucsf.edu">dsrivastava@gladstone.ucsf.edu</a><br />
			Phone:&nbsp;(415) 734-2716<br />
			Fax:&nbsp;(415) 355-0141</td>
		</tr>
		<tr>
			<td><img alt="Warner Greene" class="media-image img__fid__55 img__view_mode__teaser attr__format__teaser attr__field_file_image_alt_text[und][0][value]__Warner Greene attr__field_file_image_title_text[und][0][value]__" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/styles/medium/public/profile_pictures/greene-profile.jpg?itok=HRAgI504" /></td>
			<td><a href="/current/builds/demo/our-science/people/warner-greene">Warner C. Greene, MD, PhD</a><br />
			Director<br />
			<a href="mailto:wgreene@gladstone.ucsf.edu">wgreene@gladstone.ucsf.edu</a><br />
			Phone:&nbsp;(415) 734-4805<br />
			Fax:&nbsp;(415) 355-0153</td>
		</tr>
		<tr>
			<td><img alt="Lennart Mucke, MD" class="media-image img__fid__28 img__view_mode__teaser attr__format__teaser attr__field_file_image_alt_text[und][0][value]__Lennart Mucke, MD attr__field_file_image_title_text[und][0][value]__Lennart" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/styles/medium/public/profile_pictures/mucke-profile.jpg?itok=8oRA7zgY" title="Lennart Mucke, MD" /></td>
			<td><a href="/current/builds/demo/our-science/people/lennart-mucke">Lennart Mucke, MD</a><br />
			Director<br />
			<a href="mailto:lmucke@gladstone.ucsf.edu">lmucke@gladstone.ucsf.edu</a><br />
			Phone:&nbsp;(415) 734-2504<br />
			Fax:&nbsp;(415) 355-0131</td>
		</tr>
	</tbody>
</table>

<p>&nbsp;</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'President and Scientific Directors',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/president-and-scientific-directors',
        'language' => 'und',
      ),
    ),
    'uuid' => 'f8d4934f-b7d4-46ee-86e0-95b5a28f9368',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/d6811d1a-5a89-48ab-99cc-30c12286b49c',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '9f091c73-fdcc-470a-a19a-a6bade03039c',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Publications',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/publications-0',
        'language' => 'und',
      ),
    ),
    'uuid' => 'd6811d1a-5a89-48ab-99cc-30c12286b49c',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/162b2d3b-2d64-4332-b315-d93677b6c0ab',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '9f091c73-fdcc-470a-a19a-a6bade03039c',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Seminars and Events',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/seminars-and-events',
        'language' => 'und',
      ),
    ),
    'uuid' => '162b2d3b-2d64-4332-b315-d93677b6c0ab',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/f32a3cfb-b105-4b03-a373-a43bfd9e39f6',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '9f091c73-fdcc-470a-a19a-a6bade03039c',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'New Tech Seminars',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/new-tech-seminars',
        'language' => 'und',
      ),
    ),
    'uuid' => 'f32a3cfb-b105-4b03-a373-a43bfd9e39f6',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/5ecf52d8-2288-43b5-86c7-f408c89819ba',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '9f091c73-fdcc-470a-a19a-a6bade03039c',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Scientific Advisory Board',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/scientific-advisory-board',
        'language' => 'und',
      ),
    ),
    'uuid' => '5ecf52d8-2288-43b5-86c7-f408c89819ba',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/e220f4ec-fe75-4b45-bb0d-cde14af45ab4',
      'cause' => 'node/feb8c198-b9fb-41cb-b3f5-24b4b153eae8',
    ),
    'alt' => '',
    'crop_rect' => NULL,
    'file_contents' => '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YXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMTI0IDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTEyNSAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0xMjYgMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMTI3IDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTEyOCAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0xMjkgMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMTMwIDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTEzMSAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0xMzIgMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMTMzIDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTEzNCAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0xMzUgMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMTM2IDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTEzNyAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0xMzggMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMTM5IDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTE0MCAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0xNDEgMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMTQyIDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTE0MyAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0xNDQgMCBvYmoNPDwvQkJveFstMy4wIDMuMCAzLjAgLTMuMF0vRmlsdGVyL0ZsYXRlRGVjb2RlL0xlbmd0aCAxMjMvTWF0cml4WzEuMCAwLjAgMC4wIDEuMCAwLjAgMC4wXS9SZXNvdXJjZXM8PC9FeHRHU3RhdGU8PC9HUzAgMjkgMCBSPj4+Pi9TdWJ0eXBlL0Zvcm0+PnN0cmVhbQ0K79FOwmTESXz+XnxeuuUfrVeK9hC80SuMSyk00QgNCpf14wNJ5lkuT237jyuSJBX/Wf+DIhzioplfwF3VJcOi+VLtrI59rqMpBsI8rOxJdLa6ecMLDoglFRX7gd3i1rN62J0V0+4/OdEGt9yVe6BFOUmW4AGxCGNh7Wj4DWVuZHN0cmVhbQ1lbmRvYmoNMTQ1IDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTE0NiAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0xNDcgMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMTQ4IDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTE0OSAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0xNTAgMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMTUxIDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTE1MiAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0xNTMgMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMTU0IDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTE1NSAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0xNTYgMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMTU3IDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTE1OCAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0xNTkgMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMTYwIDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTE2MSAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0xNjIg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R3JvdXA+Pg1lbmRvYmoNMTcyIDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTE3MyAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0xNzQgMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMTc1IDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTE3NiAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0xNzcgMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMTc4IDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTE3OSAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0xODAgMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMTgxIDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTE4MiAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0xODMgMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMTg0IDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTE4NSAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0xODYgMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMTg3IDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTE4OCAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0xODkgMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMTkwIDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTE5MSAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0xOTIgMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMTkzIDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTE5NCAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0xOTUgMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMTk2IDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTE5NyAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0xOTggMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMTk5IDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTIwMCAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0yMDEgMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMjAyIDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTIwMyAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0yMDQgMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMjA1IDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTIwNiAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0yMDcgMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMjA4IDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTIwOSAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0yMTAgMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMjExIDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTIxMiAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0yMTMgMCBvYmoNPDwvSSBmYWxzZS9LIGZhbHNlL1MvVHJhbnNwYXJlbmN5L1R5cGUvR3JvdXA+Pg1lbmRvYmoNMjE0IDAgb2JqDTw8L0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTIxNSAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0yMTYgMCBvYmoNPDwvQkJveFswLjAgNzY4LjAgMTAyNC4wIDAuMF0vR3JvdXAgMjE3IDAgUi9MZW5ndGggNjEvTWF0cml4WzEuMCAwLjAgMC4wIDEuMCAwLjAgMC4wXS9SZXNvdXJjZXM8PC9Db2xvclNwYWNlPDwvQ1MwIDIxOCAwIFI+Pi9FeHRHU3RhdGU8PC9HUzAgMjkgMCBSPj4vUGF0dGVybjw8L1AwIDUgMCBSPj4+Pi9TdWJ0eXBlL0Zvcm0+PnN0cmVhbQ0KtA0ug+A5QmUcG5JusUvjMTBY58dLts+aloaOGDF7e9Gppdb4lxHI6r8t552erZFCiroaBjwEoEYmeqWixg1lbmRzdHJlYW0NZW5kb2JqDTIxNyAwIG9iag08PC9JIGZhbHNlL0sgZmFsc2UvUy9UcmFuc3BhcmVuY3kvVHlwZS9Hcm91cD4+DWVuZG9iag0yMTggMCBvYmoNWy9QYXR0ZXJuXQ1lbmRvYmoNMjE5IDAgb2JqDTw8L0FJUyBmYWxzZS9CTS9Ob3JtYWwvQ0EgMC4zMzAwMDIvT1AgZmFsc2UvT1BNIDEvU0EgdHJ1ZS9TTWFzay9Ob25lL1R5cGUvRXh0R1N0YXRlL2NhIDAuMzMwMDAyL29wIGZhbHNlPj4NZW5kb2JqDTIyMCAwIG9iag08PC9Bc2NlbnQgNzkwL0NhcEhlaWdodCA2NjcvQ2hhclNldCjdiQCiuBRMN8qyF8QJrEX1PTEJA8ibkwGSloRnDrjxgSdnKS9EZXNjZW50IC0yMTAvRmxhZ3MgMzIvRm9udEJCb3hbLTEzNSAtMjEwIDk1NCA3OTBdL0ZvbnRGYW1pbHkoootcbqi4Fkk467MEil2HWbAUaikvRm9udEZpbGUzIDIyMSAwIFIvRm9udE5hbWUvQVlRQlVGK1Byb3hpbWFOb3ZhQ29uZC1TZW1pYm9sZC9Gb250U3RyZXRjaC9Db25kZW5zZWQvRm9udFdlaWdodCA3MDAvSXRhbGljQW5n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Pg1lbmRvYmoNMjUxIDAgb2JqDTw8L0JvdW5kc1swLjIyMTAxNCAwLjg0OTYzNl0vRG9tYWluWzAuMCAxLjBdL0VuY29kZVswLjAgMS4wIDAuMCAxLjAgMC4wIDEuMF0vRnVuY3Rpb25UeXBlIDMvRnVuY3Rpb25zWzI1MiAwIFIgMjUzIDAgUiAyNTIgMCBSXT4+DWVuZG9iag0yNTIgMCBvYmoNPDwvQzBbMC4wIDAuMCAwLjBdL0MxWzAuMCAwLjAgMC4wXS9Eb21haW5bMC4wIDEuMF0vRnVuY3Rpb25UeXBlIDIvTiAxLjA+Pg1lbmRvYmoNMjUzIDAgb2JqDTw8L0MwWzAuMCAwLjAgMC4wXS9DMVswLjAgMC4wIDAuMF0vRG9tYWluWzAuMCAxLjBdL0Z1bmN0aW9uVHlwZSAyL04gMS4xOTcxNT4+DWVuZG9iag0yNTQgMCBvYmoNPDwvQUlTIGZhbHNlL0JNL05vcm1hbC9DQSAxLjAvT1AgZmFsc2UvT1BNIDEvU0EgdHJ1ZS9TTWFzayAyNjQgMCBSL1R5cGUvRXh0R1N0YXRlL2NhIDEuMC9vcCBmYWxzZT4+DWVuZG9iag0yNTUgMCBvYmoNPDwvQUlTIGZhbHNlL0JNL05vcm1hbC9DQSAxLjAvT1AgZmFsc2UvT1BNIDEvU0EgdHJ1ZS9TTWFzayAyNTYgMCBSL1R5cGUvRXh0R1N0YXRlL2NhIDEuMC9vcCBmYWxzZT4+DWVuZG9iag0yNTYgMCBvYmoNPDwvRyAyNTcgMCBSL1MvTHVtaW5vc2l0eS9UeXBlL01hc2s+Pg1lbmRvYmoNMjU3IDAgb2JqDTw8L0JCb3hbLTMyNzY4LjAgMzI3NjcuMCAzMjc2Ny4wIC0zMjc2OC4wXS9Hcm91cCAyNTggMCBSL0xlbmd0aCAxMTMvTWF0cml4WzEuMCAwLjAgMC4wIDEuMCAwLjAgMC4wXS9SZXNvdXJjZXM8PC9FeHRHU3RhdGU8PC9HUzAgMjkgMCBSPj4vU2hhZGluZzw8L1NoMCAyNTkgMCBSPj4+Pi9TdWJ0eXBlL0Zvcm0+PnN0cmVhbQ0KtJRmnDyMOahB5iwZVdS9nawyKbWVIG4dZqry5p+7zfNG+JDtJabKGNJTCPRJWm6H1e00qU0oKRKZ/uU0uH6N0/kgT7JgS0y4S0ER6ieyuv/rl+tqRT6KjNc+OkH8dFvb0cZ9FQgciwANM8m6Kc6iThcNZW5kc3RyZWFtDWVuZG9iag0yNTggMCBvYmoNPDwvQ1MvRGV2aWNlUkdCL0kgZmFsc2UvSyBmYWxzZS9TL1RyYW5zcGFyZW5jeS9UeXBlL0dyb3VwPj4NZW5kb2JqDTI1OSAwIG9iag08PC9BbnRpQWxpYXMgZmFsc2UvQ29sb3JTcGFjZS9EZXZpY2VHcmF5L0Nvb3Jkc1swLjAgMC4wIDAuMCAwLjAgMC4wIDEuMF0vRG9tYWluWzAuMCAxLjBdL0V4dGVuZFt0cnVlIHRydWVdL0Z1bmN0aW9uIDI2MCAwIFIvU2hhZGluZ1R5cGUgMz4+DWVuZG9iag0yNjAgMCBvYmoNPDwvQm91bmRzWzAuMTUwMzY0IDAuNzc4OTg2XS9Eb21haW5bMC4wIDEuMF0vRW5jb2RlWzAuMCAxLjAgMS4wIDAuMCAwLjAgMS4wXS9GdW5jdGlvblR5cGUgMy9GdW5jdGlvbnNbMjYxIDAgUiAyNjIgMCBSIDI2MyAwIFJdPj4NZW5kb2JqDTI2MSAwIG9iag08PC9DMFsxLjBdL0MxWzEuMF0vRG9tYWluWzAuMCAxLjBdL0Z1bmN0aW9uVHlwZSAyL04gMS4wPj4NZW5kb2JqDTI2MiAwIG9iag08PC9DMFswLjNdL0MxWzEuMF0vRG9tYWluWzAuMCAxLjBdL0Z1bmN0aW9uVHlwZSAyL04gMS4xOTcxNT4+DWVuZG9iag0yNjMgMCBvYmoNPDwvQzBbMC4zXS9DMVswLjNdL0RvbWFpblswLjAgMS4wXS9GdW5jdGlvblR5cGUgMi9OIDEuMD4+DWVuZG9iag0yNjQgMCBvYmoNPDwvRyAyNjUgMCBSL1MvTHVtaW5vc2l0eS9UeXBlL01hc2s+Pg1lbmRvYmoNMjY1IDAgb2JqDTw8L0JCb3hbLTMyNzY4LjAgMzI3NjcuMCAzMjc2Ny4wIC0zMjc2OC4wXS9GaWx0ZXIvRmxhdGVEZWNvZGUvR3JvdXAgMjY2IDAgUi9MZW5ndGggMTEwL01hdHJpeFsxLjAgMC4wIDAuMCAxLjAgMC4wIDAuMF0vUmVzb3VyY2VzPDwvRXh0R1N0YXRlPDwvR1MwIDI5IDAgUj4+L1NoYWRpbmc8PC9TaDAg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',
    'filemime' => 'application/pdf',
    'filename' => 'Gladstone-HIV-AIDS-myths-2013.pdf',
    'filesize' => 146793,
    'focus_rect' => NULL,
    'metadata' => array(),
    'status' => 1,
    'title' => '',
    'type' => 'document',
    'uid' => 1,
    'uri' => 'public://site_page/Gladstone-HIV-AIDS-myths-2013.pdf',
    'url_alias' => array(),
    'uuid' => 'e220f4ec-fe75-4b45-bb0d-cde14af45ab4',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/feb8c198-b9fb-41cb-b3f5-24b4b153eae8',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p><img alt="Top 5 Myths About HIV/AIDS" class="media-image img__fid__269 img__view_mode__default attr__format__default attr__field_file_image_alt_text[und][0][value]__Top 5 Myths About HIV/AIDS attr__field_file_image_title_text[und][0][value]__" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/HIV-AIDS-info.png" /></p>

<p>Data Sources:</p>

<p>» <a href="http://aids.gov/">aids.gov</a></p>

<p>» <a href="http://www.cdc.gov/">Centers for Disease Control and Prevention</a></p>

<p>» <a href="http://kff.org/">Henry J. Kaiser Family Foundation</a></p>

<p>» <a href="http://www.unaids.org/en/">UNAIDS</a></p>

<p>» <a href="http://data.unicef.org/">UNICEF: Child Info</a></p>

<p>» <a href="http://www.washingtonpost.com/">The Washington Post</a></p>

<p>» <a href="http://www.who.int/en/">World Health Organization</a></p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'crop_rect' => NULL,
          'description' => '',
          'display' => 1,
          'fid' => 'e220f4ec-fe75-4b45-bb0d-cde14af45ab4',
          'filemime' => 'application/pdf',
          'filename' => 'Gladstone-HIV-AIDS-myths-2013.pdf',
          'filesize' => 146793,
          'focus_rect' => NULL,
          'metadata' => array(),
          'status' => 1,
          'title' => '',
          'type' => 'document',
          'uid' => 1,
          'uri' => 'public://site_page/Gladstone-HIV-AIDS-myths-2013.pdf',
          'uuid' => 'e220f4ec-fe75-4b45-bb0d-cde14af45ab4',
        ),
      ),
    ),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '33890157-70e8-4b8f-baa0-ac6051467b2d',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Top Five Myths about HIV/AIDS',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/top-five-myths-about-hivaids',
        'language' => 'und',
      ),
    ),
    'uuid' => 'feb8c198-b9fb-41cb-b3f5-24b4b153eae8',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/af96ed27-0e7f-48ce-80e2-67f10340a5d4',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '33890157-70e8-4b8f-baa0-ac6051467b2d',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Publications',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/publications-1',
        'language' => 'und',
      ),
    ),
    'uuid' => 'af96ed27-0e7f-48ce-80e2-67f10340a5d4',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/c1157b35-2941-4e56-935b-de70016ab617',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>Established in 2011, the Gladstone Foundation is a nonprofit that is separate and independent from the Gladstone Institutes—but is dedicated to accelerating our research.</p>

<p>Led by Board Chair William S. Price III and Vice Chair William K. Bowes, the Foundation’s Board of Directors is made up of unsurpassed leaders in science, industry, investment, public affairs, and philanthropy. Serving on the Board provides a meaningful way to help reduce the burden of disease around the globe, and sometimes in members’ own families.</p>

<p>In addition to providing financial support to Gladstone, the Foundation works in concert with our President’s Council to act as strategic advisors and as Gladstone ambassadors to the community and the nation.</p>

<p>For information about our Foundation Board, contact Michael Penn, Chief Executive Officer, Gladstone Foundation, at<a href="mailto:michael.penn@gladstone.ucsf.edu?subject=Gladstone%20Foundation" style="text-decoration: none; color: rgb(12, 74, 101);">michael.penn@gladstone.ucsf.edu</a>.</p>

<p><strong>Gladstone Foundation Board</strong></p>

<p>William S. Price III, Board Chair</p>

<p>William K. Bowes, Vice Chair</p>

<p>W. Richard Bingham</p>

<p>Elizabeth Blackburn, PhD</p>

<p>Chris Boskin</p>

<p>Robin Richards Donohoe</p>

<p>Paul C. Edwards</p>

<p>Alan L. Kaganov, ScD</p>

<p>Louis G. Lange, MD, PhD</p>

<p>Ernest Mario, PhD</p>

<p>Stasia Obremskey</p>

<p>Douglas G. Scrivner</p>

<p>Nicholas J. Simon</p>

<p>R. Sanders “Sandy” Williams, MD</p>

<p>William H. Younger</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Gladstone Foundation',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/gladstone-foundation',
        'language' => 'und',
      ),
    ),
    'uuid' => 'c1157b35-2941-4e56-935b-de70016ab617',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/85b9e15b-2d97-46be-8328-b39630dc0648',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p><img alt="J. David Gladstone" class="David Gladstone attr__field_file_image_alt_text[und][0][value]__J. attr__field_file_image_title_text[und][0][value]__ attr__format__teaser img__fid__245 img__view_mode__teaser media-image" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/styles/medium/public/Gladstone-J-David-Portrait-1200.jpg?itok=bZ2pGqXA" style="border:0px; float:left; height:auto; max-width:100%; padding:6px 15px 0px 0px" />Born in London in 1910, J. David Gladstone was orphaned as a boy and came to North America at age 10. He began a career in real estate in Southern California at age 28, eventually making his fortune as the first developer to create the region’s enclosed shopping malls (such as the Northridge Fashion Center mall). His accidental death in 1971 left an estate valued at about $8 million to support medical students interested in research.</p>

<p>It soon became clear to the three trustees administering Mr. Gladstone’s trust that his legacy could support a far more substantial philanthropic enterprise. In 1979, they launched The J. David Gladstone Institutes under the leadership of&nbsp;<a href="http://today.gladstone.internal:8888/current/builds/demo/our-science/people/robert-mahley" style="text-decoration: none; color: rgb(12, 74, 101);">Robert W. Mahley, MD, PhD</a>, a leading cardiovascular scientist who at the time was working at the National Institutes of Health.</p>

<p>Through an affiliation agreement with the University of California, San Francisco (UCSF), the Gladstone Institutes was founded as a research and training facility housed at San Francisco General Hospital. After a dozen years of cardiovascular breakthroughs, we expanded our focus in 1991 to include virology and immunology. Thanks to a partnership involving Gladstone, UCSF, the City and County of San Francisco and the State of California, the new institute focused on the growing HIV/AIDS crisis.</p>

<p>In 1998, Gladstone addressed another expanding emergency—brain disorders such as Alzheimer’s disease—by founding a third institute dedicated to unraveling neurological illnesses.</p>

<p>In 2004, we moved to the new facility that we built in San Francisco’s Mission Bay, ushering in a renewed sense of collaboration among Gladstone’s growing scientific staff. Two years later, in 2006, Gladstone founded a center dedicated to translating its biological discoveries into therapies that can help an ever-growing body of patients—whether they suffer from congenital heart disease, Hepatitis C or Parkinson’s disease. Three years later, Gladstone joined forces with Taube Philanthropies and the Koret Foundation to found the Taube/Koret Center for Neurodegenerative Disease Research, as a direct outgrowth of our growing focus on “translational” work.</p>

<p>In 2010, after three decades of leading Gladstone, Dr. Mahley stepped down in order to return to more active research. That same year,&nbsp;<a href="http://today.gladstone.internal:8888/current/builds/demo/our-science/people/r-sanders-williams" style="text-decoration: none; color: rgb(12, 74, 101);">R. Sanders “Sandy” Williams, MD</a>, left Duke University, where he had been Dean of the School of Medicine—as well as Senior Vice Chancellor and Senior Advisor for International Strategy—to become Gladstone’s new president. The following year, the S.D. Bechtel, Jr. Foundation helped launch the Center for Comprehensive Alzheimer’s Disease Research with a generous $6M lead gift, while the Roddenberry Foundation<strong>&nbsp;</strong>gave $5 million to launch<strong>&nbsp;</strong>the&nbsp;<a href="http://today.gladstone.internal:8888/current/builds/demo/node/70" style="text-decoration: none; color: rgb(12, 74, 101);">Roddenberry Stem Cell Center for Biology and Medicine</a>. Also in 2011, the independent and philanthropic&nbsp;<a href="http://today.gladstone.internal:8888/current/builds/demo/node/43" style="text-decoration: none; color: rgb(12, 74, 101);">Gladstone Foundation</a>&nbsp;formed with the mission of expanding the financial resources available to drive’s Gladstone’s mission.</p>

<p>Today, our 300+ scientists are driven by a palpable sense of dedication and urgency to prevent, treat and cure a carefully chosen subset of some of the world\'s most devastating illnesses. Cardiovascular disease kills more people than any other condition on the planet. HIV/AIDS has killed some 30 million people in three decades. And neurological conditions such as Alzheimer’s and Parkinson’s diseases will afflict twice as many sufferers by 2050&nbsp;as they do today, if present trends continue unabated.</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'History',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/history',
        'language' => 'und',
      ),
    ),
    'uuid' => '85b9e15b-2d97-46be-8328-b39630dc0648',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/f87d9504-2f14-4f6b-b369-d566aaa0f3f2',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<div style="margin-bottom:20px;">THIS NEEDS TO BE CONVERTED INTO HONORS AND AWARDS CONTENT NODES!</div>

<div style="margin-bottom:20px;">&nbsp;</div>

<div style="margin-bottom:20px;">We are gratified to be honored by so many organizations for various aspects of life at Gladstone. Here we display a few of the many awards and accolades we have received. Thank you to all the groups who have helped to celebrate Gladstone.</div>

<table align="left" border="0" cellpadding="5" class="fancy-table" style="width:600px;">
	<tbody>
		<tr>
			<td align="left" valign="top"><img alt="The Scientist Logo" height="138" src="http://gladstoneinstitutes.org/sites/default/files/Best-Places-To-Work-Academia-2012C-190x138.jpg" style="margin:10px;" width="190" /></td>
			<td align="left" valign="top">
			<div style="padding:10px 0px;"><strong>BEST PLACES TO WORK IN ACADEMIA</strong><br />
			<em>The Scientist</em> magazine consistently ranks Gladstone among the top places to work in academia. Gladstone has placed in the top 10 in every one of the past 8 years—in <a href="http://gladstoneinstitutes.org/pressrelease/2012-08-01/gladstone-named-best-place-to-work-in-academia">2012</a> and <a href="http://gladstoneinstitutes.org/pressrelease/2011-07-01/gladstone-ranked-1-academic-employer">2011</a>, Gladstone held the #1 spot.</div>
			</td>
		</tr>
		<tr>
			<td><img alt="The Scientist Logo" height="138" src="http://gladstoneinstitutes.org/sites/default/files/Best-Places-To-Work-Postdocs-2013-190x138.png" style="margin:10px;" width="190" /></td>
			<td align="left" valign="top">
			<div style="padding:10px 0px;"><strong>BEST PLACES TO WORK FOR POSTDOCS</strong><br />
			Gladstone has ranked in the top 15 of the best places to work for postdoctoral fellows as surveyed by <em>The Scientist</em> magazine for the past 8 years—with a #2 ranking for <a href="http://www.the-scientist.com/?articles.view/articleNo/31874/title/Best-Places-to-Work-Postdocs--2012/">2012</a>. In <a href="http://www.the-scientist.com/?articles.view/articleNo/23789/title/Best-Places-to-Work-2006--Postdocs/">2006</a> and <a href="http://www.marketwire.com/press-release/2008-results-announced-best-places-to-work-for-postdocs-827941.htm">2008</a>, Gladstone ranked #1.</div>
			</td>
		</tr>
		<tr>
			<td><img alt="Nobel Prize Medal" height="141" src="http://gladstoneinstitutes.org/sites/default/files/nobel-medals190x141.png" style="margin:10px;" width="190" /></td>
			<td align="left" valign="top">
			<div style="padding:10px 0px;"><strong>NOBEL PRIZE</strong><br />
			Gladstone Senior Investigator <a href="http://gladstoneinstitutes.org/yamanaka">Shinya Yamanaka, MD, PhD</a>, won the <a href="http://www.gladstoneinstitutes.org/pressrelease/2012-10-08/gladstone-scientist-wins-nobel-prize-in-medicine">2012 Nobel Prize in Physiology or Medicine</a> for his discovery of how to transform ordinary adult skin cells into cells that, like embryonic stem cells, are capable of developing into any cell in the human body. Dr. Yamanaka shared the award with Sir John Gurdon of the Gurdon Institute, Cambridge.</div>
			</td>
		</tr>
		<tr>
			<td><img alt="Inst-Medicine-Nat-Acad" height="163" src="http://gladstoneinstitutes.org/sites/default/files/Inst_Med_Nat_Acad190x163.png" style="margin:10px;" width="190" /></td>
			<td align="left" valign="top">
			<div style="padding:10px 0px;"><strong>INSTITUTE OF MEDICINE OF THE NATIONAL ACADEMIES</strong><br />
			The Institute of Medicine (IOM) is the health division of the National Academy of Sciences. Membership in the IOM reflects the height of professional achievement and commitment to service in a field related to medicine and health. Three Gladstone scientists have been elected to the IOM:<br />
			<a href="http://gladstoneinstitutes.org/mahley">Robert W. Mahley, MD, PhD</a>–elected 2001<br />
			<a href="http://gladstoneinstitutes.org/williams">R. Sanders Williams, MD</a>–elected 2002<br />
			<a href="http://gladstoneinstitutes.org/greene">Warner C. Greene, MD, PhD</a>–elected 2005</div>
			</td>
		</tr>
		<tr>
			<td><img alt="A A A and S Logo" height="155" src="http://gladstoneinstitutes.org/sites/default/files/Amer-Acad-Arts-Sci190x155.png" style="margin:10px;" width="190" /></td>
			<td align="left" valign="top">
			<div style="padding:10px 0px;"><strong>AMERICAN ACADEMY OF ARTS AND SCIENCES</strong><br />
			The American Academy of Arts and Sciences is one of the nation\'s oldest and most prestigious honorary societies and a leading center for independent research. Since its founding in 1780, the Academy has elected leading "thinkers and doers" from each generation, including Benjamin Franklin, Ralph Waldo Emerson, Albert Einstein and more than 250 Nobel laureates and 60 Pulitzer Prize winners. Three Gladstone scientists have been elected to this distinguished Academy:<br />
			<a href="http://gladstoneinstitutes.org/mahley">Robert W. Mahley, MD, PhD</a>–elected 2006<br />
			<a href="http://gladstoneinstitutes.org/srivastava">Deepak Srivastava, MD</a>–elected 2010<br />
			<a href="http://gladstoneinstitutes.org/greene">Warner C. Greene, MD, PhD</a>–elected 2014</div>
			</td>
		</tr>
		<tr>
			<td><img alt="AAAS Logo" height="57" src="http://gladstoneinstitutes.org/sites/default/files/AAAS_Logo190x57.png" style="margin:10px;" width="190" /></td>
			<td align="left" valign="top">
			<div style="padding:10px 0px;"><strong>AMERICAN ASSOCIATION FOR THE ADVANCEMENT OF SCIENCE</strong><br />
			The American Association for the Advancement of Science (AAAS), one of the nation\'s top honorary societies, recognizes the extraordinary scientific contributions of scientists by electing them as members. Gladstone is fortunate to have five distinguished AAAS fellows on our staff:<br />
			<a href="http://gladstoneinstitutes.org/williams">R. Sanders Williams, MD</a>–elected 1992<br />
			<a href="http://gladstoneinstitutes.org/mahley">Robert W. Mahley, MD, PhD</a>–elected 1998<br />
			<a href="http://gladstoneinstitutes.org/yamanaka">Warner C. Greene, MD, PhD</a>– elected 2004<br />
			<a href="http://gladstoneinstitutes.org/yamanaka">Eric M. Verdin, MD</a>–elected 2009<br />
			<a href="http://gladstoneinstitutes.org/srivastava">Deepak Srivastava, MD</a>–elected 2011</div>
			</td>
		</tr>
		<tr>
			<td><img alt="Millennium Tech Prize Logo" height="68" src="http://gladstoneinstitutes.org/sites/default/files/MilleniumTechPrize190x68.png" style="margin:10px;" width="190" /></td>
			<td align="left" valign="top">
			<div style="padding:10px 0px;"><strong>MILLENNIUM TECHNOLOGY PRIZE</strong><br />
			In 2012, Senior Investigator <a href="http://gladstoneinstitutes.org/yamanaka">Shinya Yamanaka, MD, PhD</a>, won the <a href="http://www.gladstoneinstitutes.org/pressrelease/2012-06-13/gladstone-investigator-shinya-yamanaka-receives-millennium-technology-award">Millennium Technology Award</a> Grand Prize, the world\'s largest and most prominent technology award. The award recognized Dr. Yamanaka\'s discovery of a way to turn adult skin cells into cells that act like embryonic stem cells. Dr. Yamanaka shared the award with Linus Torvalds, creator of Linux.</div>
			</td>
		</tr>
		<tr>
			<td><img alt="Potamkin Prize Logo" height="183" src="http://gladstoneinstitutes.org/sites/default/files/PotamkinPrize190x183.png" style="margin:10px;" width="190" /></td>
			<td align="left" valign="top">
			<div style="margin-top:10px;"><strong>POTAMKIN PRIZE</strong><br />
			The American Academy of Neurology and the American Brain Foundation honors researchers for their work in helping to advance the understanding of Pick\'s, Alzheimer\'s and related diseases. In 2010, <a href="http://gladstoneinstitutes.org/mucke">Lennart Mucke, MD</a>—director of neurological research at Gladstone—received this prestigious award for his work in Alzheimer\'s disease.</div>
			</td>
		</tr>
		<tr>
			<td colspan="2">
			<div style="margin-top:30px;margin-bottom:30px;"><span style="font-size:22px;"><strong>Other Special Honors</strong></span></div>
			</td>
		</tr>
		<tr>
			<td colspan="2">
			<div style="padding:10px 20px;"><strong>NATIONAL ACADEMY OF SCIENCES</strong><br />
			Election to the National Academy is among the highest honors available for U.S. scientists and engineers. In 2011, Gladstone\'s Senior Investigator <a href="http://gladstoneinstitutes.org/yamanaka" title="Shinya Yamanaka, MD, PhD">Shinya Yamanaka, MD, PhD</a> was elected as a Foreign Associate. Gladstone\'s President Emeritus, who at the time was Gladstone\'s President, <a href="http://gladstoneinstitutes.org/mahley" title="Robert W. Mahley, MD, PhD">Robert W. Mahley, MD, PhD</a> was elected to the Academy in 2000.</div>
			</td>
		</tr>
		<tr>
			<td align="left" colspan="2" valign="top">
			<div style="margin-left:20px;">
			<div style="padding:10px 0px;"><strong><em>TIME</em> MAGAZINE\'S TIME 100</strong><br />
			Each year, <em>Time</em> magazine publishes its list of the world\'s 100 most influential people. In <a href="http://www.gladstoneinstitutes.org/pressrelease/2012-04-18/gladstone-scientist-robert-grant-named-one-of-time-magazines-time-100">2012</a>, Gladstone Senior Investigator <a href="http://gladstoneinstitutes.org/grant">Robert M. Grant, MD, MPH</a> was recognized for leading the groundbreaking and global IPrEx clinical study, which showed that existing HIV/AIDS medications can prevent HIV transmission in those likely to be exposed to the virus. In <a href="http://www.time.com/time/specials/2007/article/0,28804,1733748_1733754_1736238,00.html">2008</a>, <em>Time</em> recognized Gladstone Senior Investigator <a href="http://gladstoneinstitutes.org/yamanaka">Shinya Yamanaka, MD, PhD</a> for his discovery of how to transform adult skin cells into cells that behave like embryonic stem cells. The cells, known as induced pluripotent stem (iPS) cells, have the ability to become any cell type in the body.</div>
			</div>
			</td>
		</tr>
	</tbody>
</table>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Honors and Awards',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/honors-and-awards',
        'language' => 'und',
      ),
    ),
    'uuid' => 'f87d9504-2f14-4f6b-b369-d566aaa0f3f2',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/4f4ff94c-9cfb-41d4-8cd2-4c3e67ccfa80',
      'cause' => FALSE,
    ),
    'body' => array(),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '9f091c73-fdcc-470a-a19a-a6bade03039c',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Honors and Awards',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/honors-and-awards-0',
        'language' => 'und',
      ),
    ),
    'uuid' => '4f4ff94c-9cfb-41d4-8cd2-4c3e67ccfa80',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/57b17a2c-0541-476b-abfd-44ab2aa97b55',
      'cause' => FALSE,
    ),
    'body' => array(),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '9f091c73-fdcc-470a-a19a-a6bade03039c',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Recent Advances',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/recent-advances',
        'language' => 'und',
      ),
    ),
    'uuid' => '57b17a2c-0541-476b-abfd-44ab2aa97b55',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/cb69ff32-2039-4d5c-b83d-da57c8cf842a',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<div><a href="http://today.gladstone.internal:8888/current/builds/demo/our-science/people/albert-dorman" style="text-decoration: none; color: rgb(12, 74, 101);"><img alt="Albert A. Dorman" class="image-style-leadership-thumb" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/styles/leadership_thumb/public/profile_pictures/Dorman_Albert.jpg?itok=4TEEefHn" style="border:0px; float:left; height:auto; margin-bottom:1em; margin-right:1em; max-width:100%" /></a>

<div>
<div>
<div>
<div>
<div>
<p><strong>Albert A. Dorman</strong>&nbsp;has been a Trustee of the Gladstone Institutes since 1988.</p>

<p>Mr. Dorman is also the Founding Chairman of Los Angeles-based AECOM Technology Corp., which was launched in 1990. Listed on the New York Stock Exchange, AECOM is a leading provider of program management and diversified technical and professional services. It employs 45,000 people and generates annual revenues in excess of $8 billion. An architect and engineer, Mr. Dorman has been involved in projects on all seven continents and has extensive experience in the design and operation of advanced research facilities, infrastructure programs, architecture, engineering, finance and management. He has operated in both the public and private sectors, and is the author of numerous articles on the management of technical organizations. Mr. Dorman holds an appointment as a Research Professor in the Viterbi School of Engineering, at the University of Southern California (USC). He is a member of the National Academy of Engineering. He is a Fellow of the American Institute of Architects, a Fellow and Distinguished Member of the American Society of Civil Engineers, and has received many honors for his professional work and civic community service. Mr. Dorman earned a bachelor’s degree in mechanical engineering at the New Jersey Institute of Technology (NJIT), an MS in civil engineering from USC, and an honorary ScD from NJIT.</p>
</div>
</div>
</div>
</div>
</div>
</div>

<div><a href="http://today.gladstone.internal:8888/current/builds/demo/our-science/people/andrew-garb" style="text-decoration: none; color: rgb(12, 74, 101);"><img alt="Andrew S. Garb" class="image-style-leadership-thumb" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/styles/leadership_thumb/public/profile_pictures/Garb_Andrew.jpg?itok=Y31WsifQ" style="border:0px; float:left; height:auto; margin-bottom:1em; margin-right:1em; max-width:100%" /></a>

<div>
<div>
<div>
<div>
<div>
<p><strong>Andrew S. Garb</strong>&nbsp;has been a Trustee of the Gladstone Institutes since 2004.</p>

<p>Mr. Garb is associated with the law firm Loeb &amp; Loeb LLP in Los Angeles, where he was the managing partner from 1986 to 1992. In 1981, he was named legal counsel to the Gladstone Trustees, and in 1995 he became Trustee Designate. At Loeb &amp; Loeb, Mr. Garb’s clients have included J. Paul Getty, Jr., the Conrad Hilton Foundation, the William Randolph Hearst Trust and the estates of Gene Roddenberry and Frank Sinatra. He is a Fellow of the American College of Trust and Estate Counsel and has published and lectured extensively in the field of trust and estate law. In addition to his professional activities, Mr. Garb is Director of The Roddenberry Foundation, a director of the Kane Educational and Research Foundation as well as Chair of the Board and Co-Founder of Success Through the Arts Foundation. He is President of the Board of The Crohn’s &amp; Colitis Foundation, Greater Los Angeles Chapter, and a lay reviewer of the Crohn’s &amp; Colitis Foundation’s National Grants Review Committee. Mr. Garb earned a JD at Harvard Law School in 1967. Following a teaching/research assistantship at Yale Law School, he received his LLM from the University of Southern California Law School.</p>
</div>
</div>
</div>
</div>
</div>
</div>

<div><a href="http://today.gladstone.internal:8888/current/builds/demo/our-science/people/richard-jones" style="text-decoration: none; color: rgb(12, 74, 101);"><img alt="Richard D. Jones" class="image-style-leadership-thumb" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/styles/leadership_thumb/public/profile_pictures/Jones_Richard.jpg?itok=2jj3twzT" style="border:0px; float:left; height:auto; margin-bottom:1em; margin-right:1em; max-width:100%" /></a>

<div>
<div>
<div>
<div>
<div>
<p><strong>Richard D. Jones</strong>&nbsp;has been a Trustee of the Gladstone Institutes since 1971 and is the only one of three founding trustees of the original Gladstone Trust who is still a Gladstone Trustee.</p>

<p>Mr. Jones was general counsel to J. David Gladstone from 1959 until Mr. Gladstone’s death in 1971. Thereafter, Mr. Jones directed the affairs of Mr. Gladstone’s various business ventures, including the completion of construction, financing and leasing of Northridge Fashion Center, the management of Valley Plaza Shopping Center and the development and disposal of several smaller properties. Mr. Jones, a native of southern California, is a graduate of both Whittier College and the University of Southern California School of Law.</p>
</div>
</div>
</div>
</div>
</div>
</div>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Trustees',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/trustees',
        'language' => 'und',
      ),
    ),
    'uuid' => 'cb69ff32-2039-4d5c-b83d-da57c8cf842a',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/e4b64537-4fa6-4b6f-83f9-626d77e39f9d',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>HIV/AIDS ranks among the deadliest infectious epidemics ever recorded, along with the Middle Age’s bubonic plague, the 18th century’s small pox epidemic and the great influenza epidemic of 1918–19. HIV/AIDS has infected more than 60 million people around the world—and killed 34 million since first being identified in the early 1980s. Today’s antiretroviral drugs can help people with HIV/AIDS survive the disease—but patients require lifelong treatment of daily medications for the virus that persists in a dormant, drug-insensitive form. In the United States alone, more than one million people live with HIV/AIDS at an annual cost of $34 billion.</p>

<p><iframe frameborder="0" height="236" src="http://player.vimeo.com/video/44776404" width="420"></iframe></p>

<p>Gladstone has been working to fight this devastating disease for more than 20 years. In that time, we have fundamentally changed our understanding of HIV infection. We recently discovered and characterized proteins in semen that enhance HIV’s ability to infect the immune system—a discovery that one day could help curb the global spread of this deadly pathogen. We also led the global and groundbreaking iPrEx study, showing how a daily pill can prevent HIV infection in people likely to come in contact with the virus. And we’ve solved the decades-old mystery of how HIV destroys cells, defined the functions of several HIV proteins and helped define the HIV lifecycle. These findings are spurring innovative strategies for preventing, treating and—ultimately—curing HIV/AIDS.</p>

<p><iframe allowfullscreen="" frameborder="0" height="236" src="//www.youtube.com/embed/6ZERD2YvvHo?rel=0" width="420"></iframe></p>

<p>Our research also encompasses other areas of human health, highlighting our strategy to give scientists the freedom to follow their research wherever it leads. Gladstone virologists discovered, for example, the critical impact several enzymes called sirtuins have on aging, cancer and diabetes. These discoveries not only enhance our fundamental understanding of these conditions, but also point to potential therapeutic strategies for treating them. Our research on sirtuins is also informing our ongoing investigation into the phenomenon of accelerated aging among people with HIV/AIDS. To be sure, our work on this disease is by no means done. For these individuals, and all those who may be exposed to the virus, there is no time to lose.</p>

<p><img alt="Top 5 Myths About HIV/AIDS" class="media-image img__fid__82 img__view_mode__default attr__format__default attr__field_file_image_alt_text[und][0][value]__Top 5 Myths About HIV/AIDS attr__field_file_image_title_text[und][0][value]__Top" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/Gladstone-Top5-HIV-Myths-1100x825.png" title="Top 5 Myths About HIV/AIDS" /></p>

<p>And as we continue our research, our principal investigators—who are also professors at the University of California, San Francisco (UCSF)—are busy training the next generation of investigators to assume leadership roles in scientific discovery around the globe. On an ongoing basis, we work with an extraordinary group of postdoctoral fellows and graduate students who add tremendous energy to our virology and immunology research. Their combined contributions to human health and Gladstone—a nimble organization that is unencumbered by large-institution bureaucracy—are stunning. To learn more about training at Gladstone, please visit the Training Programs section of our website.</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '33890157-70e8-4b8f-baa0-ac6051467b2d',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Virology and Immunology',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/virology-and-immunology',
        'language' => 'und',
      ),
    ),
    'uuid' => 'e4b64537-4fa6-4b6f-83f9-626d77e39f9d',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/00606b6b-8ecc-4f68-b190-e244b8cd45e1',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '33890157-70e8-4b8f-baa0-ac6051467b2d',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Seminars and Events',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/seminars-and-events-0',
        'language' => 'und',
      ),
    ),
    'uuid' => '00606b6b-8ecc-4f68-b190-e244b8cd45e1',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/229114bf-b108-402c-8526-f65767bd1ae7',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p><big><strong>Center for HIV &amp; Aging at&nbsp;Gladstone</strong></big></p>

<p><img alt="Eric Verdin" class="media-image img__fid__271 img__view_mode__teaser attr__format__teaser attr__field_file_image_alt_text[und][0][value]__Eric Verdin attr__field_file_image_title_text[und][0][value]__" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/styles/medium/public/verdin_hiv-aging_2012_330x433.png?itok=UpGI0uEv" style="float: right;" />The Gladstone Institutes launched the Center for HIV &amp; Aging in 2012 to address the fact that people with HIV in the United States and other developed nations are dying 10-20 years earlier than their peers without HIV. These patients are not dying of AIDS-related diseases, however. Instead, they are succumbing to diseases normally associated with old age. This “accelerated aging” often causes the early onset of illnesses such as dementia, heart disease, stroke, Type II diabetes and various cancers. Accelerated aging is now the number one HIV-related health crisis in the developed world. Gladstone investigators, who are at the forefront of tackling this unaddressed issue, have created a preeminent Center with two central imperatives:</p>

<ul>
	<li>To determine exactly how HIV promotes accelerated aging and what can be done to arrest the process</li>
	<li>To improve the quality of life for people with HIV by delaying the onset of, and ultimately preventing, these age-related illnesses.</li>
</ul>

<p>As with all of our research on HIV/AIDS, the investigations at the Center for HIV &amp; Aging are part of Gladstone\'s broader goals: to better prevent and treat—and ultimately cure—HIV/AIDS.</p>

<p>Our scientists are currently investigating a variety of hypotheses concerning the cause of accelerated aging. Chronic inflammation, itself caused by persistent low-level production of the virus, may be to blame. HIV medications themselves may also be a culprit—or a combination of these factors may be responsible.</p>

<p>Our researchers are uniquely positioned to unravel—and solve—this problem because of our combined expertise in HIV/AIDS biology, aging, chronic inflammation and cancer. Our team of innovative researchers is engaging multiple biological strategies to uncover solutions to this problem.</p>

<p>This research holds the promise of restoring a longer lifespan for people with HIV. It also offers new and important insights into the aging process for those who do not carry the virus.</p>

<p><strong>The Center’s lead investigators include:</strong></p>

<p><a href="/current/builds/demo/our-science/people/warner-greene">Warner C. Greene, MD, PhD</a><br />
<a href="/current/builds/demo/our-science/people/eric-verdin">Eric M. Verdin, MD</a><br />
<a href="/current/builds/demo/our-science/people/robert-grant">Robert M. Grant, MD, MPH</a><br />
<a href="/current/builds/demo/our-science/people/jj-miranda">JJ Miranda, PhD</a><br />
<a href="/current/builds/demo/our-science/people/melanie-ott">Melanie Ott, MD, PhD</a><br />
<a href="/current/builds/demo/our-science/people/shomyseh-sanjabi">Shomyseh Sanjabi, PhD</a><br />
<a href="/current/builds/demo/our-science/people/leor-weinberger">Leor Weinberger, PhD</a></p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '33890157-70e8-4b8f-baa0-ac6051467b2d',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Centers',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/centers-0',
        'language' => 'und',
      ),
    ),
    'uuid' => '229114bf-b108-402c-8526-f65767bd1ae7',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/27550c5e-6847-456a-bd15-3f42d5a7185b',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '33890157-70e8-4b8f-baa0-ac6051467b2d',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Scientific Advisory Board',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/scientific-advisory-board-0',
        'language' => 'und',
      ),
    ),
    'uuid' => '27550c5e-6847-456a-bd15-3f42d5a7185b',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/29c69d7b-0a57-4f83-8a76-06adb3943efd',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p><img alt="Warner Greene" class="media-image img__fid__55 img__view_mode__default attr__format__default attr__field_file_image_alt_text[und][0][value]__Warner Greene attr__field_file_image_title_text[und][0][value]__" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/profile_pictures/greene-profile.jpg" /></p>

<p><strong>Warner C. Greene, MD, PhD</strong></p>

<p>More than two decades ago, when I was an attending physician on the wards of San Francisco General Hospital, every single one of my patients had AIDS. And there wasn\'t a thing that we could do about it. Every one of my patients died.</p>

<p>In 1991, I was honored with the opportunity to join Gladstone as the director of virology and immunology research to lead the charge against this deadly disease. At that time, we didn\'t know the full dimensions of the epidemic. Then, it was a few hundred thousand. Soon, it became a few million.</p>

<p>Today, even though HIV/AIDS has killed a devastating 34 million people, the basic science being done at Gladstone and similar organizations has helped to save millions of other lives along the way. Our studies of HIV have uncovered fundamentals of human biology that impact a range of disease processes beyond AIDS, as our study of the virus has given us a glimpse into the inner workings of normal cells that HIV pirates. And the creation of more than 30 drugs targeting different parts of the HIV life cycle will go down in history as a spectacular medical milestone.</p>

<p>But we urgently need to do more. There is no time to lose for the 35 million people currently infected with HIV/AIDS around the world—and the many more at risk of acquiring this virus. Thanks to today’s highly effective combinations of antiretroviral drugs, many HIV-infected people have lived beyond the age of 50. But we are witnessing a new and troubling fact—many of these individuals are dying earlier than expected from conditions associated with old age, such as heart disease, liver disease, and dementia.</p>

<p>We are still facing an expanding HIV/AIDS epidemic with a new and unexpected complication. To better understand, prevent, treat, and cure HIV/AIDS, we need to learn more about three essential processes: the link between the virus and inflammation; the type of immune response needed to prevent virus transmission; and HIV’s ability to establish latent reservoirs that resistant to drug treatment.</p>

<p>As we work with purpose and urgency to overcome such challenges, we are also busy training the next generation of virologists and immunologists. This critical element of our work is one of the most magical parts of my job. I fully understand that this next generation of scientists will accomplish far more than I can by virtue of their sheer numbers. We give their successful training the highest priority.</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '33890157-70e8-4b8f-baa0-ac6051467b2d',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Director\'s Vision',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/directors-vision-0',
        'language' => 'und',
      ),
    ),
    'uuid' => '29c69d7b-0a57-4f83-8a76-06adb3943efd',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/8deefa13-5614-4db9-98a6-bbefcbcccbac',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>Virology and immunology research at Gladstone focuses primarily on three urgent challenges in HIV/AIDS. We desperately need a vaccine for those at risk of coming in contact with the virus, as well as a cure for the millions of people who are already infected. And finally, we need new approaches to restoring a normal lifespan to those who are HIV-positive—but dying much too early from diseases of aging.</p>

<p>In the area of prevention, we are continuing the work started by our groundbreaking iPrEx study, which showed how a daily pill can prevent HIV infection in people likely to come in contact with it. We’re now working on the iPrEx Open-Label Extension Study (iPrEx OLE), which will enroll approximately 2,000 men and transgender women in a 72-week clinical trial.</p>

<p>Our scientists also continue to investigate the mechanisms by which HIV integrates and replicates within human hosts—while evading the host immune system. And we’ve launched studies to determine whether chronic, low-level inflammation associated with the disease—or the drugs themselves—are the major factors driving “accelerated aging” in HIV/AIDS.</p>

<p>As part of our work to find a cure for HIV/AIDS, we are investigating HIV latency as a member of the Martin Delaney Collaboratory—a consortium including academia, government, and private industry. Latency occurs when HIV goes dormant and “hides” within cells, waiting for an opportunity to reemerge when antiretroviral medications are stopped. By better understanding latency, and developing new ways to attack it, we could finally cure HIV-infected patients.</p>

<p>In addition to HIV/AIDS, we’re working on a variety of other areas: Gladstone scientists are looking for new biological targets for drugs that will attack the hepatitis C virus—which has infected 170 million people worldwide. Hepatitis C is a common co-infection with HIV/AIDS. We are also investigating the molecular structure of viruses associated with cancer—and how to remove them from the body as a way to reduce the risk of cancer. And we are investigating why newborns and infants mount less effective immune responses to viruses than adults do.</p>

<p>[ADD VIDEO OF SUSTAINABLE SCIENCE TO PROMOTE HEALTH IN AFRICA]</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '33890157-70e8-4b8f-baa0-ac6051467b2d',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Areas of Investigation',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/areas-investigation-0',
        'language' => 'und',
      ),
    ),
    'uuid' => '8deefa13-5614-4db9-98a6-bbefcbcccbac',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/f7ce3486-33ff-40fc-87e8-c7a2a7053600',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>Cardiovascular disease—including heart attacks, congenital heart defects, and many other disorders—is the world’s leading cause of death. Heart failure alone afflicts more than 23 million people around the world.</p>

<p><strong>Regenerating Hearts at Gladstone</strong></p>

<p><img alt="Regenerating Hearts at Gladstone" src="http://i.vimeocdn.com/video/475926997_640.jpg" /></p>

<p>Gladstone has worked to overcome cardiovascular disease for over three decades, and our scientists have made significant progress against this devastating illness. We’ve conducted research on the metabolism of cholesterol, contributing to today’s understanding of how cholesterol and heart disease are linked—and how to use that information to prevent adult heart disease. We have also mapped molecules that direct the development of fetal hearts—unraveling how nature tells a cell to become a heart cell. Finding these molecules has profoundly changed our understanding of congenital heart defects—leading to our discovery of genetic causes of heart disease and paving the way toward preventing these conditions in the future.</p>

<p><a href="http://today.gladstone.internal:8888/current/builds/demo/node/57" title="The Nobel at Gladstone"><img alt="Shinya Yamanaka" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/Yamanaka_Nobel_TN.jpg" style="float:left;margin-right:15px;margin-top:4px;" /></a></p>

<p>Over the past several years, much of our work has expanded on the discovery from <a href="http://today.gladstone.internal:8888/current/builds/demo/our-science/people/shinya-yamanaka">Shinya Yamanaka</a>, MD, PhD, a Gladstone Senior Investigator. Dr. Yamanaka’s discovery—how to transform ordinary adult skin cells into stem cells that, like embryonic stem cells, can develop into any cell in the human body—received the Nobel prize and has fundamentally altered the fields of developmental biology and stem cell research.&nbsp; This technology produces induced pluripotent stem cells, or iPS cells, that offer amazing promise for the future of regenerating damaged hearts and modeling disease to discover and test new therapies in the laboratory.&nbsp; For example, we can run drug tests on heart cells created from a patient’s own skin cells—cells that contain a complete set of the genes that caused the disease. In the area of regenerative medicine, Gladstone scientists have already transformed skin cells into beating heart cells in a petri dish, and have also converted non-muscle cells directly into new muscle to repair damage in the hearts of live animals.&nbsp; We are currently working to transform this game-changing research into therapies that help doctors repair hearts damaged by heart attacks and disease.</p>

<p>Importantly, we also train tomorrow’s cardiovascular physicians and researchers. Our faculty are professors at the University of California, San Francisco (UCSF), where they train our curious, passionate, and ambitious graduate students, medical students, and postdoctoral fellows—showing them how to approach complex problems from multiple angles. To learn more about training at Gladstone, please visit the <a href="http://today.gladstone.internal:8888/current/builds/demo/node/56">Training Programs</a> section of our website.</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '9f091c73-fdcc-470a-a19a-a6bade03039c',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Cardiovascular Disease',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/cardiovascular-disease',
        'language' => 'und',
      ),
    ),
    'uuid' => 'f7ce3486-33ff-40fc-87e8-c7a2a7053600',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/5c0ebf28-343a-47d3-b15e-ee59618a88de',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>At Gladstone, we attack the whole spectrum of cardiovascular disease—from congenital heart disease that children are born with to acquired, adult conditions such as congestive heart failure. Our weapons against these illnesses include developmental, chemical, and stem cell biology, as well as genomics. By combining these approaches with studies of obesity, we have created a rich and fertile environment for advancing human health.</p>

<p>Our scientists are unraveling every biological step in the embryonic development of a human heart to learn which genes, RNAs, or proteins we can target to prevent or treat congenital heart disease. We are also working to show how changes in the structure of chromosomes affect heart development, and to determine how immune cells contribute to the build-up of plaque in arteries. We are improving how we reprogram human skin cells into heart cells, and are investigating the most rapidly evolving areas of the human genome to better understand human disease and evolution.</p>

<p>Many areas of our research build on the pioneering stem cell work of Gladstone Senior Investigator <a href="/current/builds/demo/our-science/people/shinya-yamanaka">Shinya Yamanaka, MD, PhD</a>. After completing his postdoctoral training at Gladstone, Dr. Yamanaka discovered an innovative technology that transforms ordinary adult skin cells into stem cells that, like embryonic stem cells, can develop into virtually any cell type in the human body. His discovery of induced pluripotent stem cells, or iPS cells, has since revolutionized the fields of developmental biology and stem-cell research, opening promising new avenues for the future of both personalized and regenerative medicine.</p>

<p>While Dr. Yamanaka achieved his iPS breakthrough by introducing four factors into adult cells, we’re now working on new ways to transform adult cells into stem cells—such as with chemical compounds. Also, rather than using such compounds to reprogram cells all the way back to the pluripotent state, we are also working on more direct ways to transfer one type of cell directly into another. For example, we are reprogramming cardiac fibroblasts—the heart’s connective tissue—<a href="http://today.gladstone.internal:8888/current/builds/demo/about-us/pressroom/press-releases/gladstone-scientists-regenerate-damaged-hearts-transforming-scar">directly into beating cardiac-muscle cells</a>. With these technologies, we are creating heart cells from skin samples of patients with many cardiovascular diseases, such as heart failure, to test the safety and efficacy of new or existing drugs that treat or prevent the condition.</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(
      'und' => array(
        0 => array(
          'tid' => '9f091c73-fdcc-470a-a19a-a6bade03039c',
        ),
      ),
    ),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Areas of Investigation',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/areas-investigation',
        'language' => 'und',
      ),
    ),
    'uuid' => '5c0ebf28-343a-47d3-b15e-ee59618a88de',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/cf21f58d-110b-4916-8dac-9037168a6a6c',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>From a monthly newsletter to scientific papers, Gladstone publishes a constant stream of communications about our groundbreaking discoveries in diseases of the brain, heart, and immune system:</p>

<p><a href="http://today.gladstone.internal:8888/current/builds/demo/about-us/publications" style="text-decoration: none; color: rgb(12, 74, 101);">Gladstone eNews</a><br />
Browse our archive of e-newsletters to learn more about Gladstone’s extraordinary scientists and how they’re shaping the future of human health.</p>

<p><a href="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/Gladstone-Findings-2014.pdf" style="text-decoration: none; color: rgb(12, 74, 101);">Scientific Report</a><br />
Download our biennial Scientific Report for a deep-dive into the latest progress by investigators across Gladstone.</p>

<p><a href="http://today.gladstone.internal:8888/current/builds/demo/our-science/publications" style="text-decoration: none; color: rgb(12, 74, 101);">Scientific Publications</a><br />
Check here for a comprehensive list of all academic papers and publications by Gladstone scientists.</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Publications',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/publications',
        'language' => 'und',
      ),
    ),
    'uuid' => 'cf21f58d-110b-4916-8dac-9037168a6a6c',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/450c71d7-03d1-4ccc-a239-fa5258413a3f',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Administration',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/administration',
        'language' => 'und',
      ),
    ),
    'uuid' => '450c71d7-03d1-4ccc-a239-fa5258413a3f',
  );
  $entities['structure_site_pages'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/323316af-bf95-4303-b60b-c85c61e52578',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'limited_html',
          'summary' => '',
          'value' => '<p>Gladstone researchers are advancing science every day. Below you\'ll discover compelling research news, in-depth features, scientist profiles, and much more. And by <a href="http://lb.benchmarkemail.com//listbuilder/signupnew?9bGwlFuGOREK7yW8HfQ6A3TVLJ38FkWyBw1WHzVrH8T5mj5OqPbK3uMzIjNtMjwz">signing up for our monthly e-newsletter</a> you can have the latest info delivered right to your inbox.</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'field_files' => array(),
    'field_node_refs' => array(),
    'field_operational_units' => array(),
    'field_research_tags' => array(),
    'field_user_refs' => array(),
    'language' => 'und',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'News and Highlights',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'site_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'content/news-and-highlights',
        'language' => 'und',
      ),
    ),
    'uuid' => '323316af-bf95-4303-b60b-c85c61e52578',
  );

  return $entities;
}
