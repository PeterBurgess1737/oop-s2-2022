/*
Given a multi-dimensional array of integers, print all its elements.
Elements should be printed by row, with a space separating elements on a row, and a newline separating rows. (use std::endl)

Signature: void printer(int array[10][10]);
*/

// Libraries
#include <iostream>

// External functions
extern void printer(int array[10][10]);

// Variables
int my_arr[10][10] = {0};

// MAIN
int main(void)
{
    printer(my_arr);

    return 0;
}