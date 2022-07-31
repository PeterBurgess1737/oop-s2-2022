#include <iostream>

void print_scaled(int array[3][3], int scale)
{
    // Given a matrix, print out the scaled version of the matrix, where you multiply every element in the matrix by the same numeric value
    // printed by row, with a space separating elements on a row, and a newline character separating rows
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << array[i][j] * scale;
            if (j < 3 - 1)
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}