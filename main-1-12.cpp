/*
The way memory locations are freed is by using the delete operator.
In this activity, we very briefly cover these.

Simply put, delete can be used in two ways:

    delete pointer;  // -- deletes one memory location
    delete[] pointer;  // -- deletes a number of memory locations

Copy function-1-4.cpp above and modify it to delete arr just before the function returns.
Compile and run it and make sure that it works.
What happens if you try to reference arr (say by printing one of its elements) after it was deleted?

The function signature is:
    int size_of_variable_star_arr();
*/

// Libraries
#include <iostream>

// Variables
int *arr = new int[3];

// Functions
int size_of_variable_star_arr()
{
    return sizeof(arr);
}

// MAIN
int main(void)
{
    std::cout << "Size of variable star arr is " << size_of_variable_star_arr() << std::endl;

    delete[] arr;

    std::cout << "Arr index 2 after deleting is " << arr[2] << std::endl;

    return 0;
}