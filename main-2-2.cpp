/*
In your program, define an integer variable and assign it a value.
Next, define a pointer variable that points to its address.
Print the address at standard output, and, using the pointer only, print the decimal value as well.
    (Hint: you are looking to employ the "value-at" operator from the lectures!)
*/

#include <iostream>

int main(void)
{
    int a = 17;
    int *a_pointer = &a;

    std::cout << a_pointer << std::endl;
    std::cout << *a_pointer << std::endl;

    return 0;
}