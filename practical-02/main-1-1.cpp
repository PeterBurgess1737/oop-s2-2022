/*
Given a matrix of integers, return the sum of the elements along the main diagonal (top left bottom right)
Signature: int sum_diagonal(int array[4][4])
*/

// Libraries
#include <iostream>

// External functions
extern int sum_diagonal(int array[4][4]);

// Variables
int excected_output;
int received_output;

int main(void)
{
    std::cout << "========== Sum Diagonal Testing ==========" << std::endl;

    std::cout << "\nTest 1 - zero matrix" << std::endl;
    int matrix_1[4][4] = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
    };
    excected_output = 0;
    received_output = sum_diagonal(matrix_1);
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
    int matrix_2[4][4] = {
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1},
    };
    excected_output = 4;
    received_output = sum_diagonal(matrix_2);
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
    int matrix_3[4][4] = {
        {-1, 0, 0, 0},
        {0, -1, 0, 0},
        {0, 0, -1, 0},
        {0, 0, 0, -1},
    };
    excected_output = -4;
    received_output = sum_diagonal(matrix_3);
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
    int matrix_4[4][4] = {
        {-1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1},
    };
    excected_output = 2;
    received_output = sum_diagonal(matrix_4);
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
    int matrix_5[4][4] = {
        {1, -17, 2, -37},
        {9, -16, -29, 0},
        {0, -0, 12, -13},
        {-17, -27, 3, 9},
    };
    excected_output = 6;
    received_output = sum_diagonal(matrix_5);
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