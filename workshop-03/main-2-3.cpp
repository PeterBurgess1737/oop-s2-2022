/*
In your program, define an integer variable and assign it the value 42.
Next, define a pointer variable that points to its address.
Using only the pointer to perform operations, increment the variable value by 5, and then decrement it by 2.
Print the results of both operations at standard output, again, using the pointer rather than the variable as a handle.
The output should have 47 on the first line and 45 on the second.
*/

#include <iostream>

int main(void)
{
    int a = 42;
    int *a_pointer = &a;

    *a_pointer += 5;
    std::cout << *a_pointer << std::endl;

    *a_pointer -= 2;
    std::cout << *a_pointer << std::endl;

    return 0;
}