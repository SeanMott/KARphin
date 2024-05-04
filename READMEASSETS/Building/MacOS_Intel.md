## Building for macOS
Dolphin requires [CMake](http://www.cmake.org/) for systems other than Windows. Many libraries are
bundled with Dolphin and used if they're not installed on your system. CMake
will inform you if a bundled library is used or if you need to install any
missing packages yourself.

### macOS Build Steps:
1. `mkdir build`
2. `cd build`
3. `cmake ..`
4. `make`

An application bundle will be created in `./Binaries`.