## Building for Windows
Use the solution file `Source/dolphin-emu.sln` to build Dolphin on Windows.
~~Visual Studio 2015 Update 2 is a hard requirement. Other compilers might be
able to build Dolphin on Windows but have not been tested and are not
recommended to be used. Git and Windows 10 SDK 10.0.10586.0 must be installed.~~
We have updated it use Visual Studio 2019 (build tools V142) and Windows SDK 10.0.177630.

An installer can be created by using the `Installer.nsi` script in the
Installer directory. This will require the Nullsoft Scriptable Install System
(NSIS) to be installed. Creating an installer is not necessary to run Dolphin
since the Binary directory contains a working Dolphin distribution.