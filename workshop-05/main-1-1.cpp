/*
You must write two functions.
The first function, readNumbers, is to read a set of 10 numbers from std::cin and use them to initialise a dynamically allocated array of int of length 10.
The function must return a pointer to the array.
You may assume that the input contains 10 integer values and nothing else.

The second function, printNumbers, takes an int array of any length greater than 0 and prints all numbers in the array, one per line.
The numbers must be printed in order starting with the first entry.
Each line of output should start with the array index of the number being written out, followed by a space, then the number and finally a newline.

For example, if the numbers 5 2 3 4 35 6 7 8 -9 10 are read by the program, the output should be:
    0 5
    1 2
    2 3
    3 4
    4 35
    5 6
    6 7
    7 8
    8 -9
    9 10

The main function for this problem must call your readNumbers function, then pass the new array to your printNumbers function and finally delete the array.

The signatures for your two functions are:
    int *readNumbers();
    void printNumbers(int *numbers,int length);
    
The readNumbers and printNumbers functions must be placed in the file function-1-1.cpp and the main function in the file main-1-1.cpp
*/

// Libraries
#include <iostream>

// Variables
int *arr;

// Functions
extern int *readNumbers();
extern void printNumbers(int *numbers,int length);

// MAIN
int main(void)
{
    arr = readNumbers();

    printNumbers(arr, 10);

    delete[] arr;

    return 0;
}