/*
Write a function that given an array and its length, returns the weighted average of the array.
    Defined as Σ xi * wi / n, where:
        xi represents all the distinct elements in the array
        wi represents how many times the value of element xi appears in the array
        n is the size of the array
    eg. if  the array is {1,2,1,4,1,3} the weighted average is:
        (1 * 3 / 6) + (2 * 1 / 6) + (1 * 3 / 6)  + (4 * 1 / 6) + (1 * 3 / 6) + (3 * 1 / 6) = 3.0
The function must return 0 if the size parameter, n, is less than 1.
*/

// Including standard headers
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// External functions
extern double weighted_average(int[], int);

int main(void)
{
    std::cout << "Test 1 - array of ones" << std::endl;
    int array_1[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    std::cout << "Expected: 10 (seems wrong to be but is correct according to the formula)" << std::endl;
    std::cout << "Received: " << weighted_average(array_1, 10) << std::endl;

    std::cout << "Test 2 - ascending array" << std::endl;
    int array_2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Expected: 5.5" << std::endl;
    std::cout << "Received: " << weighted_average(array_2, 10) << std::endl;
    
    std::cout << "Test 3 - array with positive and negative numbers (expected to be 0)" << std::endl;
    int array_3[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    std::cout << "Expected: 0" << std::endl;
    std::cout << "Received: " << weighted_average(array_3, 11) << std::endl;
    
    std::cout << "Test 4 - negative size parameter" << std::endl;
    int array_4[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Expected: 0" << std::endl;
    std::cout << "Received: " << weighted_average(array_4, -17) << std::endl;
    
    std::cout << "Test 5 - all zeros" << std::endl;
    int array_5[] = {0, 0, 0, 0, 0};
    std::cout << "Expected: 0" << std::endl;
    std::cout << "Received: " << weighted_average(array_5, 5) << std::endl;
    
    std::cout << "Test 6 - jumbled mess" << std::endl;
    int array_6[] = {1, 7, 9, 2, 5, -1, 2, 4, 76, -2, -122};
    std::cout << "Expected: ~ -1.727 - ehhhh" << std::endl;
    std::cout << "Received: " << weighted_average(array_6, 11) << std::endl;
    
    std::cout << "Test 7 - array in example" << std::endl;
    int array_7[] = {1, 2, 1, 4, 1, 3};
    std::cout << "Expected: 3" << std::endl;
    std::cout << "Received: " << weighted_average(array_7, 6) << std::endl;

    return 0;
}
