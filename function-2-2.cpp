#include <string>
#include <math.h>
#include <iostream>

int binary_to_int(int binary_digits[], int number_of_digits)
{
    // given a binary number represented as an array and its size as a parameter, return the integer value
    // assume that there are at least 1 and no more than 30 numbers in the array and that all the values are either 0 or 1
    // the array is ordered with most significant binary digit at the start and the least significant digit at the end
    int integer = 0;
    for (int i = 0; i < number_of_digits; i++)
    {
        if (binary_digits[i])
        {
            integer += pow(2, number_of_digits - i - 1);
        }
    }

    return integer;
}