cmake_minimum_required(VERSION 3.2)

project(roge)

add_executable(roge 
 roge/main.cpp


 )


FIND_LIBRARY(libtcod_LIBRARIES NAMES libtcod libtcod.lib PATHS "./libs/libtcod-1.24.0-x86_64-msvc")
FIND_PATH(libtcod_INCLUDE_DIRS libtcod.hpp "./include" )

INCLUDE_DIRECTORIES(${libtcod_INCLUDE_DIRS})
TARGET_LINK_LIBRARIES(roge ${libtcod_LIBRARIES})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++latest")

