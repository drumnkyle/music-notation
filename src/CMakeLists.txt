file(GLOB SRCS *.c *.h *.hpp *.cpp)

add_library(music-notation STATIC ${SRCS})

target_include_directories(music-notation PUBLIC music_notation_api.h)
