/*
Given a binary number represented as an array, write a function that takes the array and its size as a parameter, and returns the integer value.
You may assume that there are at least 1 and no more than 30 numbers in the array and that all the values are either 0 or 1.
The array is ordered with most significant binary digit at the start (index 0) and the least significant digit at the end.

Signature: int binary_to_int(int binary_digits[], int number_of_digits)
*/

// Libraries
#include <iostream>

// Variables
int excected_output;
int received_output;

// External functions
extern int binary_to_int(int binary_digits[], int number_of_digits);

int main(void)
{
    std::cout << "========== Binary to Integer Testing ==========" << std::endl;
    
    std::cout << "\nTest 1 - 00000000 = 0" << std::endl;
    int array_1[8] = {0};
    excected_output = 0;
    received_output = binary_to_int(array_1, 8);
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
    
    std::cout << "\nTest 2 - 00000001 = 1" << std::endl;
    int array_2[8] = {0, 0, 0, 0, 0, 0, 0, 1};
    excected_output = 1;
    received_output = binary_to_int(array_2, 8);
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
    
    std::cout << "\nTest 3 - 00000010 = 2" << std::endl;
    int array_3[8] = {0, 0, 0, 0, 0, 0, 1, 0};
    excected_output = 2;
    received_output = binary_to_int(array_3, 8);
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
    
    std::cout << "\nTest 4 - 01010101 = 85" << std::endl;
    int array_4[8] = {0, 1, 0, 1, 0, 1, 0, 1};
    excected_output = 85;
    received_output = binary_to_int(array_4, 8);
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
    
    std::cout << "\nTest 5 - 11111111 = 255" << std::endl;
    int array_5[8] = {1, 1, 1, 1, 1, 1, 1, 1};
    excected_output = 255;
    received_output = binary_to_int(array_5, 8);
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