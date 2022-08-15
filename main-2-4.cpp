/*
Copy the contents of function-2-3.cpp and also add a new function that performs the operation "*".

This new function's signature is:
    float multiply_op(float left, float right);
*/

// Libraries
#include <iostream>
#include <string>

// Variables
float left, right, result;

// External functions
extern float arithmetic_ops(float left, float right, float (*op)(float,float));
extern float add_op(float left, float right);
extern float subtract_op(float left, float right);
extern float multiply_op(float left, float right);

// MAIN
int main(void)
{
    std::cout << std::endl;
    left = 1.0;
    right = 2.0;
    std::cout << "Performing " << left << " + " << right << std::endl;
    result = arithmetic_ops(left, right, add_op);
    std::cout << "Result is " << result << std::endl;

    std::cout << std::endl;
    left = 7.0;
    right = 2.0;
    std::cout << "Performing " << left << " - " << right << std::endl;
    result = arithmetic_ops(left, right, subtract_op);
    std::cout << "Result is " << result << std::endl;

    std::cout << std::endl;
    left = 17.0;
    right = 3.0;
    std::cout << "Performing " << left << " * " << right << std::endl;
    result = arithmetic_ops(left, right, multiply_op);
    std::cout << "Result is " << result << std::endl;

    return 0;
}