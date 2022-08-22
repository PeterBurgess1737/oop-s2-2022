/*
Write a function, secondSmallestSum that when passed an int array of any length greater than 1 will calculate the sum of the elements of every possible sub-array and then return the second smallest sum found.
It is possible for the smallest and second smallest sums to have the same value.

Sub-arrays are contiguous ranges of elements within an array.

For example, if you have an array of length 4, {1,2,3,4}, then the complete set of sub-arrays is:
    {1}, {1,2}, {1,2,3}, {1,2,3,4}, {2}, {2,3}, {2,3,4}, {3}, {3,4}, {4}

The sum of each sub-array is then:
    1, 3, 6, 10, 2, 5, 9, 3, 7, 4

You should start by copying the function-1-1.cpp file and name it function-4-1.cpp.
Then add the function secondSmallestSum to the new file.

The main function for this problem must call your readNumbers function, then pass the new array to your secondSmallestSum function, display the second smallest sum found and finally delete the array.
The main function in the file main-4-1.cpp.

The signature for your new function is:
    int secondSmallestSum(int *numbers,int length);
*/

// Libraries
#include <iostream>

// Variables
int *arr, second_smallest_sum;

// Functions
extern int *readNumbers();
extern int secondSmallestSum(int *numbers,int length);

// MAIN
int main(void)
{
    arr = readNumbers();

    second_smallest_sum = secondSmallestSum(arr, 10);

    std::cout << second_smallest_sum << std::endl;

    delete[] arr;

    return 0;
}