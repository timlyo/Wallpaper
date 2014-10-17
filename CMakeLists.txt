cmake_minimum_required(VERSION 2.8.4)
project(Wallpaper)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp
    program_scanner.cpp
    program_manager.cpp
    program_list.cpp)
add_executable(Wallpaper ${SOURCE_FILES})