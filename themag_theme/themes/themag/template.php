<?php
/**
 * @file
 * Template.php.
 */


require_once dirname(__FILE__) . '/includes/common.inc';

// Include files with preprocess functions.
foreach (glob(dirname(__FILE__) .  '/includes/preprocess/*.inc' ) as $filename) {
	require_once dirname(__FILE__) . '/includes/preprocess/' . basename($filename);
}

// Include files with theme functions.
foreach (glob(dirname(__FILE__) .  '/includes/theme/*.inc' ) as $filename) {
	require_once dirname(__FILE__) . '/includes/theme/' . basename($filename);
}
