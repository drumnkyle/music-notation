file(GLOB SRCS *.c *.h *.hpp *.cpp) #../src/music_notation_api.h)

add_executable(music-notation-demo ${SRCS})

target_link_libraries(music-notation-demo LINK_PUBLIC music-notation)
