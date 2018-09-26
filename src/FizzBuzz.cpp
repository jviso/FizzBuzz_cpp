#include "FizzBuzz.h"
#include <string>

using namespace std;

string FizzBuzz::convert(int number)
{
    if (number % 3 == 0)
    {
        return "Fizz";
    }
    else if (number % 5 == 0)
    {
        return "Buzz";
    }
    return to_string(number);
}
