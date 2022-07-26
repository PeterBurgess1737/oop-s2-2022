/*
Write a function that given an array of integers and its length, will determine if the elements are in descending order or not
That is, each element is less than or equal to the previous element.
The function must return true if in the size parameter is greater than 0 and the elements are in descending order, otherwise it must return false.
*/

// Including standard headers
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// External functions
extern bool is_descending(int[], int);

int main(void)
{
    std::cout << "Test 1 - decending array" << std::endl;
    int array_1[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    std::cout << "Expected: 1" << std::endl;
    std::cout << "Received: " << is_descending(array_1, 10) << std::endl;
    
    std::cout << "Test 2 - descending with negative numbers" << std::endl;
    int array_2[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
    std::cout << "Expected: 1" << std::endl;
    std::cout << "Received: " << is_descending(array_2, 10) << std::endl;
    
    std::cout << "Test 3 - jumbled mess" << std::endl;
    int array_3[] = {1, -5, 3, -2, 5, -7, 7, -2, 9, 10};
    std::cout << "Expected: 0" << std::endl;
    std::cout << "Received: " << is_descending(array_3, 10) << std::endl;
    
    std::cout << "Test 4 - negative size parameter" << std::endl;
    int array_4[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Expected: 0" << std::endl;
    std::cout << "Received: " << is_descending(array_4, -17) << std::endl;
    
    std::cout << "Test 5 - all zeros" << std::endl;
    int array_5[] = {0, 0, 0, 0, 0};
    std::cout << "Expected: 1" << std::endl;
    std::cout << "Received: " << is_descending(array_5, 5) << std::endl;

    return 0;
}
