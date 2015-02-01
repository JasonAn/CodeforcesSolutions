cmake_minimum_required(VERSION 2.8.4)
project(231A)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(231A ${SOURCE_FILES})