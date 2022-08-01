/*
Write a C++ program using the pseudocode that you wrote for activity 4.
Add a main function that reads a number, calls your function and writes out the result.
*/

// Libraries
#include <iostream>

// Varibles

// Functions
std::string get_binary_string_from(unsigned int decimal_number)
{
    // Converts the given decimal number to a binary string and returns it
    std::string binary_number("");
    while (decimal_number > 0)
    {
        if (decimal_number % 2)
        {
            binary_number.insert(0, 1, '1');
        }
        else
        {
            binary_number.insert(0, 1, '0');
        }
        decimal_number /= 2;
    }

    return binary_number;
}

// MAIN
int main(void)
{

    std::cout << "Tye a number: ";
    std::string decimal_number_string;
    std::cin >> decimal_number_string;

    int decimal_number_int = std::stoi(decimal_number_string);

    std::string binar_number;
    binar_number = get_binary_string_from(decimal_number_int);

    std::cout << "Binary form is: " << binar_number << std::endl;

    return 0;
}