#include "FizzBuzz.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace testing;

TEST(FizzBuzzShould, Return1For1)
{
    FizzBuzz fizzBuzz;
    ASSERT_EQ("1", fizzBuzz.convert(1));
}


TEST(FizzBuzzShould, Return2For2)
{
    FizzBuzz fizzBuzz;
    ASSERT_EQ("2", fizzBuzz.convert(2));
}

TEST(FizzBuzzShould, ReturnFizzFor3)
{
    FizzBuzz fizzBuzz;
    ASSERT_EQ("Fizz", fizzBuzz.convert(3));
}

TEST(FizzBuzzShould, ReturnBuzzFor5)
{
    FizzBuzz fizzBuzz;
    ASSERT_EQ("Buzz", fizzBuzz.convert(5));
}
