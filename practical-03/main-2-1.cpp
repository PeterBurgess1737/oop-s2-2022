/*
In your main function in main-2-1.cpp, define and initialise a single-dimensional integer array.
Next, define a pointer that points to the first element in the array and pass the pointer to a function.

Signature:
    void multiples_of_seven(int *nums,int length);

Using only pointer variables (and looping constructs), print only the array values that are exact multiples of 7 from start to finish to standard output.
The only program output should be the numbers, one per line with no white space.

Note:
    Before accessing an array element, the pointer must be changed to point to the element.
    You may not use the & operator or [] notation in your function.

TEST-DRIVEN DEVELOPMENT:
    You should develop input tests that will test that your code does the correct thing when it encounters multiples of 7 and that it doesn't do unexpected things.

    This not assessed for this practical, but you should develop a test program that takes input from standard input and passes the results to the multiples_of_seven.
    You should write a Makefile so that, if you type "make test", your code will be recompiled if required and then your tests will be attempted.
*/

// Libraries
#include <iostream>

// External functions
extern void multiples_of_seven(int *nums,int length);

// MAIN
int main(void)
{
    // Test 1 - Incremental values
    int my_nums_1[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int *my_nums_pointer_1 = my_nums_1;
    std::cout << "\n----- Expected Result -----" << std::endl;
    std::cout << "0\n7\n14" << std::endl;
    std::cout << "----- Received Result -----" << std::endl;
    multiples_of_seven(my_nums_pointer_1, 16);

    // Test 2 - Only multiples of 7
    int my_nums_2[5] = {7, 14, 21, 35, 91};
    int *my_nums_pointer_2 = my_nums_2;
    std::cout << "\n----- Expected Result -----" << std::endl;
    std::cout << "7\n14\n21\n35\n91" << std::endl;
    std::cout << "----- Received Result -----" << std::endl;
    multiples_of_seven(my_nums_pointer_2, 5);

    // Test 3 - Only negative multiples of 7
    int my_nums_3[4] = {-7, -21, -91, -105};
    int *my_nums_pointer_3 = my_nums_3;
    std::cout << "\n----- Expected Result -----" << std::endl;
    std::cout << "-7\n-21\n-91\n-105" << std::endl;
    std::cout << "----- Received Result -----" << std::endl;
    multiples_of_seven(my_nums_pointer_3, 4);

    // Test 4 - Mix of all
    int my_nums_4[7] = {-7, 9, 14, -35, 16, 21, 17};
    int *my_nums_pointer_4 = my_nums_4;
    std::cout << "\n----- Expected Result -----" << std::endl;
    std::cout << "-7\n14\n-35\n21" << std::endl;
    std::cout << "----- Received Result -----" << std::endl;
    multiples_of_seven(my_nums_pointer_4, 7);

    return 0;
}