api = 2
core = 7.x

;; OS2Web projects:

; OS2Web Modules

projects[os2web_base_panels][type] = "module"
projects[os2web_base_panels][download][type] = "git"
;projects[os2web_base_panels][download][tag] = "1.10"
projects[os2web_base_panels][download][branch] = "master"
projects[os2web_base_panels][download][url] = "https://github.com/OS2web/os2web_base_panels.git"

projects[os2web_taxonomies][type] = "module"
projects[os2web_taxonomies][download][type] = "git"
;projects[os2web_taxonomies][download][tag] = "1.10"
projects[os2web_taxonomies][download][branch] = "master"
projects[os2web_taxonomies][download][url] = "https://github.com/OS2web/os2web_taxonomies.git"


;; Contrib modules below:

; Libraries

; Contrib modules

; Basic

# projects[ctools][subdir] = "contrib"
# projects[ctools][version] = "1.3"

projects[features][subdir] = "contrib"
projects[features][version] = "2.0-beta2"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[panels][subdir] = "contrib"
projects[panels][version] = "3.2"
