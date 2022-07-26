/*
Write a function that returns the sum of two arrays as an integer (of equal size).
The function should take as parameters an array, another array and their size.
Hence the result is sum of array 1 + sum of array 2.
The function should return 0 if the size parameter, n, is less than 1.
Try to do this in one for loop.
*/

// Including standard headers
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// External functions
extern int sum_two_arrays(int[], int[], int);

int main(void)
{
    std::cout << "========== Testing ==========" << std::endl;

    std::cout << "Test 1 - two simple arrays" << std::endl;
    int array_1_1[] = {1, 2, 3, 4, 5};
    int array_1_2[] = {6, 7, 8, 9, 10};
    std::cout << "Expected: 55" << std::endl;
    std::cout << "Received: " << sum_two_arrays(array_1_1, array_1_2, 5) << std::endl;

    std::cout << "Test 2 - 2 arrays with negative numbers" << std::endl;
    int array_2_1[] = {-1, -2, -3, -4, -5};
    int array_2_2[] = {-6, -7, -8, -9, -10};
    std::cout << "Expected: -55" << std::endl;
    std::cout << "Received: " << sum_two_arrays(array_2_1, array_2_2, 5) << std::endl;

    std::cout << "Test 3 - arrays with positive and negative numbers" << std::endl;
    int array_3_1[] = {-1, -2, -3, -4, -5};
    int array_3_2[] = {6, 7, 8, 9, 10};
    std::cout << "Expected: 25" << std::endl;
    std::cout << "Received: " << sum_two_arrays(array_3_1, array_3_2, 5) << std::endl;

    std::cout << "Test 4 - negative size parameter" << std::endl;
    int array_4_1[] = {17, 2};
    int array_4_2[] = {18, 3};
    std::cout << "Expected: 0" << std::endl;
    std::cout << "Received: " << sum_two_arrays(array_4_1, array_4_2, -17) << std::endl;

    std::cout << "Test 5 - arrays of zeros" << std::endl;
    int array_5_1[] = {0, 0};
    int array_5_2[] = {0, 0};
    std::cout << "Expected: 0" << std::endl;
    std::cout << "Received: " << sum_two_arrays(array_5_1, array_5_2, 2) << std::endl;

    return 0;
}
