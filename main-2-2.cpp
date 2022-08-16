/*
Write a function that given an array of integers, determines the maximum sum of any possible contiguous sub-array.
If all the numbers are negative the result is 0.
If the length of the array is less than one your function should return 0.

Signature:
    int max_sub_sum(int *nums,int length);

For example, for the array:
    { 31, -41, 59, 26, -53, 58, 97, -93, -23, 84 }

The sub-array with the largest sum is:
    { 59, 26, -53, 58, 97 }

The result would be:
    187
*/

// Libraries
#include <iostream>

// Variables
int expected_value, received_value;

// External functions
extern int max_sub_sum(int *nums, int length);

// MAIN
int main(void)
{
    // Test 1 - example test
    int my_nums_1[] = {31, -41, 59, 26, -53, 58, 97, -93, -23, 84};
    expected_value = 187;
    std::cout << "\nExpected Value:\t" << expected_value << std::endl;
    received_value = max_sub_sum(my_nums_1, 10);
    std::cout << "Received Value:\t" << received_value << std::endl;
    if (expected_value == received_value)
    {
        std::cout << "----- Passed -----" << std::endl;
    }
    else
    {
        std::cout << "----- Failed -----" << std::endl;
    }

    // Test 2 - a simple custom test by mwa
    int my_nums_2[] = {1, 2, -3, 4, -5, 6, 7, -8, 9, -10};
    expected_value = 14;
    std::cout << "\nExpected Value:\t" << expected_value << std::endl;
    received_value = max_sub_sum(my_nums_2, 10);
    std::cout << "Received Value:\t" << received_value << std::endl;
    if (expected_value == received_value)
    {
        std::cout << "----- Passed -----" << std::endl;
    }
    else
    {
        std::cout << "----- Failed -----" << std::endl;
    }

    return 0;
}