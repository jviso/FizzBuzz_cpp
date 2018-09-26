#include "FizzBuzz.h"
#include <string>

using namespace std;

string FizzBuzz::convert(int number)
{
    if (number % 3 == 0)
    {
        return "Fizz";
    }
    return to_string(number);
}
