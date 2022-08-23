/*
Write a function, hexDigits that when passed an int array of any length greater than 0 will print the corresponding hex digit for each int, one per line.
The corresponding hex digit should be determined using a switch statement.
The hex digits must be printed in uppercase and in order starting with the first entry.
Each line of output should start with the array index of the number being written out, followed by a space, then the number, then another space, then the matching hex digit and finally a newline.
You may assume that all ints are numbers in the range 0 to 15.

The For example, if the numbers 11 12 3 4 15 6 7 8 9 10 are read by the program, the output should be:
    0 11 B
    1 12 C
    2 3 3
    3 4 4
    4 15 F
    5 6 6
    6 7 7
    7 8 8
    8 9 9
    9 10 A

You should start by copying the function-1-1.cpp file and name the copy function-2-1.cpp.
Then add the function hexDigits to the new file.

The main function for this problem must call your readNumbers function, then pass the new array to your hexDigits function and finally delete the array.
The main function in the file main-2-1.cpp.

The signature for your new function is:
    void hexDigits(int *numbers,int length);
*/

// Libraries
#include <iostream>

// Variables
int *arr;

// Functions
extern int *readNumbers();
extern void hexDigits(int *numbers,int length);

// MAIN
int main(void)
{
    arr = readNumbers();

    hexDigits(arr, 10);

    delete[] arr;

    return 0;
}