/*
Given a matrix of integers with 10 rows and 10 columns, write a function and program to determine if the matrix is an identity matrix or not.
Return a 1 if it is an identity matrix and a 0 if not.
(Definition: An identity matrix is one with 1's down the main diagonal and 0's elsewhere)

Signature: int is_identity(int array[10][10])
*/

// Libraries
#include <iostream>

// External functions
extern int is_identity(int array[10][10]);

// Variables
int excected_output;
int received_output;

int main(void)
{
    std::cout << "========== Is Identity Testing ==========" << std::endl;

    std::cout << "\nTest 1 - zero matrix" << std::endl;
    int matrix_1[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    };
    excected_output = 0;
    received_output = is_identity(matrix_1);
    if (excected_output == received_output)
    {
        std::cout << "\tPassed" << std::endl;
    }
    else
    {
        std::cout << "Failed" << std::endl;
        std::cout << "\tExpected: " << excected_output << std::endl;
        std::cout << "\tReceived: " << received_output << std::endl;
    }

    std::cout << "\nTest 2 - identity matrix" << std::endl;
    int matrix_2[10][10] = {
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    };
    excected_output = 1;
    received_output = is_identity(matrix_2);
    if (excected_output == received_output)
    {
        std::cout << "\tPassed" << std::endl;
    }
    else
    {
        std::cout << "Failed" << std::endl;
        std::cout << "\tExpected: " << excected_output << std::endl;
        std::cout << "\tReceived: " << received_output << std::endl;
    }

    std::cout << "\nTest 3 - identity matrix but with negative numbers" << std::endl;
    int matrix_3[10][10] = {
        {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, -1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, -1, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, -1, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, -1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, -1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, -1, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, -1, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, -1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, -1},
    };
    excected_output = 0;
    received_output = is_identity(matrix_3);
    if (excected_output == received_output)
    {
        std::cout << "\tPassed" << std::endl;
    }
    else
    {
        std::cout << "Failed" << std::endl;
        std::cout << "\tExpected: " << excected_output << std::endl;
        std::cout << "\tReceived: " << received_output << std::endl;
    }

    std::cout << "\nTest 4 - mixed sign identity matrix" << std::endl;
    int matrix_4[10][10] = {
        {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, -1, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, -1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, -1, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, -1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    };
    excected_output = 0;
    received_output = is_identity(matrix_4);
    if (excected_output == received_output)
    {
        std::cout << "\tPassed" << std::endl;
    }
    else
    {
        std::cout << "Failed" << std::endl;
        std::cout << "\tExpected: " << excected_output << std::endl;
        std::cout << "\tReceived: " << received_output << std::endl;
    }

    std::cout << "\nTest 5 - random numbers" << std::endl;
    int matrix_5[10][10] = { // I know this isnt random, but man I couldn't be bothered making a random 10x10 matrix, so this is good enough
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {2, 3, 4, 5, 6, 7, 8, 9, 10, 1},
        {3, 4, 5, 6, 7, 8, 9, 10, 1, 2},
        {4, 5, 6, 7, 8, 9, 10, 1, 2, 3},
        {5, 6, 7, 8, 9, 10, 1, 2, 3, 4},
        {6, 7, 8, 9, 10, 1, 2, 3, 4, 5},
        {7, 8, 9, 10, 1, 2, 3, 4, 5, 6},
        {8, 9, 10, 1, 2, 3, 4, 5, 6, 7},
        {9, 10, 1, 2, 3, 4, 5, 6, 7, 8},
        {10, 1, 2, 3, 4, 5, 6, 7, 8, 9},
    };
    excected_output = 0;
    received_output = is_identity(matrix_5);
    if (excected_output == received_output)
    {
        std::cout << "\tPassed" << std::endl;
    }
    else
    {
        std::cout << "Failed" << std::endl;
        std::cout << "\tExpected: " << excected_output << std::endl;
        std::cout << "\tReceived: " << received_output << std::endl;
    }

    return 0;
}