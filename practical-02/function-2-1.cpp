#include <iostream>
#include <string>
#include <algorithm>

void print_binary_str(std::string decimal_number)
{
    // transforms a positive decimal number into binary and prints out the result
    int decimal_number_int = atoi(decimal_number.c_str());
    std::string binary_number("");
    while (decimal_number_int > 0)
    {
        if (decimal_number_int % 2)
        {
            binary_number.push_back('1');
        }
        else
        {
            binary_number.push_back('0');
        }
        decimal_number_int /= 2;
    }

    std::reverse(binary_number.begin(), binary_number.end());
    
    std::cout << binary_number << std::endl;
}