/*
Given an array of integers and its length, return the median of the array.
The median of a list is the middle number of the sorted list.
    E.g. the array {3,5,2,1,4} after sorting becomes {1,2,3,4,5} which has a median of 3.
The function must return 0 if the size parameter, n, is even or if it is less than 1.
*/

// Including standard headers
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// External functions
extern int median_array(int[], int);

int main(void)
{
    std::cout << "Test 1 - simple array" << std::endl;
    int array_1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << "Expected: 5" << std::endl;
    std::cout << "Received: " << median_array(array_1, 9) << std::endl;
    
    std::cout << "Test 2 - array with negative numbers" << std::endl;
    int array_2[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9};
    std::cout << "Expected: -5" << std::endl;
    std::cout << "Received: " << median_array(array_2, 9) << std::endl;
    
    std::cout << "Test 3 - array with positive and negative numbers (expected to be 0)" << std::endl;
    int array_3[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    std::cout << "Expected: 0" << std::endl;
    std::cout << "Received: " << median_array(array_3, 11) << std::endl;
    
    std::cout << "Test 4 - negative size parameter" << std::endl;
    int array_4[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Expected: 0" << std::endl;
    std::cout << "Received: " << median_array(array_4, -17) << std::endl;
    
    std::cout << "Test 5 - all zeros" << std::endl;
    int array_5[] = {0, 0, 0, 0, 0};
    std::cout << "Expected: 1" << std::endl;
    std::cout << "Received: " << median_array(array_5, 5) << std::endl;
    
    std::cout << "Test 6 - jumbled mess" << std::endl;
    int array_6[] = {1, 7, 9, 2, 5, -1, 2, 4, 76, -2, -122};
    std::cout << "Expected: 2" << std::endl;
    std::cout << "Received: " << median_array(array_6, 11) << std::endl;
    
    std::cout << "Test 7 - even array length" << std::endl;
    int array_7[] = {1, 2, 3, 4, 5, 6};
    std::cout << "Expected: 0" << std::endl;
    std::cout << "Received: " << median_array(array_7, 6) << std::endl;

    return 0;
}
