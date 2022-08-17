/*
In your main function in main-1-4.cpp, define and initialise a one-dimensional double array.
Define (but do not initialize) another one-dimensional double array of the same size as the first one.
Write a function that copies the values of the first array into the second, this time using pointers.

Signature:
    void copy_doubles(double *old_array,double *new_array,int length);

Note:
    Before accessing an array element, the pointer must be changed to point to the element.
    You may not use the & operator or [] notation in your function.
*/

// Libraries
#include <iostream>

// Variables
double old_array[10] = {0.1, 1.1, 2.1, 3.1, 4.1, 5.1, 6.1, 7.1, 8.1, 9.1};
double new_array[10];

// External functions
extern void copy_doubles(double *old_array,double *new_array,int length);

// MAIN
int main(void)
{
    // Displaying
    std::cout << "Old array: " << std::endl;
    std::cout << "\t";  
    for (int i = 0; i < 10; i++)
    {
        std::cout << old_array[i];
        if (i < 9)
        {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    std::cout << "New array: " << std::endl;
    std::cout << "\t";
    for (int i = 0; i < 10; i++)
    {
        std::cout << new_array[i];
        if (i < 9)
        {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    // Copying
    std::cout << "\n" << "Copying" << "\n" << std::endl;
    copy_doubles(old_array, new_array, 10);
    
    // Displaying
    std::cout << "Old array: " << std::endl;
    std::cout << "\t";  
    for (int i = 0; i < 10; i++)
    {
        std::cout << old_array[i];
        if (i < 9)
        {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    std::cout << "New array: " << std::endl;
    std::cout << "\t";
    for (int i = 0; i < 10; i++)
    {
        std::cout << new_array[i];
        if (i < 9)
        {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    return 0;
}