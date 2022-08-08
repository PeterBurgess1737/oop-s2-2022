/*
In your program, define and initialize a two-dimensional double array.
Define pointers appropriately such that your program prints the values in the array to standard output (similar to 1-1) only using pointers (and looping constructs).

Note: 
    Before accessing an array element, a pointer must be changed to point to the element.
    You may not use the & operator or [] notation.
*/

#include <iostream>

int main(void)
{
    int my_array[2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };

    int *my_array_pointer;
    
    for (int i = 0; i < 2; i++)
    {
        my_array_pointer = my_array[i];

        for (int j = 0; j < 4; j++)
        {
            std::cout << *(my_array_pointer + j);
            if (j != 3)
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}