/**
 * @file
 * Overrides of some functions in media and media_wysiwyg javascript.
 */

(function ($) {

// Sanity check, because javascript errors are bad.
if (typeof Drupal.media === 'undefined' ||
    typeof Drupal.media.formatForm === 'undefined') {
  return;
}

/**
 * This overrides the function of the same name from media/modules/media_wysiwyg/js/media_wysiwyg.format_form.js
 * It provides an implementation of that function that knows how to extract content from CKEditor instances.
 */
Drupal.media.formatForm.getEditorContent = function(fieldKey) {
  if (typeof CKEDITOR !== 'undefined' && CKEDITOR.instances[fieldKey]) {
    return CKEDITOR.instances[fieldKey].getData();
  }
  else {
    // Default case => no CKEditor instance for this field.
    return null;
  }
};

})(jQuery);
