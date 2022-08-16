/*
In your main function in main-1-1.cpp, define and initialize a two-dimensional string array of size 3 by 2.
Define (but do not initialize) another two-dimensional array of strings of the same size as the first one.
Write a function that copies the values of the first array into the second, without using pointers.
The function must take a third parameter that gives the size of the first dimension which in this case is 3.

Signature:
    void string_2d_copy(std::string first[][2], std::string second[][2], int n);

Note:
    You must access the arrays using [][] notation.
*/

// Libraries
#include <iostream>
#include <string>

// Variables
std::string first[3][2];
std::string second[3][2];

// External functions
extern void string_2d_copy(std::string first[][2], std::string second[][2], int n);

// MAIN
int main(void)
{
    // Populating first
    first[0][0] = "Top left";
    first[0][1] = "Top right";
    first[1][0] = "Middle left";
    first[1][1] = "Middle right";
    first[2][0] = "Bottom left";
    first[2][1] = "Bottom right";

    // Displaying
    std::cout << "First array: " << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << "\t" << "'" << first[i][0] << "'" << ", " << "'" << first[i][1] << "'" << std::endl;
    }
    std::cout << "Second array: " << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << "\t" << "'" << second[i][0] << "'" << ", " << "'" << second[i][1] << "'" << std::endl;
    }

    // Copying
    std::cout << "\n" << "Copying the array" << "\n" << std::endl;
    string_2d_copy(first, second, 3);

    // Displaying
    std::cout << "First array: " << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << "\t" << "'" << first[i][0] << "'" << ", " << "'" << first[i][1] << "'" << std::endl;
    }
    std::cout << "Second array: " << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << "\t" << "'" << second[i][0] << "'" << ", " << "'" << second[i][1] << "'" << std::endl;
    }


    return 0;
}