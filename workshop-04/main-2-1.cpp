/*
Write a function, without using function pointers, that performs the operations "+" and "-" on two float operators.
All three (the two operators and the operation) are received as input from the user by your main function.
The add and subtract operations must be performed by calling their own functions.
In your teams, discuss the design of your program and then write it down, compile and run it.

The function signatures are:
    float add_op(float left, float right);
    float subtract_op(float left, float right);
    float arithmetic_ops(float left, float right, std::string op);
*/

// Libraries
#include <iostream>
#include <string>

// Variables
float left, right, result;

// External functions
extern float arithmetic_ops(float left, float right, std::string op);

// MAIN
int main(void)
{
    std::cout << std::endl;
    left = 1.0;
    right = 2.0;
    std::cout << "Performing " << left << " + " << right << std::endl;
    result = arithmetic_ops(left, right, "+");
    std::cout << "Result is " << result << std::endl;

    std::cout << std::endl;
    left = 7.0;
    right = 2.0;
    std::cout << "Performing " << left << " - " << right << std::endl;
    result = arithmetic_ops(left, right, "-");
    std::cout << "Result is " << result << std::endl;

    return 0;
}