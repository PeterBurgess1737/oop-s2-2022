/*
Write a function that returns the number of elements in an array that are equal to a given parameter.
The function should take as parameters the array, its size, and the desired number.
The function should return 0 if the size parameter, n, is less than 1.
*/

// Including standard headers
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// External functions
extern int num_count(int[], int, int);

int main(void)
{
    std::cout << "========== Testing ==========" << std::endl;

    std::cout << "Test 1 - simple array" << std::endl;
    int array_1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "\tExpected: 1" << std::endl;
    std::cout << "\tReceived: " << num_count(array_1, 10, 5) << std::endl;

    std::cout << "Test 2 - array with negative numbers" << std::endl;
    int array_2[] = {-10, -9, -8, -7, -6, -5, -4, -3, -2, -1};
    std::cout << "\tExpected: 1" << std::endl;
    std::cout << "\tReceived: " << num_count(array_2, 10, -7) << std::endl;

    std::cout << "Test 3 - array with positive and negative numbers" << std::endl;
    int array_3[] = {-5, 7, -4, -2, -1, 0, 1, 3, 2, 4};
    std::cout << "\tExpected: 1" << std::endl;
    std::cout << "\tReceived: " << num_count(array_3, 10, 7) << std::endl;

    std::cout << "Test 4 - negative size parameter" << std::endl;
    int array_4[] = {17, 37};
    std::cout << "\tExpected: 0" << std::endl;
    std::cout << "\tReceived: " << num_count(array_4, -3, 7) << std::endl;

    std::cout << "Test 5 - multiple of one number" << std::endl;
    int array_5[] = {0, 0, 1, 0, 0, 9, 4, 2, 0, 7};
    std::cout << "\tExpected: 5" << std::endl;
    std::cout << "\tReceived: " << num_count(array_5, 10, 0) << std::endl;

    return 0;
}
