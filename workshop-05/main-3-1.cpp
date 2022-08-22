/*
Write a function, equalsArray that when passed two int arrays of the same length that is greater than 0 will return true if every number in the first array is equal to the number at the same index in the second array.
If the length of the arrays is less than 1 the function must return false.

For example, comparing the two arrays, {1,2,3,4,5} and {1,2,3,4,5} would return true but the two arrays {3,7} and {3,6} would return false.

You should start by copying the function-1-1.cpp file and name it function-3-1.cpp.
Then add the function equalsArray to the new file.

The main function for this problem must call your readNumbers function twice, then pass both new arrays to your equalsArray function, display the result as true or false and finally delete the array.
The main function in the file main-3-1.cpp.

The signature for your new function is:
    bool equalsArray(int *numbers1,int *numbers2,int length);
*/

// Libraries
#include <iostream>

// Variables
int *arr1, *arr2;
bool is_equal;

// Functions
extern int *readNumbers();
extern bool equalsArray(int *numbers1, int *numbers2, int length);

// MAIN
int main(void)
{
    arr1 = readNumbers();
    arr2 = readNumbers();

    is_equal = equalsArray(arr1, arr2, 10);

    if (is_equal)
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }

    delete[] arr1;
    delete[] arr2;

    return 0;
}