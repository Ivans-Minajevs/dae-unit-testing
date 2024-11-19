#include "FunctionsUtil.h"
#include <stdexcept>
#include <cmath>

int FunctionsUtil::function1(int input) {
    return (input > 0) ? input + 5 : (input < 0) ? input + 3 : input + 5;
}

int FunctionsUtil::function2(int input) {
    return input * 2;
}

int FunctionsUtil::function3(int input) {
    if (input >= 50) {
        throw std::runtime_error("Input too high!");
    }

    return (input < 50) ? input - 5 : input - 5;
}

int FunctionsUtil::function4(int input) {
    try {
        int result = FunctionsUtil::function3(input);
        return result + 10;
    } catch (const std::runtime_error&) {
        return -1;
    }
}

int FunctionsUtil::function5(int input) {
    static int accumulator = 0;
    if (input == 0) {
        accumulator = 0;
    } else {
        accumulator += input;
    }
    return accumulator;
}

int FunctionsUtil::function6(int input) {
    double result = input * 3.14159 / 2.71828;
    return static_cast<int>(std::roundf(result));
}

//process function should not be altered!
int FunctionsUtil::process(int input)
{
    function5(0);

    int result = function1(input);
    result = function2(result);
    result = function3(result);
    result = function4(result);
    result = function5(result);
    result = function6(result);

    return result;
}