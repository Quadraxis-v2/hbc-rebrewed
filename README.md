# The Homebrew Channel: Rebrewed

This repository contains the public release of the source code for
The Homebrew Channel: Rebrewed. This is a fork of the original Homebrew Channel
by fail0verflow with more stuff.

New features:
* Sorting by app size and author
* vWii: Menu option to reboot to the Wii U Menu
* Display of number of applications
* Restored the bubble minigame scrapped in v1.0.5
* Display size of application
* Reverted title ID to LULZ for compatibility with BootMii
* Show new string for when there is only 1 application installed
* Fixed bugs, warnings and styled code to GNU C23 standard
* Translated to Spanish

## Screenshots
<img width="640" height="480" alt="LULZHB_2025-08-03_17-28-38" src="https://github.com/user-attachments/assets/cf11d785-ddb3-46ac-adcc-15d4f18033f2" />
<img width="640" height="480" alt="LULZHB_2025-08-03_17-31-42" src="https://github.com/user-attachments/assets/041bb8cd-a79b-4ecb-b7ed-0b8fb9d79ed8" />
<img width="640" height="480" alt="LULZHB_2025-08-03_17-32-22" src="https://github.com/user-attachments/assets/6d563667-b9d5-487e-862b-538e4b2b9271" />

## Build instructions

Included portions:

* The Homebrew Channel
* Reload stub
* Banner
* PyWii (includes Alameda for banner creation), ported to Python 3
* WiiPAX (LZMA executable packer)

Not included:

* Installer
* BootMii nor the GUI (CE1LING_CAT)

Note that the code in this repository differs from the source code used to build
the fail0verflow's version of The Homebrew Channel, which includes additional
protection features (i.e. we had to add reverse-DRM to stop scammers from
selling it).

This code is released with no warranty.

You need devkitPPC and libogc installed, and the DEVKITPRO/DEVKITPPC environment
variables correctly set. Use the latest available versions. Make sure you have
libogc/libfat, and also install the following 3rd party libraries:

* zlib
* libpng
* mxml
* freetype
* mad

You can obtain binaries of those with
[devkitPro pacman](https://devkitpro.org/wiki/devkitPro_pacman). Simply use

    sudo (dkp-)pacman -S ppc-zlib ppc-libpng ppc-mxml ppc-freetype ppc-libmad

Additionally, you'll need the following packages on your host machine:

* pycryptodomex (for PyWii)
* libpng headers (libpng-dev)
* gettext
* sox

The build process has only been tested on Linux. You're on your own if you
want to try building this on Windows.

* Note: Some libraries use Python 2. They should be ported to Python 3 soon but for now, have Python 2 installed on your system.

You'll need the Wii common key installed as ~/.wii/common-key.

First run 'make' in wiipax, then 'make' in channel. You'll find a .wad file
that you can install or directly run with Dolphin under
channel/title/channel_retail.wad. You'll also find executable binaries under
channel/channelapp, but be advised that the NAND save file / theme storage
features won't work properly if HBC isn't launched as a channel with its
correct title identity/permissions.

## License

Unless otherwise noted in an individual file header, all source code in this
repository is released under the terms of the GNU General Public License,
version 2 or later. The full text of the license can be found in the COPYING
file.
