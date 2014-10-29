cmake_minimum_required(VERSION 2.8.4)
project(Wallpaper)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/CMakeModules")

set(SOURCE_FILES src/main.cpp
    src/system/program_list.cpp
    src/system/program_manager.cpp
    src/system/program_scanner.cpp
    src/image/image.cpp
    src/image/writer.cpp
    src/util/noise.cpp
    src/util/types.cpp
    src/util/user.cpp
    )

find_package(ImageMagick COMPONENTS Magick++ REQUIRED)
find_package(noise)

include_directories(${ImageMagick_Magick++_INCLUDE_DIR})
include_directories(${NOISE_INCLUDE_DIR})

add_executable(Wallpaper ${SOURCE_FILES})
target_link_libraries(Wallpaper ${ImageMagick_LIBRARIES})
target_link_libraries(Wallpaper ${NOISE_LIBRARY})