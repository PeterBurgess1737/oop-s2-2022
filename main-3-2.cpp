/*
Write a function, reverseArray that when passed an int array of length greater than 0 will return a dynamically allocated array of the same length but with the elements in the reverse order.

For example, if passed the array, {1,2,3,4,5,6,7,8,9,0} the function would return the array {0,9,8,7,6,5,4,3,2,1}.

You should start by copying the function-3-1.cpp file and name it function-3-2.cpp.
Then add the function reverseArray to the new file.

The main function for this problem must call your readNumbers function, then pass the new array to your reverseArray function, then pass the first array and the array returned by reverseArray to equalsArray, display the result as true or false and finally delete both arrays.
The main function in the file main-3-2.cpp.

The signature for your new function is:
    int *reverseArray(int *numbers1,int length);
*/

// Libraries
#include <iostream>

// Variables
int *arr, *reversed_arr;
bool is_equal;

// Functions
extern int *readNumbers();
extern bool equalsArray(int *numbers1, int *numbers2, int length);
extern int *reverseArray(int *numbers1, int length);

// MAIN
int main(void)
{
    arr = readNumbers();

    reversed_arr = reverseArray(arr, 10);

    is_equal = equalsArray(arr, reversed_arr, 10);

    if (is_equal)
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }

    delete[] arr;
    delete[] reversed_arr;

    return 0;
}