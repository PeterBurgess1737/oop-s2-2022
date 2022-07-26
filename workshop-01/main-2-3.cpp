/*
Write a function that given an array of integers and the length of the array, will count the amount of times the numbers 2, 5 and 9 appear using a switch statement.
The function must print out your results on one line in the following form:
    2:<num_twos>;5:<num_fives>;9:<num_nines>;

If the array contained three 2s, one 5 and eleven 9s, the output would be:
    2:3;5:1;9:11;

Note the colons and semi-colons.
Also remember to write out a newline at the end of the output.
The function must still produce a line of output even if the size parameter, n, is less than 1.
*/

// Including standard headers
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// External functions
extern void two_five_nine(int[], int);

int main(void)
{
    std::cout << "Test 1 - simple array" << std::endl;
    int array_1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Expected:\n\t2:1;5:1;9:1;\nReceived:\n\t";
    two_five_nine(array_1, 10);
    
    std::cout << "\nTest 2 - negative numbers" << std::endl;
    int array_2[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
    std::cout << "Expected:\n\t2:0;5:0;9:0;\nReceived:\n\t";
    two_five_nine(array_2, 10);
    
    std::cout << "\nTest 3 - positive and negative numbers" << std::endl;
    int array_3[] = {1, 5, -5, 3, -2, -9, -7, 2, 7, -2, 9, 10};
    std::cout << "Expected:\n\t2:1;5:1;9:1;\nReceived:\n\t";
    two_five_nine(array_3, 12);
    
    std::cout << "\nTest 4 - negative size parameter" << std::endl;
    int array_4[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Expected:\n\t2:0;5:0;9:0;\nReceived:\n\t";
    two_five_nine(array_4, -17);
    
    std::cout << "\nTest 5 - all zeros" << std::endl;
    int array_5[] = {0, 0, 0, 0, 0};
    std::cout << "Expected:\n\t2:0;5:0;9:0;\nReceived:\n\t";
    two_five_nine(array_5, 5);
    
    std::cout << "\nTest 6 - multiples of each number" << std::endl;
    int array_6[] = {2, 2, 3, 4, 5, 5, 6, 6, 7, 7, 8, 9, 0, 10, 9, 9, 9, 9};
    std::cout << "Expected:\n\t2:2;5:5;9:5;\nReceived:\n\t";
    two_five_nine(array_6, 18);

    return 0;
}
