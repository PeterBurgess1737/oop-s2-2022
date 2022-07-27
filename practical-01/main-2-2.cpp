/*
Write a function that returns the maximum element in an integer array.
The function should return 0 if the size parameter, n, is less than 1.
*/

// Including standard headers
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// External functions
extern int max_element(int[], int);

int main(void)
{
    std::cout << "Test 1 - simple array" << std::endl;
    int array_1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Expected: 10" << std::endl;
    std::cout << "Received: " << max_element(array_1, 10) << std::endl;
    
    std::cout << "Test 2 - negative numbers" << std::endl;
    int array_2[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
    std::cout << "Expected: -1" << std::endl;
    std::cout << "Received: " << max_element(array_2, 10) << std::endl;
    
    std::cout << "Test 3 - positive and negative numbers" << std::endl;
    int array_3[] = {1, -5, 3, -2, 5, -7, 7, -2, 9, 10};
    std::cout << "Expected: 10" << std::endl;
    std::cout << "Received: " << max_element(array_3, 10) << std::endl;
    
    std::cout << "Test 4 - negative size parameter" << std::endl;
    int array_4[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Expected: 0" << std::endl;
    std::cout << "Received: " << max_element(array_4, -17) << std::endl;
    
    std::cout << "Test 5 - all zeros" << std::endl;
    int array_5[] = {0, 0, 0, 0, 0};
    std::cout << "Expected: 0" << std::endl;
    std::cout << "Received: " << max_element(array_5, 5) << std::endl;

    return 0;
}
