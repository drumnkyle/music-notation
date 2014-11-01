cmake_minimum_required(VERSION 2.8)

project(music-notation)

add_subdirectory(src)

project(music-notation-demo)

add_subdirectory(demo)

#add_dependencies(music-notation-demo libmusic-notation.a)
