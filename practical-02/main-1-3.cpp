/*
Given a matrix of integers, count the number of times each number 0-9 appears.
Print out your results on one line in the following form:

0:number of zeros;1:number of ones;2:number of twos;3:number of threes;4:number of fours;5:number of fives;6:number of sixes;7:number of sevens;8:number of eights;9:number of nines;

For example, if you are passed an identify matrix, it contains 12 zeros and 4 ones and no other digits from 0 to 9, your output would be:
    0:12;1:4;2:0;3:0;4:0;5:0;6:0;7:0;8:0;9:0;

Note the colons and semi-colons.

Signature: void count_digits(int array[4][4])
*/

// Libraries
#include <iostream>

// External functions
extern void count_digits(int array[4][4]);

int main(void)
{
    std::cout << "========== Count Digits Testing ==========" << std::endl;

    std::cout << "\nTest 1 - zero matrix" << std::endl;
    int matrix_1[4][4] = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
    };
    std::cout << "\tExpected: " << "0:16;1:0;2:0;3:0;4:0;5:0;6:0;7:0;8:0;9:0;" << std::endl;
    std::cout << "\tReceived: ";
    count_digits(matrix_1);

    std::cout << "\nTest 2 - identity matrix" << std::endl;
    int matrix_2[4][4] = {
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1},
    };
    std::cout << "\tExpected: " << "0:12;1:4;2:0;3:0;4:0;5:0;6:0;7:0;8:0;9:0;" << std::endl;
    std::cout << "\tReceived: ";
    count_digits(matrix_2);

    std::cout << "\nTest 3 - identity matrix but with negative numbers" << std::endl;
    int matrix_3[4][4] = {
        {-1, 0, 0, 0},
        {0, -1, 0, 0},
        {0, 0, -1, 0},
        {0, 0, 0, -1},
    };
    std::cout << "\tExpected: " << "0:12;1:0;2:0;3:0;4:0;5:0;6:0;7:0;8:0;9:0;" << std::endl;
    std::cout << "\tReceived: ";
    count_digits(matrix_3);

    std::cout << "\nTest 4 - mixed sign identity matrix" << std::endl;
    int matrix_4[4][4] = {
        {-1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1},
    };
    std::cout << "\tExpected: " << "0:12;1:3;2:0;3:0;4:0;5:0;6:0;7:0;8:0;9:0;" << std::endl;
    std::cout << "\tReceived: ";
    count_digits(matrix_4);

    std::cout << "\nTest 5 - random numbers" << std::endl;
    int matrix_5[4][4] = {
        {1, -17, 2, -37},
        {9, -16, -29, 0},
        {0, -0, 12, -13},
        {-17, -27, 3, 9},
    };
    std::cout << "\tExpected: " << "0:3;1:1;2:1;3:1;4:0;5:0;6:0;7:0;8:0;9:2;" << std::endl;
    std::cout << "\tReceived: ";
    count_digits(matrix_5);

    return 0;
}