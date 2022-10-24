/*
Given an array of integers, write a function to calculate the sum of the elements if it is a palindrome array.
If it is not a palindrome array, your function must return -2.
Your function must call separate functions to check whether or not the array is a palindrome and to calculate the sum of its elements.
If the length is 0 or negative each function must return -1 or false as its result.

Signature: int sum_if_palindrome(int integers[], int length)
Signature: bool is_palindrome(int integers[], int length)
Signature: int sum_array_elements(int integers[], int length)

Definition:
    A palindrome is a sequence that reads the same backwards as forwards.
    Hence, 101, 120021 and 1 are all numerical palindromes.
    A palindrome array would be of the form [1,2,2,1] for example.
    An empty array is a palindrome by definition.
*/

// Libraries
#include <iostream>

// External functions
extern int sum_if_palindrome(int integers[], int length);

// Varibles
int excected_output;
int received_output;

int main(void)
{
    std::cout << "========== Sum if Palindrome Testing ==========" << std::endl;
    
    std::cout << "\nTest 1 - zero array" << std::endl;
    int array_1[8] = {0};
    excected_output = 0;
    received_output = sum_if_palindrome(array_1, 8);
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
    
    std::cout << "\nTest 2 - palindrome length 8" << std::endl;
    int array_2[8] = {1, 2, 3, 4, 4, 3, 2, 1};
    excected_output = 20;
    received_output = sum_if_palindrome(array_2, 8);
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
    
    std::cout << "\nTest 3 - palindrome length 7" << std::endl;
    int array_3[7] = {1, 2, 3, 4, 3, 2, 1};
    excected_output = 16;
    received_output = sum_if_palindrome(array_3, 7);
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
    
    std::cout << "\nTest 4 - palindrome with negative numbers" << std::endl;
    int array_4[8] = {-7, -5, -3, -1, -1, -3, -5, -7};
    excected_output = -32;
    received_output = sum_if_palindrome(array_4, 8);
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
    
    std::cout << "\nTest 5 - palindrome with positive and negative numbers" << std::endl;
    int array_5[8] = {-17, 3, 5, 9, 9, 5, 3, -17};
    excected_output = 0;
    received_output = sum_if_palindrome(array_5, 8);
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
    received_output = sum_if_palindrome(array_6, -17);
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
    
    std::cout << "\nTest 7 - not a palindrome" << std::endl;
    int array_7[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    excected_output = -2;
    received_output = sum_if_palindrome(array_7, 8);
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