#include <iostream>

void print_summed(int array1[3][3], int array2[3][3])
{
    // Given two two-dimensional arrays, add them together and print the result as in 1-4 above
    // printed by row, with a space separating elements on a row, and a newline character separating rows
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << array1[i][j] + array2[i][j] << " ";
        }
        std::cout << std::endl;
    }
}