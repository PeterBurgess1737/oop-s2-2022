/*
As discussed in the lectures, a pointer captures the idea of a memory location.

In your first pointer program, define an integer variable and assign it a value.
Next, define a pointer variable that points to its address. 
Print the address to standard output. 

In what base do you think the address is represented? Why? 
    Base 16.
    Because it is a more compact way of representing numbers than base 10 and is a power of two so it works nucely with binary.

Run the program a number of times. What do you notice happening?
    Nothing changes.
    But I assume you are expecting the memory location to change because the computer is running the program in a different space in memory.
*/

#include <iostream>

int main(void)
{
    int a = 17;
    int *a_pointer = &a;

    std::cout << a_pointer << std::endl;

    return 0;
}