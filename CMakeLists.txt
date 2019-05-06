cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(sample LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
SET(CMAKE_CXX_FLAGS "-Wall -O3 -march=native")

include_directories(include)
link_directories(lib)

find_package(GTest REQUIRED)

add_executable(sample src/samplemain.cpp)
target_link_libraries(sample generated)

# testing
enable_testing()
add_executable(sampletest test/sampletest.cpp)
target_link_libraries(sampletest generated gtest pthread)
gtest_add_tests(TARGET sampletest
				TEST_SUFFIX .noArgs
                TEST_LIST   noArgsTests)

set_tests_properties(${noArgsTests}   PROPERTIES TIMEOUT 10)
# gtest_add_tests(sampletest test/sampletest)
# gtest_add_tests(sampletest test/sampletest.cpp)