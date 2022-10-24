#include <iostream>

int *create_integers(int num_vals, int start)
{
    /*
    Takes in two numbers:
            num_vals and start
    Allocates a new array of ints that is num_vals long.
    This function should initialise each element starting with the value in start, increasing by one each time.
    Hence a call:
        a = create_integers(5, 2)
    Should store the values [2, 3, 4, 5, 6] in the array a.
    */

    int *arr = new int[num_vals];
    for (int i = 0; i < num_vals; i++)
    {
        arr[i] = start + i;
    }

    return arr;
}

void array_display(int *vals, int num_vals)
{
    /*
    Should display the contents of the array on a single line, separated by spaces with a newline afterwards.
    You are allowed to have a space between the last element and the newline.
    */

    for (int i = 0; i < num_vals; i++)
    {
        std::cout << vals[i] << " ";
    }
    std::cout << std::endl;
}