/*
Write a function that returns the sum of the elements in the even positions in an array.
The function must return 0 if the size parameter, n, is less than 1.
Note, 0 is considered an even position.
*/

// Including standard headers
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// External functions
extern double sum_even(double[], int);

int main(void)
{
    std::cout << "Test 1 - simple array" << std::endl;
    double array_1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << "Expected: 25" << std::endl;
    std::cout << "Received: " << sum_even(array_1, 9) << std::endl;
    
    std::cout << "Test 2 - array with negative numbers" << std::endl;
    double array_2[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9};
    std::cout << "Expected: -25" << std::endl;
    std::cout << "Received: " << sum_even(array_2, 9) << std::endl;
    
    std::cout << "Test 3 - array with positive and negative numbers (expected to be 0)" << std::endl;
    double array_3[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    std::cout << "Expected: 0" << std::endl;
    std::cout << "Received: " << sum_even(array_3, 11) << std::endl;
    
    std::cout << "Test 4 - negative size parameter" << std::endl;
    double array_4[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Expected: 0" << std::endl;
    std::cout << "Received: " << sum_even(array_4, -17) << std::endl;
    
    std::cout << "Test 5 - all zeros" << std::endl;
    double array_5[] = {0, 0, 0, 0, 0};
    std::cout << "Expected: 0" << std::endl;
    std::cout << "Received: " << sum_even(array_5, 5) << std::endl;
    
    return 0;
}
