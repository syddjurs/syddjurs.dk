<?php

/**
 * Retrieve values for tokens
 */
function _linkchecker_mail_get_token_values($extern_email = FALSE, $receiver, $node_links_list){
  // Empty variables.
  $array = array();

  if (!$extern_email) {

    if (is_numeric($receiver)) {
      $user = user_load($receiver);
      $array = array(
        '!name' => $user->name,
        '!node_links_list' => $node_links_list,
        '!site_name' => variable_get('site_name'),
      );
    }
  }
  else {
    $array = array(
      '!name' => $receiver,
      '!node_links_list' => $node_links_list,
      '!site_name' => variable_get('site_name'),
    );
  }

  return $array;
}

/**
 * Info about replacement tokens.
 */
function _linkchecker_mail_get_info_params($node) {
  return "<p><b>Replacement Tokens for use in the content area:</b></p>
          <ul>
          <li><em>!name</em> will be replaced with receiver's name or email address for external email.</li>
          <li><em>!node_links_list</em> will be replaced with a list of node with broken links.</li>
          <li><em>!site_name</em> will be replaced with the site name.</li>
          </ul>
  ";
}
/*
 * Retrieve nodes with links from linkchecker report.
 * @return html text (ul,li)
 */
function _linkchecker_mail_get_html_table($author = NULL) {
  $html_list = '';
  $links = array();
  // Get nodes with broken links by receiver.
  if (isset($author)) {
    $html_list .= '<table width = "766" id="main-table" style="border-collapse: collapse; border: 1px solid gray;"><tbody>';
    $header = '<tr style="border: 1px solid gray;"><th style="border: 1px solid gray;">Node</th><th style="border: 1px solid gray;">URL </th></tr>';
    $html_list .= $header;
    foreach ($author as $key => $value) {
      // Exclude the mail elements in array.
      if ($key == 'mail') {
        continue;
      }

      // Get broken links by nid.
      $links = _linkchecker_mail_get_links_by_nid($key);
      if (count($links) == 0) {
        return FALSE;
      }

      $html_list .= _linkchecker_mail_html_get_table_row($key, $links, FALSE);
    }
    $html_list .= '</tbody></table>';

  }
  // Get all nodes with broken links, limited to 50, then add linkchecker report link to html list.
  else {
    $query = _linkchecker_mail_get_linkchecker_query();
    $links = $query
             ->limit(52)
             ->execute();

    $links= $links->fetchAll();
    if (count($links) == 0) {
      return FALSE;
    }
    if (count($links) >= 50) {
      $html_list .= '<div style="font-weight: bold">' . t('See full list here -> ') . $GLOBALS['base_url'] . '/admin/reports/linkchecker </div><br/><br/>';
    }

    $html_list .= '<table width = "766" id="main-table" style="border-collapse: collapse; border: 1px solid gray;"><tbody>';
    $header = '<tr style="border: 1px solid gray;"><th style="border: 1px solid gray;">URL</th><th style="border: 1px solid gray;">Code</th><th style="border: 1px solid gray;">Error</th><th style="border: 1px solid gray;">Node </th></tr>';
    $html_list .= $header;

    $html_list .= _linkchecker_mail_html_get_table_row(NULL, $links, TRUE);
    $html_list .= '</tbody></table>';
  }
  return $html_list;
}

function _linkchecker_mail_html_get_table_row($nid = NULL, $links, $full_list = FALSE) {
  if (isset($nid) && !$full_list) {
    $html = '<tr style="border: 1px solid gray;">';
    $node = node_load($nid);
    $html .= '<td style="border: 1px solid gray;">' . '<a href="' . $GLOBALS['base_url'] . '/node/' . $nid . '">' . $node->title . '</td>';
    $html .= '<td width="400" style="border: 1px solid gray; word-break: break-all;"><ul>';
    foreach ($links as $link) {
      $html .= '<li>' . $link->url . ' - ( ' . $link->code . ' - ' . $link->error . ' )</li>';
    }
    $html .= '</ul></td></tr>';
  }
  else {
    $html = '';
    foreach ($links as $key => $link) {
      if ($key > 50) {
        break;
      }

      $nids = _linkchecker_link_node_ids($link);
      $html .= '<tr style="border: 1px solid gray;"><td width="400" style="border: 1px solid gray; word-break: break-all;">' . $link->url . '</td>';
      $html .= '<td style="border: 1px solid gray;">' . $link->code . '</td>';
      $html .= '<td style="border: 1px solid gray;">' . $link->error . '</td>';
      $html .= '<td style="border: 1px solid gray;"><ul>';
      foreach ($nids as $nid) {
        $node = node_load($nid);
        $html .= '<li>' . '<a href="' . $GLOBALS['base_url'] . '/node/' . $nid . '">' . $node->title . '</li>';
      }
      $html .= '</ul></td></tr>';
      $count += 1;
    }
  }

  return $html;
}
/*
 * Retrieve users by roles
 * @return array(uid => email)
 */
function _linkchecker_mail_get_users_by_roles($linkchecker_mail_roles) {
  $users = array();
  foreach ($linkchecker_mail_roles as $rid => $rolename) {
    $uids = db_select('users_roles', 'ur')
            ->fields('ur', array('uid'))
            ->condition('ur.rid', $rid, '=')
            ->execute()
            ->fetchCol();
    $users_entity = user_load_multiple($uids);
  }
  foreach ($users_entity as $key => $user) {
    $users[$user->uid] = $user->mail;
  }
  return $users;
}
/*
 * Retrieve node ids from linkchecker_link combined with linkchecker_node table.
 */
function _linkchecker_mail_get_broken_link_node_ids() {
  $node_ids = array();

  $query = _linkchecker_mail_get_linkchecker_query();

  $result = $query
            ->limit(52)
            ->execute();

  foreach ($result as $link) {
    $nids = _linkchecker_link_node_ids($link);
    foreach ($nids as $nid) {
      $node_ids[$nid] = $nid;
    }
  }
  return $node_ids;
}
/*
 * Retrieve links by nid.
 */
function _linkchecker_mail_get_links_by_nid($nid) {
  $ignore_response_codes = preg_split('/(\r\n?|\n)/', variable_get('linkchecker_ignore_response_codes', "200\n206\n302\n304\n401\n403"));

  $subquery1 = db_select('linkchecker_node', 'ln')
               ->fields('ln', array('lid'))
               ->condition('ln.nid', $nid, '=');
  $query = db_select('linkchecker_link', 'll')->extend('PagerDefault')->extend('TableSort');
  $query->innerJoin($subquery1, 'q2', 'q2.lid = ll.lid');
  $query->fields('ll');
  $query->condition('ll.last_checked', 0, '>');
  $query->condition('ll.status', 1, '=');
  $query->condition('ll.code', $ignore_response_codes, 'NOT IN');
  $results = $query
             ->execute()
             ->fetchAll();

  return $results;

}
function _linkchecker_mail_get_linkchecker_query() {
  // Code form function linkchecker_admin_report_page to build query in linkchecker.page.inc
  $ignore_response_codes = preg_split('/(\r\n?|\n)/', variable_get('linkchecker_ignore_response_codes', "200\n206\n302\n304\n401\n403"));

  // Search for broken links in nodes and comments and blocks of all users.
  $subquery4 = db_select('linkchecker_node', 'ln')
    ->distinct()
    ->fields('ln', array('lid'));

  $subquery3 = db_select('linkchecker_comment', 'lc')
    ->distinct()
    ->fields('lc', array('lid'));

  $subquery2 = db_select('linkchecker_block_custom', 'lb')
    ->distinct()
    ->fields('lb', array('lid'));

  // UNION all linkchecker type tables.
  $subquery1 = db_select($subquery2->union($subquery3)->union($subquery4), 'q1')->fields('q1', array('lid'));

  // Build pager query.
  $query = db_select('linkchecker_link', 'll')->extend('PagerDefault')->extend('TableSort');
  $query->innerJoin($subquery1, 'q2', 'q2.lid = ll.lid');
  $query->fields('ll');
  $query->condition('ll.last_checked', 0, '>');
  $query->condition('ll.status', 1, '=');
  $query->condition('ll.code', $ignore_response_codes, 'NOT IN');
  return $query;
}
/*
 * Retreve users by node id
 * @return array(uid => email)
 */
function _linkchecker_mail_get_users_by_nodes($node_ids) {
  $users = array();
  foreach ($node_ids as $nid) {
    $node = node_load($nid);
    $nids = array();
    $user = user_load($node->uid);
    $users[$user->uid]['mail'] = $user->mail;
    $users[$user->uid][$nid] = $nid;
  }
  return $users;
}

function _linkchecker_mail_watch_dog($result, $to) {
  if ($result['result'] == TRUE) {
    $msg = t('Link checker mail is sent to email=%email');
    watchdog(
      'Link checker mail', $msg, $variables = array(
        '%email' => $to
      )
    );
    variable_set('linkchecker_mail_last_sent', REQUEST_TIME);
  }
  else {
    $msg = t('Error : Link checker mail is NOT sent to email=%email');
    watchdog(
      'Link checker mail', $msg, $variables = array(
        '%email' => $to
      )
    );
  }
}
