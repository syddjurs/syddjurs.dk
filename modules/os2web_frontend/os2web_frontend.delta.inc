<?php
/**
 * @file
 * os2web_frontend.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function os2web_frontend_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'os2web_frontend_content_editing';
  $delta->name = 'Indholdsredigering';
  $delta->description = '';
  $delta->theme = 'os2web_core_theme';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_os2web_core_theme_settings' => array(
      'alpha_libraries' => array(
        'omega_formalize' => 'omega_formalize',
        'omega_mediaqueries' => 0,
        'omega_equalheights' => 0,
      ),
      'alpha_exclude' => array(
        'profiles/os2web/modules/contrib/calendar/css/calendar_multiday.css' => 0,
        'modules/comment/comment.css' => 0,
        'profiles/os2web/modules/contrib/date/date_api/date.css' => 0,
        'profiles/os2web/modules/contrib/date/date_popup/themes/datepicker.1.7.css' => 0,
        'modules/field/theme/field.css' => 0,
        'modules/node/node.css' => 0,
        'modules/search/search.css' => 0,
        'modules/user/user.css' => 0,
        'profiles/os2web/modules/contrib/views/css/views.css' => 0,
        'profiles/os2web/themes/os2web_core_theme/css/grid/os2web_core_theme_default/normal/os2web_core_theme-default-normal-12.css' => 0,
        'misc/vertical-tabs.css' => 0,
        'modules/aggregator/aggregator.css' => 0,
        'modules/block/block.css' => 0,
        'modules/dblog/dblog.css' => 0,
        'modules/file/file.css' => 0,
        'modules/filter/filter.css' => 0,
        'modules/help/help.css' => 0,
        'modules/menu/menu.css' => 0,
        'modules/openid/openid.css' => 0,
        'modules/profile/profile.css' => 0,
        'modules/statistics/statistics.css' => 0,
        'modules/syslog/syslog.css' => 0,
        'modules/system/admin.css' => 0,
        'modules/system/maintenance.css' => 0,
        'modules/system/system.css' => 0,
        'modules/system/system.admin.css' => 0,
        'modules/system/system.base.css' => 0,
        'modules/system/system.maintenance.css' => 0,
        'modules/system/system.menus.css' => 0,
        'modules/system/system.messages.css' => 0,
        'modules/system/system.theme.css' => 0,
        'modules/taxonomy/taxonomy.css' => 0,
        'modules/tracker/tracker.css' => 0,
        'modules/update/update.css' => 0,
      ),
      'alpha_debug_grid_roles' => array(
        2 => '2',
        1 => 0,
        6 => 0,
        4 => 0,
        7 => 0,
        3 => 0,
        5 => 0,
      ),
      'alpha_hidden_site_name' => 0,
      'alpha_region_sidebar_first_force' => 0,
      'alpha_region_sidebar_first_zone' => NULL,
      'alpha_region_sidebar_first_equal_height_element' => FALSE,
      'alpha_region_preface_second_columns' => '4',
      'alpha_region_sidebar_second_zone' => NULL,
      'alpha_region_sidebar_second_css' => 'omega',
      'alpha_region_sidebar_second_equal_height_element' => FALSE,
      'alpha_region_preface_third_columns' => '4',
      'alpha_region_preface_first_css' => '',
      'alpha_zone_content_primary' => NULL,
      'alpha_zone_content_equal_height_container' => 0,
      'alpha_region_content_columns' => '12',
      'alpha_region_content_equal_height_element' => 0,
      'alpha_region_footer_first_css' => '',
    ),
    'color_os2web_core_theme_files' => '',
    'color_os2web_core_theme_logo' => '',
    'color_os2web_core_theme_palette' => '',
    'color_os2web_core_theme_stylesheets' => '',
    'color_os2web_core_theme_screenshot' => '',
  );
  $export['os2web_frontend_content_editing'] = $delta;

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'os2web_frontend_frontpage';
  $delta->name = 'Forside';
  $delta->description = '';
  $delta->theme = 'os2web_core_theme';
  $delta->mode = 'preserve';
  $delta->parent = 'os2web_frontend_standard';
  $delta->settings = array(
    'theme_os2web_core_theme_settings' => array(
      'alpha_libraries' => array(
        'omega_formalize' => 'omega_formalize',
        'omega_mediaqueries' => 0,
        'omega_equalheights' => 0,
      ),
      'alpha_debug_grid_roles' => array(
        2 => '2',
        1 => 0,
        6 => 0,
        4 => 0,
        7 => 0,
        3 => 0,
        5 => 0,
      ),
      'alpha_hidden_site_name' => 0,
      'alpha_region_sidebar_first_force' => 0,
      'alpha_region_sidebar_first_zone' => NULL,
      'alpha_region_sidebar_first_equal_height_element' => FALSE,
      'alpha_region_sidebar_second_zone' => NULL,
      'alpha_region_sidebar_second_equal_height_element' => FALSE,
      'alpha_zone_content_equal_height_container' => 0,
      'alpha_region_content_columns' => '12',
      'alpha_region_content_weight' => '0',
      'alpha_region_content_equal_height_element' => 0,
      'alpha_region_footer_first_equal_height_container' => 1,
    ),
    'color_os2web_core_theme_files' => '',
    'color_os2web_core_theme_logo' => '',
    'color_os2web_core_theme_palette' => '',
    'color_os2web_core_theme_stylesheets' => '',
    'color_os2web_core_theme_screenshot' => '',
  );
  $export['os2web_frontend_frontpage'] = $delta;

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'os2web_frontend_hide_sec_sidebar';
  $delta->name = 'Hide Second Sidebar';
  $delta->description = '';
  $delta->theme = 'os2web_core_theme';
  $delta->mode = 'preserve';
  $delta->parent = 'os2web_frontend_frontpage';
  $delta->settings = array(
    'theme_os2web_core_theme_settings' => array(
      'logo_path' => 'public://syddjurs_logo.jpg',
      'default_favicon' => 0,
      'favicon_path' => 'public://vaabenskjold-ikon.png',
      'alpha_exclude' => array(
        'profiles/os2web/modules/contrib/calendar/css/calendar_multiday.css' => 0,
        'modules/comment/comment.css' => 0,
        'profiles/os2web/modules/contrib/date/date_api/date.css' => 0,
        'profiles/os2web/modules/contrib/date/date_popup/themes/datepicker.1.7.css' => 0,
        'modules/field/theme/field.css' => 0,
        'modules/node/node.css' => 0,
        'modules/search/search.css' => 0,
        'modules/user/user.css' => 0,
        'profiles/os2web/modules/contrib/views/css/views.css' => 0,
        'profiles/os2web/themes/os2web_core_theme/css/grid/os2web_core_theme_default/normal/os2web_core_theme-default-normal-12.css' => 0,
        'misc/vertical-tabs.css' => 0,
        'modules/aggregator/aggregator.css' => 0,
        'modules/block/block.css' => 0,
        'modules/dblog/dblog.css' => 0,
        'modules/file/file.css' => 0,
        'modules/filter/filter.css' => 0,
        'modules/help/help.css' => 0,
        'modules/menu/menu.css' => 0,
        'modules/openid/openid.css' => 0,
        'modules/profile/profile.css' => 0,
        'modules/statistics/statistics.css' => 0,
        'modules/syslog/syslog.css' => 0,
        'modules/system/admin.css' => 0,
        'modules/system/maintenance.css' => 0,
        'modules/system/system.css' => 0,
        'modules/system/system.admin.css' => 0,
        'modules/system/system.base.css' => 0,
        'modules/system/system.maintenance.css' => 0,
        'modules/system/system.menus.css' => 0,
        'modules/system/system.messages.css' => 0,
        'modules/system/system.theme.css' => 0,
        'modules/taxonomy/taxonomy.css' => 0,
        'modules/tracker/tracker.css' => 0,
        'modules/update/update.css' => 0,
      ),
      'alpha_region_header_first_columns' => '4',
      'alpha_region_search_columns' => '4',
      'alpha_zone_content_primary' => NULL,
      'alpha_zone_content_wrapper_css' => 'no-second-sidebar',
      'alpha_region_sidebar_first_zone' => 'content',
      'alpha_region_sidebar_first_equal_height_element' => 0,
      'alpha_region_content_columns' => '9',
      'alpha_region_content_weight' => '2',
      'alpha_region_postscript_first_columns' => '6',
      'alpha_region_postscript_third_columns' => '6',
      'alpha_region_footer_first_css' => '',
      'favicon_mimetype' => 'image/png',
    ),
    'color_os2web_core_theme_files' => '',
    'color_os2web_core_theme_logo' => '',
    'color_os2web_core_theme_palette' => '',
    'color_os2web_core_theme_stylesheets' => '',
    'color_os2web_core_theme_screenshot' => '',
  );
  $export['os2web_frontend_hide_sec_sidebar'] = $delta;

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'os2web_frontend_portal_frontpage';
  $delta->name = 'Portalforside';
  $delta->description = '';
  $delta->theme = 'os2web_core_theme';
  $delta->mode = 'preserve';
  $delta->parent = 'os2web_frontend_frontpage';
  $delta->settings = array(
    'theme_os2web_core_theme_settings' => array(
      'logo_path' => 'public://syddjurs_logo.jpg',
      'default_favicon' => 0,
      'favicon_path' => 'public://vaabenskjold-ikon.png',
      'alpha_exclude' => array(
        'profiles/os2web/modules/contrib/calendar/css/calendar_multiday.css' => 0,
        'modules/comment/comment.css' => 0,
        'profiles/os2web/modules/contrib/date/date_api/date.css' => 0,
        'profiles/os2web/modules/contrib/date/date_popup/themes/datepicker.1.7.css' => 0,
        'modules/field/theme/field.css' => 0,
        'modules/node/node.css' => 0,
        'modules/search/search.css' => 0,
        'modules/user/user.css' => 0,
        'profiles/os2web/modules/contrib/views/css/views.css' => 0,
        'profiles/os2web/themes/os2web_core_theme/css/grid/os2web_core_theme_default/normal/os2web_core_theme-default-normal-12.css' => 0,
        'misc/vertical-tabs.css' => 0,
        'modules/aggregator/aggregator.css' => 0,
        'modules/block/block.css' => 0,
        'modules/dblog/dblog.css' => 0,
        'modules/file/file.css' => 0,
        'modules/filter/filter.css' => 0,
        'modules/help/help.css' => 0,
        'modules/menu/menu.css' => 0,
        'modules/openid/openid.css' => 0,
        'modules/profile/profile.css' => 0,
        'modules/statistics/statistics.css' => 0,
        'modules/syslog/syslog.css' => 0,
        'modules/system/admin.css' => 0,
        'modules/system/maintenance.css' => 0,
        'modules/system/system.css' => 0,
        'modules/system/system.admin.css' => 0,
        'modules/system/system.base.css' => 0,
        'modules/system/system.maintenance.css' => 0,
        'modules/system/system.menus.css' => 0,
        'modules/system/system.messages.css' => 0,
        'modules/system/system.theme.css' => 0,
        'modules/taxonomy/taxonomy.css' => 0,
        'modules/tracker/tracker.css' => 0,
        'modules/update/update.css' => 0,
      ),
      'alpha_region_search_columns' => '4',
      'alpha_zone_content_primary' => NULL,
      'alpha_region_sidebar_first_zone' => 'content',
      'alpha_region_sidebar_first_equal_height_element' => 0,
      'alpha_region_content_columns' => '9',
      'alpha_region_content_weight' => '2',
      'alpha_region_postscript_first_columns' => '6',
      'alpha_region_postscript_third_columns' => '6',
      'alpha_region_footer_first_css' => '',
      'favicon_mimetype' => 'image/png',
    ),
    'color_os2web_core_theme_files' => '',
    'color_os2web_core_theme_logo' => '',
    'color_os2web_core_theme_palette' => '',
    'color_os2web_core_theme_stylesheets' => '',
    'color_os2web_core_theme_screenshot' => '',
  );
  $export['os2web_frontend_portal_frontpage'] = $delta;

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'os2web_frontend_standard';
  $delta->name = 'Standard';
  $delta->description = '';
  $delta->theme = 'os2web_core_theme';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_os2web_core_theme_settings' => array(
      'favicon_path' => 'public://vaabenskjold-ikon.png',
      'favicon_upload' => '',
      'alpha_debug_grid_roles' => array(
        1 => 0,
        2 => 0,
        6 => 0,
        4 => 0,
        7 => 0,
        3 => 0,
        5 => 0,
      ),
      'alpha_region_preface_second_columns' => '4',
      'alpha_region_preface_third_columns' => '4',
      'alpha_region_preface_first_css' => '',
      'alpha_region_sidebar_second_css' => 'omega',
    ),
    'color_os2web_core_theme_files' => NULL,
    'color_os2web_core_theme_logo' => NULL,
    'color_os2web_core_theme_palette' => NULL,
    'color_os2web_core_theme_stylesheets' => NULL,
    'color_os2web_core_theme_screenshot' => NULL,
  );
  $export['os2web_frontend_standard'] = $delta;

  return $export;
}
