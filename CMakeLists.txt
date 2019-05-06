cmake_minimum_required(VERSION 3.8 FATAL_ERROR)
project(sample LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
SET(CMAKE_CXX_FLAGS "-Wall -O3 -march=native")

include_directories(include)
link_directories(lib)

add_executable(sample src/samplemain.cpp)
target_link_libraries(sample generated)