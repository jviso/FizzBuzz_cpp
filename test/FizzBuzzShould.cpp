#include "FizzBuzz.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace testing;

void blah(int* a) {
    if (a == NULL) {
        int b = *a;
    }
}

void blah2(int& a) {
    a += 1;
}

void useit() {
    int a = 42;
    const int b = 21;
    blah(&a);
    int c = b;
    blah2(c);
}

TEST(FizzBuzzShould, ReturnTrue)
{
    // var fizzBuzz = new FizzBuzz();
//    FizzBuzz *fizzBuzz2;
//    fizzBuzz2 = new FizzBuzz();
//    delete fizzBuzz2;
//    fizzBuzz2 = new FizzBuzz();
//    delete fizzBuzz2;
    FizzBuzz fizzBuzz; // Akin to FizzBuzz fizzBuzz = new FizzBuzz() in C#;
    ASSERT_TRUE(fizzBuzz.convert());
}
