/*
Write a C++ program to perform arithmetic on binary numbers.
Write one or more C++ functions that perform either add, subtract, left shift or right shift.
Add a main function that calls your functions and writes out the results.
*/

// Libraries
#include <iostream>

// Varibles

// Functions
std::string add_binary(std::string binary_1, std::string binary_2)
{
    // Adds binary_1 from binary_2
    // The result is bound to the size of the longest parameter

    // Pad the shorter string to make them the same length
    if (binary_1.size() < binary_2.size())
    {
        binary_1.insert(binary_1.begin(), binary_2.size() - binary_1.size(), '0');
    }
    else if (binary_2.size() < binary_1.size())
    {
        binary_2.insert(binary_2.begin(), binary_1.size() - binary_2.size(), '0');
    }

    // Looping from right to left, performing addition
    std::string result("");
    bool carry = 0;
    int sum;
    for (int i = binary_1.size() - 1; i >= 0; i--)
    {
        sum = 0;
        if (binary_1[i] == '1')
            sum++;
        if (binary_2[i] == '1')
            sum++;
        if (carry)
            sum++;

        switch (sum)
        {
        case 0:
            result.insert(result.begin(), 1, '0');
            carry = 0;
            break;
        case 1:
            result.insert(result.begin(), 1, '1');
            carry = 0;
            break;
        case 2:
            result.insert(result.begin(), 1, '0');
            carry = 1;
            break;
        case 3:
            result.insert(result.begin(), 1, '1');
            carry = 1;
            break;
        }
    }

    return result;
}

std::string sub_binary(std::string binary_1, std::string binary_2)
{
    // Subtracts binary_2 from binary_1 using twos compliment
    // The result is bound to the size of the longest parameter
    // Assumes the most significant bit is the sign bit

    // Pad the shorter string to make them the same length
    if (binary_1.size() < binary_2.size())
    {
        binary_1.insert(binary_1.begin(), binary_2.size() - binary_1.size(), '0');
    }
    else if (binary_2.size() < binary_1.size())
    {
        binary_2.insert(binary_2.begin(), binary_1.size() - binary_2.size(), '0');
    }

    // Twos compliment on binary 2
    // Flip every bit
    for (unsigned int i = 0; i < binary_2.size(); i++)
    {
        if (binary_2[i] == '0')
            binary_2[i] = '1';
        else
            binary_2[i] = '0';
    }
    // Add one
    binary_2 = add_binary(binary_2, "1");

    // Now add them
    std::string result = add_binary(binary_1, binary_2);

    return result;
}

std::string shift_binary_right(std::string binary, int shift)
{
    // Shifts the binary to the right, maintains length

    binary.insert(binary.begin(), shift, '0');
    binary = binary.substr(0, binary.size() - shift);
    return binary;
}

std::string shift_binary_left(std::string binary, int shift)
{
    // Shifts the binary to the left, does not maintain length
    binary.insert(binary.end(), shift, '0');
    return binary;
}

// MAIN
int main(void)
{
    std::cout << "\n========== Testing binary addition ==========" << std::endl;
    std::string bin_1_1("00001111");
    std::string bin_1_2("111100001111");
    std::cout << "Binary 1: " << bin_1_1 << std::endl << "Binary 2: " << bin_1_2 << std::endl;
    std::string result_1 = add_binary(bin_1_1, bin_1_2);
    std::cout << "Result:   " << result_1 << std::endl;

    std::cout << "\n========== Testing binary subtraction ==========" << std::endl;
    std::string bin_2_1("111100001111");
    std::string bin_2_2("11110000");
    std::cout << "Binary 1: " << bin_2_1 << std::endl << "Binary 2: " << bin_2_2 << std::endl;
    std::string result_2 = sub_binary(bin_2_1, bin_2_2);
    std::cout << "Result:   " << result_2 << std::endl;

    std::cout << "\n========== Testing binary shift right ==========" << std::endl;
    std::string bin_3("111100001111");
    std::cout << "Binary: " << bin_3 << " being shifted 3" << std::endl;
    std::string result_3 = shift_binary_right(bin_3, 3);
    std::cout << "Result: " << result_3 << std::endl;

    std::cout << "\n========== Testing binary shift left ==========" << std::endl;
    std::string bin_4("111100001111");
    std::cout << "Binary: " << bin_4 << " being shifted 2" << std::endl;
    std::string result_4 = shift_binary_left(bin_4, 2);
    std::cout << "Result: " << result_4 << std::endl;


    return 0;
}