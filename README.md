Music Notation (WIP)
==============

This is a **work in progress**, Cross-Platform Music Notation API written in C++. It is written so that it can be used in most any operating system, such as iOS, OS X, Android, Windows, and Linux.

===
This library is meant to provide an easy-to-use API for creating tablature or staff music to be displayed or played in an application. The library is not meant to deal with any UI or Audio, so that it may be used with any other UI or Audio frameworks.

C++ is the chosen language so that it can be compiled for apps on a multitude of platforms and used with any different frameworks.

There is also a plan to create an easy to use input file format to create the music instead of having to create the objects in code as it stands right now. Hopefully a file format can be developed that will be able to make it so simple that a musician who is not necessarily tech savy, would be able to create sheet music or tablature.

===
**Building**
This project uses CMake to support cross-platform development.
1. Go to www.cmake.org to download or on a Mac use Homebrew (http://brew.sh)

    brew install cmake

2. You should make a build directory in the top level directory.
3. Change directories into that build directory.
4. run cmake in that directory and optionally provide -G with the generator you would like (for the IDE of your choice). Use cmake -h for information on the different generators

    cmake -G Xcode ../

5. You can find the project file for your IDE that you can open for the demo project in that same build directory.

    open music-notation-demo.xcodeproj
