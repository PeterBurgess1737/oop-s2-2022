/*
Given a positive decimal number, write a function that transforms it into binary, and prints out the result.
You may assume that the string contains at least 1 and no more than 9 decimal digits.
The output should only include the binary digits followed by a new line.

Hint: 
    You might need to convert a string to integer.
    Have a look at the stoi(string) in the C++11 string library.
    If you need to compile with C++11, include the compilation flag -std=c++11 in your compile command.

Signature: void print_binary_str(std::string decimal_number)
*/

// Libraries
#include <iostream>
#include <string>

// External functions
extern void print_binary_str(std::string decimal_number);

int main(void)
{
    std::cout << "========== Print Binary String Testing ==========" << std::endl;
    
    std::cout << "\nTest 1 - zero" << std::endl;
    std::cout << "\tExpected: 0" << std::endl;
    std::cout << "\tReceived: ";
    print_binary_str("0");
    
    std::cout << "\nTest 2 - one" << std::endl;
    std::cout << "\tExpected: 1" << std::endl;
    std::cout << "\tReceived: ";
    print_binary_str("1");
    
    std::cout << "\nTest 3 - two" << std::endl;
    std::cout << "\tExpected: 10" << std::endl;
    std::cout << "\tReceived: ";
    print_binary_str("2");
    
    std::cout << "\nTest 4 - seventeen" << std::endl;
    std::cout << "\tExpected: 1001" << std::endl;
    std::cout << "\tReceived: ";
    print_binary_str("17");
    
    std::cout << "\nTest 5 - one hundred" << std::endl;
    std::cout << "\tExpected: 1100100" << std::endl;
    std::cout << "\tReceived: ";
    print_binary_str("100");

    return 0;
}