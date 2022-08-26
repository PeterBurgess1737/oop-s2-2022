/*
Question 1 - Array Allocation and Display

File names:
    function-1-1.cpp (for functions) and main-1-1.cpp (for main)

Function signatures:
    int *create_integers(int num_vals, int start);
    void array_display(int *vals, int num_vals);

The functions are:
    create_integers:
        Takes in two numbers:
            num_vals and start
        Allocates a new array of ints that is num_vals long.
        This function should initialise each element starting with the value in start, increasing by one each time.
        Hence a call:
            a = create_integers(5, 2)
        Should store the values [2, 3, 4, 5, 6] in the array a.

    array_display:
        Should display the contents of the array on a single line, separated by spaces with a newline afterwards.
        You are allowed to have a space between the last element and the newline.

You should also, in a separate file, write a main function that does the following
    Call your create_integers function,
    Pass the new array to your array_display function and call it.

The two functions defined above must be placed in the file function-1-1.cpp and the main function in the file main-1-1.cpp.
*/

// Libraries
#include <iostream>

// Variables
int *arr;

// External Functions
extern int *create_integers(int num_vals, int start);
extern void array_display(int *vals, int num_vals);

// MAIN
int main(void)
{
    /*
    Call your create_integers function,
    Pass the new array to your array_display function and call it.
    */

    arr = create_integers(5, 2); // Example case

    array_display(arr, 5);

    return 0;
}