
Debian
====================
This directory contains files used to package unitedstatedollarcryptod/unitedstatedollarcrypto-qt
for Debian-based Linux systems. If you compile unitedstatedollarcryptod/unitedstatedollarcrypto-qt yourself, there are some useful files here.

## unitedstatedollarcrypto: URI support ##


unitedstatedollarcrypto-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install unitedstatedollarcrypto-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your unitedstatedollarcryptoqt binary to `/usr/bin`
and the `../../share/pixmaps/unitedstatedollarcrypto128.png` to `/usr/share/pixmaps`

unitedstatedollarcrypto-qt.protocol (KDE)

