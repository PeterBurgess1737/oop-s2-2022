/*
Write a function that given an array of integers, and its length, determine if the array is a 'fan' array
    i.e. the entire array is a palindrome with the numbers in ascending order from the start to the middle element.
        e.g. {1,2,3,2,1} and {2,4,4,2} are both fan arrays but, {1,2,1,2,1} and {1,3,5,4,2} are not.
The function must return false if the size parameter, n, is less than 1.
*/

// Including standard headers
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// External functions
extern bool is_fanarray(int[], int);

int main(void)
{
    std::cout << "Test 1 - fan array" << std::endl;
    int array_1[] = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};
    std::cout << "Expected: 1" << std::endl;
    std::cout << "Received: " << is_fanarray(array_1, 10) << std::endl;
    
    std::cout << "Test 2 - fan array with negative numbers" << std::endl;
    int array_2[] = {-5, -4, -3, -2, -1, -1, -2, -3, -4, -5};
    std::cout << "Expected: 1" << std::endl;
    std::cout << "Received: " << is_fanarray(array_2, 10) << std::endl;
    
    std::cout << "Test 3 - fan array with positive and negative numbers" << std::endl;
    int array_3[] = {-7, -3, 0, 2, 5, 5, 2, 0, -3, -7};
    std::cout << "Expected: 1" << std::endl;
    std::cout << "Received: " << is_fanarray(array_3, 10) << std::endl;
    
    std::cout << "Test 4 - negative size parameter" << std::endl;
    int array_4[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Expected: 0" << std::endl;
    std::cout << "Received: " << is_fanarray(array_4, -17) << std::endl;
    
    std::cout << "Test 5 - all zeros" << std::endl;
    int array_5[] = {0, 0, 0, 0, 0};
    std::cout << "Expected: 1" << std::endl;
    std::cout << "Received: " << is_fanarray(array_5, 5) << std::endl;
    
    std::cout << "Test 6 - jumbled mess" << std::endl;
    int array_6[] = {1, 7, 9, 2, 5, -1, 2, 4, 76, -2, 1, -122};
    std::cout << "Expected: 0" << std::endl;
    std::cout << "Received: " << is_fanarray(array_6, 12) << std::endl;
    
    return 0;
}
