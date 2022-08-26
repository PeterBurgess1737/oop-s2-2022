/*
Question 2 - Array Lookup

File names:
    function-2-1.cpp (for functions) and main-2-1.cpp (for main)

Function signatures: 
    string month_lookup(int month);

The function is:
    month_lookup
        Takes an integer between 1-12 (inclusive) representing the month and returns a string with the name of that month.
        The function should return the string "invalid month" if the integer parameter is not in the range 1-12 inclusive.
        The returned string should contain no leading or trailing spaces or newline characters. 

Thus a call:
    cout << month_lookup(3) << endl;

Should print: 
    March

Note that we are using the Australian calendar for this function.
Note also an easy way to implement this function is look up an array for the correct values
    - however in this exercise you are allowed to implement this function by other means if you wish. 

You must also create, in a separate file, a main function that does the following:
    Repeatedly calls the month_lookup function so tests it for both valid and invalid month numbers and prints the result.

The two functions defined above must be placed in the file function-2-1.cpp and the main function in the file main-2-1.cpp.
*/

// Libraries
#include <iostream>
using std::string;

// External Functions
extern string month_lookup(int month);

// MAIN
int main(void)
{
    for (int i = 0; i <= 13; i++)
    {
        std::cout << "Using int: " << i << " gives " << "'" << month_lookup(i) << "'" << std::endl;
    }

    return 0;
}