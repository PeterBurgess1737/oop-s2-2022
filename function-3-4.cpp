#include <iostream>

void print_pass_fail(char grade)
{
    // given a character representing a grade print out if this is considered a pass or fail
    // print "Nothing" if the character given is not a valid grade
    // for a pass print out "Pass", and a fail, "Fail"
    // grades 'A', 'B' and 'C' are a pass but 'D' and 'E' are a fail

    switch (grade)
    {
    case 'A':
    case 'B':
    case 'C':
        std::cout << "Pass" << std::endl;
        break;

    case 'D':
    case 'E':
        std::cout << "Fail" << std::endl;
        break;
    
    default:
        std::cout << "Nothing" << std::endl;
        break;
    }
}