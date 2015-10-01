<?php
/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega)
 * provides all the basic functionality. However, in case you wish to customize
 * the output that Drupal generates through Alpha & Omega this file is a good
 * place to do so.
 *
 * Alpha comes with a neat solution for keeping this file as clean as possible
 * while the code for your subtheme grows. Please read the README.txt in the
 * /preprocess and /process subfolders for more information on this topic.
 */

/**
 * Implements hook_preproces_html().
 */
function os2web_core_theme_preprocess_html(&$variables) {
  $theme_path = path_to_theme();
  drupal_add_js($theme_path . '/js/script.js');
  drupal_add_js($theme_path . '/js/jquery.phonenumber.js');
  // hf@bellcom.dk: if this is loaded in admin, javascript execution takes too long time when replacing a file, see VXY-462-27673
  if(!( arg(0) == 'node' && arg(2) == 'edit' )){
    drupal_add_js($theme_path . '/js/os2web_menus.js');
  }

  // Add a vegas background from the background node.
/*  if (function_exists('bg_image_get_image_path_from_node')) {
    $bg_nid = db_select('node', 'n')
      ->fields('n', array('nid'))
      ->condition('type', 'os2web_frontend_background_img')
      ->execute()
      ->fetchField();
    if ($bg_nid) {
     // drupal_add_js(path_to_theme() . '/js/jquery.vegas.js');
     /* $bg = 'jQuery( function() {
          jQuery.vegas({
          src:\''. bg_image_get_image_path_from_node($bg_nid) .'\'
          })(\'overlay\', {
          src:\'/profiles/os2web/themes/os2web_core_theme/images/vegas/overlays/13.png\'
          });
      });';
      drupal_add_js($bg, array('type' => 'inline', 'scope' => 'header', 'weight' => 90));
    }
  }*/
}

/**
 * Implements hook_preprocess_page().
 */
function os2web_core_theme_preprocess_page(&$variables) {
  $node = NULL;
  if (isset($variables['node']) && !empty($variables['node']->nid)) {
    $node = $variables['node'];
  }
  // If display children is been set, so get the children nodes..
  if ($node && $display_children = field_get_items('node', $node, 'field_os2web_base_field_children')) {
    if ($node->type == 'os2web_base_contentpage' && $display_children[0]['value'] == 1) {
      $children = syddjurs_special_content_get_children();
      if ($children) {
        $children_render = syddjurs_special_content_render_children($children);
        $variables['page']['content']['content']['content']['system_main']['nodes'][$node->nid]['node_children'] = array(
          'node_children' => array(
            '#markup' => drupal_render($children_render),
          ),
          '#theme_wrappers' => array('container'),
          '#attributes' => array(
            'class' => array('node-children'),
          ),
          '#weight' => 10,
        );
      }
    }
  }
}

/**
 *  Implements hook_menu_link().
 */
function os2web_core_theme_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if (isset($element['#original_link']['depth'])) {
    $element['#attributes']['class'][] = 'depth-' . $element['#original_link']['depth'];
  }

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], array('attributes' => array('title' => $element['#title'])));
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Implemensts hook_breadcrumb().
 *
 * tth@bellcom.dk check if there is a better way to do this...
 */
function os2web_core_theme_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];

  $nid = arg(1);
  if (is_numeric($nid)) {
    $node = node_load($nid);
  }

  if (!empty($breadcrumb)) {
    $output = '<div class="breadcrumb you-are-here">' . t('Du er her:') . '</div>';
    $title = drupal_get_title();
    $breadcrumb[0] = l(t('Forside'), '<front>', array('attributes' => array('title' => 'Forside')));
    $breadcrumb[] = '<a href="#" title="' . $title . '">' . $title . '</a>';
    if ($title == 'Søg') {
      unset($breadcrumb);
      $breadcrumb[0] = l(t('Forside'), '<front>', array('attributes' => array('title' => 'Forside')));
      $breadcrumb[] = '<a href="#" title="Søgning">Søgning</a>';
    }
    if (isset($node) && is_object($node) && $node->type == 'os2web_meetings_meeting') {
      unset($breadcrumb);
      $breadcrumb[0] = l(t('Forside'), '<front>', array('attributes' => array('title' => 'Forside')));
      $breadcrumb[] = l(t('Politik & planer'), 'politik-og-planer', array('attributes' => array('title' => 'Politik og planer')));
      $breadcrumb[] = l(t('Søg i dagsordener og referater'), 'dagsorden-og-referat', array('attributes' => array('title' => 'Søg i dagsordner og referater')));
      $breadcrumb[] = l(t($title), '#');
    }
    $output .= '<div class="breadcrumb">' . implode('<div class="bread-crumb"> &gt; </div> ', $breadcrumb) . '</div>';
    return $output;
  }
}

/**
 * Implements hook_preprocess_region().
 */
function os2web_core_theme_preprocess_region(&$vars) {
  if ($vars['region'] === 'sidebar_first') {
    $dirty = FALSE;
    $ignored_blocks = array(
      'views_sitestuktur-block_1',
      'alpha_debug_sidebar_first',
      'context',
    );
    if (arg(0) === 'search') {
      $dirty = TRUE;
    }
    else {
      foreach ($vars['elements'] as $key => $element) {
        if (!(($key[0] === '#') || (in_array($key, $ignored_blocks)))) {
          $dirty = TRUE;
          break;
        }
      }
    }
    if (!$dirty) {
      $tree = menu_tree(variable_get('os2web_default_menu', 'navigation'));
      $vars['content'] = drupal_render($tree);
    }
  }
}


/**
 * Implements hook_file_field_item().
 */
function os2web_core_theme_filefield_item($file, $field) {
  if (filefield_view_access($field['field_name']) && filefield_file_listed($file, $field)) {
    // Default theming.
    return theme('filefield_file', $file);
  }
  return '';
}

/**
 * Implements hook_form_alter().
 */
function os2web_core_theme_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == "search_block_form") {
    $form['search_block_form']['#attributes']['placeholder'] = "Indsæt søgeord";
  }
}

/**
 * Implements hook_file_link().
 */
function os2web_core_theme_file_link($variables) {
  $file = $variables['file'];
  $icon_directory = $variables['icon_directory'];
  $url = file_create_url($file->uri);
  $icon = theme('file_icon', array('file' => $file, 'icon_directory' => $icon_directory));
  // Set options as per anchor format described at
  // http://microformats.org/wiki/file-format-examples
  $options = array(
    'attributes' => array(
      'type' => $file->filemime . '; length=' . $file->filesize,
    ),
  );
  // Use the description as the link text if available.
  if (empty($file->description)) {
    $link_text = $file->filename;
  }
  else {
    $link_text = $file->description;
    $options['attributes']['title'] = check_plain($file->filename);
  }
  $options['attributes']['target'] = '_blank';

  return '<span class="file">' . $icon . ' ' . l($link_text, $url, $options) . '</span>';
}
