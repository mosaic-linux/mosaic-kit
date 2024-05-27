bad dmenu
=============
simple fork of dmenu with the patches and scripts that i use pre-applied.<br/>
dmenu is an efficient dynamic menu for X.

screenshot
----------
![dmenu-patched](dmenu_screenshot.png?raw=true)

patches
-------
* dmenu-border
* dmenu-caseinsensitive
* dmenu-center
* dmenu-date
* dmenu-listfullwidth
* dmenu-mousesupport
* dmenu-numbers
* dmenu-alpha

scripts
-------
* dmenu_path
* dmenu_run
* dmenu_run_history

installation
------------
clone the repository<br/>
edit config.mk to match your system<br/>
this will mess up all your scripts beginning with `dmenu*` if stored in `bin/dmenu*` as outlined in config.mk<br/>
type `doas make install` to build dmenu, then install<br/>
type `doas make uninstall` to uninstall<br/>
i am not responsible for the deletion of your system

credits
-------
take a look at suckless and their dmenu.<br/>
its very easy to use, and i like the functionality.<br/>
:-)
