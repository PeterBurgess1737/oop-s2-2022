/*
Using a for loop, count the number of even numbers between 1 and a number we supply (inclusive).
Return 0 if the parameter is less than 1.
*/

// Including standard headers
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// External functions
extern int count_evens(int);

int main(void)
{
    std::cout << "========== Testing ==========" << std::endl;

    std::cout << "Test 1 - 1 to 10" << std::endl;
    std::cout << "Expected: 5" << std::endl;
    std::cout << "Received: " << count_evens(10) << std::endl;

    std::cout << "Test 2 - 1 to -5" << std::endl;
    std::cout << "Expected: 0" << std::endl;
    std::cout << "Received: " << count_evens(-5) << std::endl;

    std::cout << "Test 3 - 1 to 100" << std::endl;
    std::cout << "Expected: 50" << std::endl;
    std::cout << "Received: " << count_evens(100) << std::endl;

    std::cout << "Test 4 - 1 to 0" << std::endl;
    std::cout << "Expected: 0" << std::endl;
    std::cout << "Received: " << count_evens(0) << std::endl;

    std::cout << "Test 5 - 1 to 1" << std::endl;
    std::cout << "Expected: 0" << std::endl;
    std::cout << "Received: " << count_evens(1) << std::endl;

    return 0;
}
