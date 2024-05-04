# KARphin - A ~~GameCube and Wii~~ Kirby Air Ride Emulator

[Homepage](https://karnetplay.bytesthedust.company/) | [Discord](http://discord.gg/p3rGrcr)

KARphin is an emulator for running ~~GameCube and Wii games~~ Kirby Air Ride on Windows,
Linux, macOS, and recent Android devices. It's licensed under the terms
of the GNU General Public License, version 2 or later (GPLv2+).

<b>We reccomand using [KAR Workshop]() or [KAR Bare Installer]() to download KARphin</b>
<br>
But you are free to download KARphin in the [Releases](https://github.com/SeanMott/KARphin/releases)

## System Requirements
### Desktop
* OS
    * Windows (7 SP1 or higher is officially supported, but Vista SP2 might also work).
    * Linux.
    * macOS (10.10 Yosemite or higher).
    * Unix-like systems other than Linux are not officially supported but might work.
* Processor
    * A CPU with SSE2 support.
    * A modern CPU (3 GHz and Dual Core, not older than 2008) is highly recommended.
* Graphics
    * A reasonably modern graphics card (Direct3D 10.0 / OpenGL 3.0).
    * A graphics card that supports Direct3D 11 / OpenGL 4.4 is recommended.

### Android
* OS
    * Android (5.0 Lollipop or higher).
* Processor
    * An ARM processor with support for 64-bit applications. (An Intel x86 processor could also work in theory, but no known x86 devices support 64-bit applications.)
* Graphics
    * A graphics processor that supports OpenGL ES 3.0 or higher. Performance varies heavily with [driver quality](https://dolphin-emu.org/blog/2013/09/26/dolphin-emulator-and-opengl-drivers-hall-fameshame/).
    * A graphics processor that supports standard desktop OpenGL features is recommended for best performance.

KARphin can only be installed on devices that satisfy the above requirements. Attempting to install on an unsupported device will fail and display an error message.

## Building

All Build instructions have been moved out of the main README to their own build page.
* [Windows]()
* Mac OS
  * [Mac OS (Intel)]()
  * [Mac OS (M1)]()
* [Linux]()
* [Web]()
* [Switch]()
* [Android]()

## Uninstalling

Uninstalling has also been moved to it's own set of folders. This is you didn't download it via [KAR Workshop]() or [KAR Bare Installer]()

## Why are there so many branches?

* R10-Base || Is the code as was yanked from the OG R10 git commit. Untouched besides a port of the Windoes build tools to a later version and NAN replaced with modern std version so it all compiles.

* Bleeding || Is the latest stuff, it's where all the other branches gets merged into. Then it's given a larger test before merging into a main, then into a actual Release Branch.

# Who made this?

 * That would be me, your dashing Slavic README writer and main programmer, Jas. I handle the guts of the software and making all the tweaks and started the project on a whim.

* Jinxy, as a second pair of eyes for hunting down some of the quriks with Dolphin's code. And gave another opion on how I went about tackling the project in some of the features or sub systems of Dolphin.

* Hey Now, my willing test subject and feedback-er person during my rabbles at every hour of the night as I spammed his DMs with KARphin stuff.

* Kinix, our resident admin of the [KAR Discord](http://discord.gg/p3rGrcr) and adament supporter of this insane idea. I still owe ya a beer buddy.

* Support PVP and Taco, my other beta testers.



