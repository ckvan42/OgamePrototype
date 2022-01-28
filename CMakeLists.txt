cmake_minimum_required(VERSION 3.20)
project(OgamePrototype1)

set(CMAKE_CXX_STANDARD 14)

add_executable(prototype main.cpp Player.cpp Player.h examples/quest.cpp Map.cpp Map.hpp)
add_executable(example examples/quest.cpp)

find_library(NCURSES_LIB ncurses REQUIRED)
target_link_libraries(example PRIVATE ${NCURSES_LIB})
