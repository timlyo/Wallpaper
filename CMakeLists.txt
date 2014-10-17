cmake_minimum_required(VERSION 2.8.4)
project(Wallpaper)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp
    src/program_scanner.cpp
    src/program_manager.cpp
    src/program_list.cpp)
add_executable(Wallpaper ${SOURCE_FILES})