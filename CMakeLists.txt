cmake_minimum_required(VERSION 3.10)

project(Lab_8)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lab_8 main.cpp actions.cpp)

include_directories(${CMAKE_SOURCE_DIR})

add_subdirectory(_tests)
