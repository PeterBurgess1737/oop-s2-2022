/*
Write a function that given a character 'A','B','C','D' or 'E' representing a grade, uses a switch statement print out if this is a pass or fail.
Print "Nothing" if the character given is not a valid grade.
For a pass print out "Pass", and a fail, "Fail".
Note that the output needs to end with a newline.
Grades 'A', 'B' and 'C' are a pass but 'D' and 'E' are a fail.
*/

// Including standard headers
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// External functions
extern void print_pass_fail(char);

int main(void)
{
    std::cout << "Test 1 - passing grades" << std::endl;
    std::cout << "\tTesting 'A'" << std::endl;
    std::cout << "\t\tExpected: Pass" << std::endl;
    std::cout << "\t\tReceived: ";
    print_pass_fail('A');
    std::cout << "\tTesting 'B'" << std::endl;
    std::cout << "\t\tExpected: Pass" << std::endl;
    std::cout << "\t\tReceived: ";
    print_pass_fail('B');
    std::cout << "\tTesting 'C'" << std::endl;
    std::cout << "\t\tExpected: Pass" << std::endl;
    std::cout << "\t\tReceived: ";
    print_pass_fail('C');

    std::cout << "\nTest 2 - failing grades" << std::endl;
    std::cout << "\tTesting 'D'" << std::endl;
    std::cout << "\t\tExpected: Fail" << std::endl;
    std::cout << "\t\tReceived: ";
    print_pass_fail('D');
    std::cout << "\tTesting 'E'" << std::endl;
    std::cout << "\t\tExpected: Fail" << std::endl;
    std::cout << "\t\tReceived: ";
    print_pass_fail('E');

    std::cout << "\nTest 3 - random letters" << std::endl;
    std::cout << "\tTesting 'Z'" << std::endl;
    std::cout << "\t\tExpected: Nothing" << std::endl;
    std::cout << "\t\tReceived: ";
    print_pass_fail('Z');
    std::cout << "\tTesting 'G'" << std::endl;
    std::cout << "\t\tExpected: Nothing" << std::endl;
    std::cout << "\t\tReceived: ";
    print_pass_fail('G');
    std::cout << "\tTesting 'H'" << std::endl;
    std::cout << "\t\tExpected: Nothing" << std::endl;
    std::cout << "\t\tReceived: ";
    print_pass_fail('H');

    std::cout << "\nTest 4 - random numbers and characters" << std::endl;
    std::cout << "\tTesting '~'" << std::endl;
    std::cout << "\t\tExpected: Nothing" << std::endl;
    std::cout << "\t\tReceived: ";
    print_pass_fail('~');
    std::cout << "\tTesting '7'" << std::endl;
    std::cout << "\t\tExpected: Nothing" << std::endl;
    std::cout << "\t\tReceived: ";
    print_pass_fail('7');
    std::cout << "\tTesting '\\'" << std::endl;
    std::cout << "\t\tExpected: Nothing" << std::endl;
    std::cout << "\t\tReceived: ";
    print_pass_fail('\\');

    return 0;
}
