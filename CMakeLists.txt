cmake_minimum_required(VERSION 2.8.4)
project(Wallpaper)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
#set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/CMakeModules")


set(SOURCE_FILES src/main.cpp
    src/system/program_scanner.cpp
    src/system/program_manager.cpp
    src/system/program_list.cpp
    src/image/image_generator.cpp
    src/image/writer.cpp)

find_package(ImageMagick COMPONENTS Magick++ REQUIRED)

include_directories(${ImageMagick_INCLUDE_DIRES})

add_executable(Wallpaper ${SOURCE_FILES})
target_link_libraries(Wallpaper ${ImageMagick_LIBRARIES})