cmake_minimum_required(VERSION 3.20)
project(OgamePrototype1)

set(CMAKE_CXX_STANDARD 14)

add_executable(prototype main.cpp Player.cpp Player.h)

find_library(NCURSES_LIB ncurses REQUIRED)
target_link_libraries(prototype PRIVATE ${NCURSES_LIB})
