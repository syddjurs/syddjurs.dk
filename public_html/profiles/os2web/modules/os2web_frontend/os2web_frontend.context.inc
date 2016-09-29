<?php
/**
 * @file
 * os2web_frontend.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function os2web_frontend_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_frontend_context_biz';
  $context->description = 'Erhverv sider';
  $context->tag = 'OS2Web - Blokke';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'taxonomy/term/10957' => 'taxonomy/term/10957',
      ),
    ),
    'node' => array(
      'values' => array(
        'os2web_base_contentpage' => 'os2web_base_contentpage',
        'os2web_base_gallery' => 'os2web_base_gallery',
        'os2web_base_iframe' => 'os2web_base_iframe',
        'os2web_borger_dk_article' => 'os2web_borger_dk_article',
        'os2web_sections_page' => 'os2web_sections_page',
        'webform' => 'webform',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-4dce1dd077c17fbd9de1c2aaf9a8c1a0' => array(
          'module' => 'views',
          'delta' => '4dce1dd077c17fbd9de1c2aaf9a8c1a0',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Erhverv sider');
  t('OS2Web - Blokke');
  $export['os2web_frontend_context_biz'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_frontend_context_footer';
  $context->description = '';
  $context->tag = 'OS2Web - Generelt';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-os2web_base_panels_mini_footer' => array(
          'module' => 'panels_mini',
          'delta' => 'os2web_base_panels_mini_footer',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'footer_third',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OS2Web - Generelt');
  $export['os2web_frontend_context_footer'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_frontend_context_front';
  $context->description = 'Forside blokke';
  $context->tag = 'OS2Web - Generelt';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'os2web_frontend_frontpage',
    ),
    'theme_html' => array(
      'class' => 'os2web-forside os2web-frontpage',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Forside blokke');
  t('OS2Web - Generelt');
  $export['os2web_frontend_context_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_frontend_context_global';
  $context->description = 'Globale højre blokke';
  $context->tag = 'OS2Web - Blokke';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'os2web_base_contentpage' => 'os2web_base_contentpage',
        'os2web_base_gallery' => 'os2web_base_gallery',
        'os2web_base_iframe' => 'os2web_base_iframe',
        'os2web_base_news' => 'os2web_base_news',
        'os2web_borger_dk_article' => 'os2web_borger_dk_article',
        'os2web_hearings_hearing_case' => 'os2web_hearings_hearing_case',
        'os2web_meetings_meeting' => 'os2web_meetings_meeting',
        'os2web_sections_page' => 'os2web_sections_page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-4d3a9500b766cd615283b4f23ec2f7c1' => array(
          'module' => 'views',
          'delta' => '4d3a9500b766cd615283b4f23ec2f7c1',
          'region' => 'content',
          'weight' => '10',
        ),
        'menu-os2web-menu-top-menu' => array(
          'module' => 'menu',
          'delta' => 'os2web-menu-top-menu',
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-236b5043c40af396053d1693200f7809' => array(
          'module' => 'views',
          'delta' => '236b5043c40af396053d1693200f7809',
          'region' => 'sidebar_second',
          'weight' => '-66',
        ),
        'views-428d591c1dcba42e1f02e4d3e427c502' => array(
          'module' => 'views',
          'delta' => '428d591c1dcba42e1f02e4d3e427c502',
          'region' => 'sidebar_second',
          'weight' => '-65',
        ),
        'menu-os2web-menu-business-shortcuts' => array(
          'module' => 'menu',
          'delta' => 'os2web-menu-business-shortcuts',
          'region' => 'header_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Globale højre blokke');
  t('OS2Web - Blokke');
  $export['os2web_frontend_context_global'] = $context;
    
  
  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_frontend_context_klelinks_global';
  $context->description = 'Globale KLE links blok';
  $context->tag = 'OS2Web - Blokke';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'os2web_base_contentpage' => 'os2web_base_contentpage',
        'os2web_base_gallery' => 'os2web_base_gallery',
        'os2web_base_iframe' => 'os2web_base_iframe',
        'os2web_base_news' => 'os2web_base_news',
        'os2web_hearings_hearing_case' => 'os2web_hearings_hearing_case',
        'os2web_meetings_meeting' => 'os2web_meetings_meeting',
        'os2web_sections_page' => 'os2web_sections_page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-18f59ce05ca3e305f3453541d5330659' => array(
          'module' => 'views',
          'delta' => '18f59ce05ca3e305f3453541d5330659',
          'region' => 'sidebar_second',
          'weight' => '-50',
        ),

      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Globale KLE links blok');
  $export['os2web_frontend_context_klelinks_global'] = $context;
    

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_frontend_context_hide_sec';
  $context->description = 'Skjul højre kolonne på iframesider';
  $context->tag = 'OS2Web - Generelt';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'os2web_meetings_meeting' => 'os2web_meetings_meeting',
        'os2web_sections_page' => 'os2web_sections_page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'node/add/*' => 'node/add/*',
        'node/*/edit' => 'node/*/edit',
        'brugers-indhold' => 'brugers-indhold',
        'meeting*' => 'meeting*',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'os2web_frontend_hide_sec_sidebar',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OS2Web - Generelt');
  t('Skjul højre kolonne på iframesider');
  $export['os2web_frontend_context_hide_sec'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_frontend_context_iframe';
  $context->description = 'Menu på Iframe sider samt møder';
  $context->tag = 'OS2Web - Blokke';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'os2web_base_iframe' => 'os2web_base_iframe',
        'os2web_meetings_meeting' => 'os2web_meetings_meeting',
        'webform' => 'webform',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'os2web_frontend_hide_sec_sidebar',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Menu på Iframe sider samt møder');
  t('OS2Web - Blokke');
  $export['os2web_frontend_context_iframe'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_frontend_context_plans';
  $context->description = 'Planer og fritid sider';
  $context->tag = 'OS2Web - Blokke';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'taxonomy/term/10958' => 'taxonomy/term/10958',
      ),
    ),
    'node' => array(
      'values' => array(
        'os2web_sections_page' => 'os2web_sections_page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-6' => array(
          'module' => 'menu_block',
          'delta' => '6',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('OS2Web - Blokke');
  t('Planer og fritid sider');
  $export['os2web_frontend_context_plans'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_frontend_context_portal';
  $context->description = '';
  $context->tag = 'OS2Web - Blokke';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'borger' => 'borger',
        'erhverv' => 'erhverv',
        'politik' => 'politik',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-7' => array(
          'module' => 'menu_block',
          'delta' => '7',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'os2web_frontend_portal_frontpage',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('OS2Web - Blokke');
  $export['os2web_frontend_context_portal'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_frontend_context_sitewide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-os2web-menu-business-shortcuts' => array(
          'module' => 'menu',
          'delta' => 'os2web-menu-business-shortcuts',
          'region' => 'header_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['os2web_frontend_context_sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_frontend_context_user';
  $context->description = 'Borger sider';
  $context->tag = 'OS2Web - Blokke';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'taxonomy/term/5793' => 'taxonomy/term/5793',
      ),
    ),
    'node' => array(
      'values' => array(
        'os2web_base_contentpage' => 'os2web_base_contentpage',
        'os2web_base_gallery' => 'os2web_base_gallery',
        'os2web_base_iframe' => 'os2web_base_iframe',
        'os2web_sections_page' => 'os2web_sections_page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-32040efe6300ac405354acef7434ca0f' => array(
          'module' => 'views',
          'delta' => '32040efe6300ac405354acef7434ca0f',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'superfish-2' => array(
          'module' => 'superfish',
          'delta' => '2',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Borger sider');
  t('OS2Web - Blokke');
  $export['os2web_frontend_context_user'] = $context;

  return $export;
}
