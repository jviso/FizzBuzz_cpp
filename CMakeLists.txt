cmake_minimum_required(VERSION 3.10)
project(FizzBuzz)

include_directories(src)

add_subdirectory(googletest)
add_subdirectory(test)

set(CMAKE_CXX_STANDARD 11)

add_library(FizzBuzz test/FizzBuzzShould.cpp src/FizzBuzz.cpp src/FizzBuzz.h)
include_directories("${gtest_SOURCE_DIR}/include")
include_directories("${gmock_SOURCE_DIR}/include")
