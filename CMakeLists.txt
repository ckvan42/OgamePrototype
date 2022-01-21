cmake_minimum_required(VERSION 3.20)
project(OgamePrototype1)

set(CMAKE_CXX_STANDARD 14)

add_executable(OgamePrototype1 main.cpp Player.cpp Player.h)

find_library(NCURSES_LIB ncurses REQUIRED)
target_link_libraries(OgamePrototype1 PRIVATE ${NCURSES_LIB})
