cmake_minimum_required(VERSION 3.10)

include_directories(../googletest/googlemock/include)
include_directories(../googletest/googletest/include)

enable_testing()

set(TEST_SRC
        FizzBuzzShould.cpp)

set(UNIT_UNDER_TEST_SRC
        ../src/FizzBuzz.cpp)

set(TEST_NAME ${PROJECT_NAME}-test)
add_executable(${TEST_NAME}
        ${TEST_SRC}
        ${UNIT_UNDER_TEST_SRC})

set_property(TARGET ${TEST_NAME} PROPERTY CXX_STANDARD 14)
target_link_libraries(${TEST_NAME}
        gmock
        gtest
        gtest_main)

target_compile_features(${TEST_NAME} PUBLIC cxx_override)
add_test(UnitTest ${TEST_NAME})