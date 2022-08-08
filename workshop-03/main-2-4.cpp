/*
This program will look at using pointers to go through a single-dimensional array.
In your program, define and initialize a single-dimensional integer array.
Next, define a pointer that points to the first element in the array.
Using only the pointer (and looping constructs), print the array values from start to finish to standard output.

Note:
    Before accessing an array element, the pointer must be changed to point to the element.
    You may not use the & operator or [] notation.
*/

#include <iostream>

int main(void)
{
    int my_array[] = {1, 2, 3, 4, 5, 6, 7};

    int *my_array_pointer = my_array;

    for (int i = 0; i < 7; i++)
    {
        std::cout << *(my_array_pointer + i);
        if (i != 6)
        {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}