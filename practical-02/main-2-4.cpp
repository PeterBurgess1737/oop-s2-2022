/*
Given an array of integers, write a function to determine its maximum and minimum elements and then return their sum.
Your function must call separate functions to identify the maximum and minimum elements.
If the length is 0 or negative each function must return -1 as its result.

Signature: int sum_min_max(int integers[], int length)
Signature: int array_min(int integers[], int length)
Signature: int array_max(int integers[], int length)
*/

// Libraries
#include <iostream>

// External functions
extern int sum_min_max(int integers[], int length);

// Variables
int excected_output;
int received_output;

int main(void)
{
    std::cout << "========== Sum Min Max Testing ==========" << std::endl;
    
    std::cout << "\nTest 1 - zero array" << std::endl;
    int array_1[8] = {0};
    excected_output = 0;
    received_output = sum_min_max(array_1, 8);
    if (excected_output == received_output)
    {
        std::cout << "\tPassed" << std::endl;
    }
    else
    {
        std::cout << "Failed" << std::endl;
        std::cout << "\tExpected: " << excected_output << std::endl;
        std::cout << "\tReceived: " << received_output << std::endl;
    }
    
    std::cout << "\nTest 2 - all ones" << std::endl;
    int array_2[8] = {1, 1, 1, 1, 1, 1, 1, 1};
    excected_output = 2;
    received_output = sum_min_max(array_2, 8);
    if (excected_output == received_output)
    {
        std::cout << "\tPassed" << std::endl;
    }
    else
    {
        std::cout << "Failed" << std::endl;
        std::cout << "\tExpected: " << excected_output << std::endl;
        std::cout << "\tReceived: " << received_output << std::endl;
    }
    
    std::cout << "\nTest 3 - ascending from 1 to 8" << std::endl;
    int array_3[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    excected_output = 9;
    received_output = sum_min_max(array_3, 8);
    if (excected_output == received_output)
    {
        std::cout << "\tPassed" << std::endl;
    }
    else
    {
        std::cout << "Failed" << std::endl;
        std::cout << "\tExpected: " << excected_output << std::endl;
        std::cout << "\tReceived: " << received_output << std::endl;
    }
    
    std::cout << "\nTest 4 - negative numbers" << std::endl;
    int array_4[8] = {-1, -2, -3, -4, -5, -6, -7, -8};
    excected_output = -9;
    received_output = sum_min_max(array_4, 8);
    if (excected_output == received_output)
    {
        std::cout << "\tPassed" << std::endl;
    }
    else
    {
        std::cout << "Failed" << std::endl;
        std::cout << "\tExpected: " << excected_output << std::endl;
        std::cout << "\tReceived: " << received_output << std::endl;
    }
    
    std::cout << "\nTest 5 - positive and negative numbers (-1 is expected)" << std::endl;
    int array_5[8] = {-4, -3, -2, -1, 0, 1, 2, 3};
    excected_output = -1;
    received_output = sum_min_max(array_5, 8);
    if (excected_output == received_output)
    {
        std::cout << "\tPassed" << std::endl;
    }
    else
    {
        std::cout << "Failed" << std::endl;
        std::cout << "\tExpected: " << excected_output << std::endl;
        std::cout << "\tReceived: " << received_output << std::endl;
    }
    
    std::cout << "\nTest 6 - negative size parameter" << std::endl;
    int array_6[8] = {0};
    excected_output = -1;
    received_output = sum_min_max(array_6, -17);
    if (excected_output == received_output)
    {
        std::cout << "\tPassed" << std::endl;
    }
    else
    {
        std::cout << "Failed" << std::endl;
        std::cout << "\tExpected: " << excected_output << std::endl;
        std::cout << "\tReceived: " << received_output << std::endl;
    }

    return 0;
}