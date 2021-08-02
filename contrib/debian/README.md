
Debian
====================
This directory contains files used to package tanzanited/tanzanite-qt
for Debian-based Linux systems. If you compile tanzanited/tanzanite-qt yourself, there are some useful files here.

## tanzanite: URI support ##


tanzanite-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install tanzanite-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your tanzanite-qt binary to `/usr/bin`
and the `../../share/pixmaps/tanzanite128.png` to `/usr/share/pixmaps`

tanzanite-qt.protocol (KDE)

