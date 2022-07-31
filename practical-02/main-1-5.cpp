/*
Given two two-dimensional arrays, add them together and print the result as in 1-4 above.
What relationship needs to be between the sizes of the two matrices?

Example:
    int matrix1[3][3] = {{0,1,2},{3,4,5},{6,7,8}} ;
    int matrix2[3][3] = {{0,0,0},{2,2,2},{-5,-4,8}} ;
    print_summed(matrix1,matrix2) ;

This should produce the following output:
    0 1 2
    5 6 7
    1 3 16

Signature: void print_summed(int array1[3][3],int array2[3][3])
*/

// Libraries
#include <iostream>

// External functions
extern void print_summed(int array1[3][3],int array2[3][3]);

int main(void)
{
    std::cout << "========== Print Summed Testing ==========" << std::endl;

    std::cout << "\nTest 1 - two zero matrix" << std::endl;
    int matrix_1_1[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
    };
    int matrix_1_2[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
    };
    std::cout << "\tExpected:\n" << "0 0 0\n0 0 0\n0 0 0" << std::endl;
    std::cout << "\tReceived: " << std::endl;
    print_summed(matrix_1_1, matrix_1_2);

    std::cout << "\nTest 2 - two identity matrix" << std::endl;
    int matrix_2_1[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1},
    };
    int matrix_2_2[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1},
    };
    std::cout << "\tExpected:\n" << "2 0 0\n0 2 0\n0 0 2" << std::endl;
    std::cout << "\tReceived: " << std::endl;
    print_summed(matrix_2_1, matrix_2_2);

    std::cout << "\nTest 3 - two identity matrix but with negative numbers" << std::endl;
    int matrix_3_1[3][3] = {
        {-1, 0, 0},
        {0, -1, 0},
        {0, 0, -1},
    };
    int matrix_3_2[3][3] = {
        {-1, 0, 0},
        {0, -1, 0},
        {0, 0, -1},
    };
    std::cout << "\tExpected:\n" << "-2 0 0\n0 -2 0\n0 0 -2" << std::endl;
    std::cout << "\tReceived: " << std::endl;
    print_summed(matrix_3_1, matrix_3_2);

    std::cout << "\nTest 4 - two mixed sign identity matrix, all should be 0" << std::endl;
    int matrix_4_1[3][3] = {
        {-1, 0, 0},
        {0, 1, 0},
        {0, 0, 1},
    };
    int matrix_4_2[3][3] = {
        {1, 0, 0},
        {0, -1, 0},
        {0, 0, -1},
    };
    std::cout << "\tExpected:\n" << "0 0 0\n0 0 0\n0 0 0" << std::endl;
    std::cout << "\tReceived: " << std::endl;
    print_summed(matrix_4_1, matrix_4_2);

    std::cout << "\nTest 5 - random numbers" << std::endl;
    int matrix_5_1[3][3] = {
        {1, -17, 2},
        {9, -16, -29},
        {0, -0, 12},
    };
    int matrix_5_2[3][3] = {
        {2, 9, -4},
        {5, 17, 3},
        {3, 0, 17},
    };
    std::cout << "\tExpected:\n" << "3 -8 -2\n14 1 -26\n3 0 29" << std::endl;
    std::cout << "\tReceived: " << std::endl;
    print_summed(matrix_5_1, matrix_5_2);

    return 0;
}