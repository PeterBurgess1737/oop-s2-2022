/*
Write a function that returns the average of all elements in an integer array.
The function takes as parameters the array and the number of elements in the array.
Your function should return 0.0 if the size parameter, n, is less than 1.
*/

// Including standard headers
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// External functions
extern double array_mean(int[], int);

int main(void)
{
    std::cout << "========== Testing ==========" << std::endl;

    std::cout << "Test 1 - simple array" << std::endl;
    int array_1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << "\tExpected: 5" << std::endl;
    std::cout << "\tReceived: " << array_mean(array_1, 9) << std::endl;

    std::cout << "Test 2 - array with negative numbers" << std::endl;
    int array_2[] = {-9, -8, -7, -6, -5, -4, -3, -2, -1};
    std::cout << "\tExpected: -5" << std::endl;
    std::cout << "\tReceived: " << array_mean(array_2, 9) << std::endl;

    std::cout << "Test 3 - array with positive and negative numbers" << std::endl;
    int array_3[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4};
    std::cout << "\tExpected: -0.5" << std::endl;
    std::cout << "\tReceived: " << array_mean(array_3, 10) << std::endl;

    std::cout << "Test 4 - negative size parameter" << std::endl;
    int array_4[] = {17, 37};
    std::cout << "\tExpected: 0" << std::endl;
    std::cout << "\tReceived: " << array_mean(array_4, -17) << std::endl;

    std::cout << "Test 5 - array of zeroes" << std::endl;
    int array_5[] = {0, 0, 0, 0, 0};
    std::cout << "\tExpected: 0" << std::endl;
    std::cout << "\tReceived: " << array_mean(array_5, 5) << std::endl;

    return 0;
}