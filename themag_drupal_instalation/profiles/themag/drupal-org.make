; themag make file for d.o. usage
core = "7.x"
api = "2"

projects[drupal][version] = "7.x"

; +++++ Modules +++++

projects[admin_menu][version] = "3.0-rc5"
projects[admin_menu][subdir] = "contrib"

projects[module_filter][version] = "2.0"
projects[module_filter][subdir] = "contrib"

projects[ctools][version] = "1.12"
projects[ctools][subdir] = "contrib"

projects[features][version] = "2.10"
projects[features][subdir] = "contrib"

projects[color_field][version] = "1.8"
projects[color_field][subdir] = "contrib"

projects[fences][version] = "1.2"
projects[fences][subdir] = "contrib"

projects[field_group][version] = "1.5"
projects[field_group][subdir] = "contrib"

projects[multiupload_filefield_widget][version] = "1.13"
projects[multiupload_filefield_widget][subdir] = "contrib"

projects[multiupload_imagefield_widget][version] = "1.3"
projects[multiupload_imagefield_widget][subdir] = "contrib"

projects[video_embed_field][version] = "2.0-beta11"
projects[video_embed_field][subdir] = "contrib"

projects[backup_migrate][version] = "3.1"
projects[backup_migrate][subdir] = "contrib"

projects[entity][version] = "1.8"
projects[entity][subdir] = "contrib"

projects[entity_view_mode][version] = "1.0-rc1"
projects[entity_view_mode][subdir] = "contrib"

projects[libraries][version] = "2.3"
projects[libraries][subdir] = "contrib"

projects[quicktabs][version] = "3.6"
projects[quicktabs][subdir] = "contrib"

projects[special_menu_items][version] = "2.0"
projects[special_menu_items][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[token][version] = "1.6"
projects[token][subdir] = "contrib"

projects[transliteration][version] = "3.2"
projects[transliteration][subdir] = "contrib"

projects[owlcarousel][version] = "1.6"
projects[owlcarousel][subdir] = "contrib"

projects[panels][version] = "3.8"
projects[panels][subdir] = "contrib"

projects[paragraphs][version] = "1.x-dev"
projects[paragraphs][subdir] = "contrib"

projects[paragraphs_id][version] = "1.0-alpha2"
projects[paragraphs_id][subdir] = "contrib"

projects[rrssb][version] = "1.0"
projects[rrssb][subdir] = "contrib"

projects[ckeditor][version] = "1.17"
projects[ckeditor][subdir] = "contrib"

projects[jquery_update][version] = "3.0-alpha3"
projects[jquery_update][subdir] = "contrib"

projects[superfish][version] = "2.0"
projects[superfish][subdir] = "contrib"

projects[variable][version] = "2.5"
projects[variable][subdir] = "contrib"

projects[views][version] = "3.14"
projects[views][subdir] = "contrib"

projects[views_load_more][version] = "1.5"
projects[views_load_more][subdir] = "contrib"

; +++++ Libraries +++++

; jQuery Superfish
libraries[superfish][directory_name] = "superfish"
libraries[superfish][type] = "library"
libraries[superfish][destination] = "libraries"
libraries[superfish][download][type] = "get"
libraries[superfish][download][url] = "https://github.com/mehrpadin/Superfish-for-Drupal/archive/master.zip"

; bgrins-spectrum
libraries[bgrins-spectrum][directory_name] = "bgrins-spectrum"
libraries[bgrins-spectrum][type] = "library"
libraries[bgrins-spectrum][destination] = "libraries"
libraries[bgrins-spectrum][download][type] = "get"
libraries[bgrins-spectrum][download][url] = "https://github.com/bgrins/spectrum/archive/master.zip"

; owl-carousel
libraries[owl-carousel][directory_name] = "owl-carousel"
libraries[owl-carousel][type] = "library"
libraries[owl-carousel][destination] = "libraries"
libraries[owl-carousel][download][type] = "get"
libraries[owl-carousel][download][url] = "https://github.com/OwlCarousel2/OwlCarousel2/archive/develop.zip"

; rrssb
libraries[rrssb][directory_name] = "rrssb"
libraries[rrssb][type] = "library"
libraries[rrssb][destination] = "libraries"
libraries[rrssb][download][type] = "get"
libraries[rrssb][download][url] = "https://github.com/kni-labs/rrssb/archive/master.zip"

; +++++ Patches +++++

projects[paragraphs][patch][] = "https://www.drupal.org/files/issues/paragraphs-fix_parents_access-2562463-20-7.x.patch"
projects[field_group][patch][] = "https://www.drupal.org/files/issues/php7_uniform_variable-2649648-5.patch"
projects[backup_migrate][patch][] = "https://www.drupal.org/files/issues/backup_migrate-fix_constructor_for_future_version_php-2623598-5-7.x.patch"
