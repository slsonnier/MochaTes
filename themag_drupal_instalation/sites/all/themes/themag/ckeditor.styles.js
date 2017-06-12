/**
 * @file
Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license.
*/

/*
 * This file is used/requested by the 'Styles' button.
 * The 'Styles' button is not enabled by default in DrupalFull and DrupalFiltered toolbars.
 */
if (typeof(CKEDITOR) !== 'undefined') {
    CKEDITOR.addStylesSet('drupal',
    [

      // Text Styles
      // ----------------------.
      {
          name: 'Lead text',
          element: 'p',
          attributes: { 'class': 'lead' }
      },


      {
          name: 'Muted Text',
          element: 'span',
          attributes: { 'class': 'text-muted' }
      },

      {
          name: 'Blockquote',
          element: 'blockquote',
          attributes: { 'class': 'blockquote' }
      },

      {
          name: 'Blockq. Reverse',
          element: 'blockquote',
          attributes: { 'class': 'blockquote blockquote-reverse' }
      },


      {
          name: 'Small Text',
          element: 'small'
      },

      {
          name: 'Highlighted Text',
          element: 'mark'
      },


      // Lists
      // ----------------------.
      {
          name: "Unstyled List",
          element: 'ul',
          attributes: { 'class': 'list-unstyled' }
      },


      // Tables
      // ----------------------.
      {
          name: "Table",
          element: 'table',
          attributes: { 'class': 'table' }
      },

      {
          name: "Table Hover",
          element: 'table',
          attributes: { 'class': 'table table-hover' }
      },


      {
          name: "Table Inverse",
          element: 'table',
          attributes: { 'class': 'table table-inverse' }
      },

    ]);
}
