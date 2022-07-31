/*
Given a matrix, print out the scaled version of the matrix, where you multiply every element in the matrix by the same numeric value.
Elements should be printed by row, with a space separating elements on a row, and a newline character separating rows.

Example:
    int scale = 3;
    int threebythree[3][3] = {{0,1,2},{3,4,5},{6,7,8}};
    print_scaled(threebythree,scale);

This should produce the following output:
    0 3 6
    9 12 15
    18 21 24

Signature: void print_scaled(int array[3][3],int scale)
*/

// Libraries
#include <iostream>

// External functions
extern void print_scaled(int array[3][3],int scale);

// Variables
int scale;

int main(void)
{
    std::cout << "========== Print Scaled Testing ==========" << std::endl;

    std::cout << "\nTest 1 - zero matrix scale 3" << std::endl;
    int matrix_1[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
    };
    scale = 3;
    std::cout << "\tExpected:\n" << "0 0 0\n0 0 0\n0 0 0" << std::endl;
    std::cout << "\tReceived: " << std::endl;
    print_scaled(matrix_1, scale);

    std::cout << "\nTest 2 - identity matrix scale 3" << std::endl;
    int matrix_2[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1},
    };
    scale = 3;
    std::cout << "\tExpected:\n" << "3 0 0\n0 3 0\n0 0 3" << std::endl;
    std::cout << "\tReceived: " << std::endl;
    print_scaled(matrix_2, scale);

    std::cout << "\nTest 3 - identity matrix but with negative numbers scale 3" << std::endl;
    int matrix_3[3][3] = {
        {-1, 0, 0},
        {0, -1, 0},
        {0, 0, -1},
    };
    scale = 3;
    std::cout << "\tExpected:\n" << "-3 0 0\n0 -3 0\n0 0 -3" << std::endl;
    std::cout << "\tReceived: " << std::endl;
    print_scaled(matrix_3, scale);

    std::cout << "\nTest 4 - mixed sign identity matrix scale -7" << std::endl;
    int matrix_4[3][3] = {
        {-1, 0, 0},
        {0, 1, 0},
        {0, 0, 1},
    };
    scale = -7;
    std::cout << "\tExpected:\n" << "7 0 0\n0 -7 0\n0 0 -7" << std::endl;
    std::cout << "\tReceived: " << std::endl;
    print_scaled(matrix_4, scale);

    std::cout << "\nTest 5 - random numbers scale -2" << std::endl;
    int matrix_5[3][3] = {
        {1, -17, 2},
        {9, -16, -29},
        {0, -0, 12},
    };
    scale = -2;
    std::cout << "\tExpected:\n" << "-2 34 -4\n-18 32 58\n0 0 -24" << std::endl;
    std::cout << "\tReceived: " << std::endl;
    print_scaled(matrix_5, scale);

    return 0;
}