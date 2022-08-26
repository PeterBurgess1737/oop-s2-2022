#include <iostream>

void dangerous_temps(double vals[], double threshold, int length)
{
    /*
    Which takes:
        An array of doubles representing temperatures in an biological process
        A double value representing a threshold temperature.
            Temperatures lower than this value are dangerous as the samples may die.
        An integer representing the length of the array of temperatures.

    The function must print a space-separated list of pairs consisting of:
        The array index of a dangerous temperature, followed by a colon, followed by the dangerous temperature.
    The list can be terminated by a space (if it is convenient to write your code this way) and a newline character.
    */

    for (int i = 0; i < length; i++)
    {
        if (vals[i] < threshold)
        {
            std::cout << i << ":" << vals[i] << " ";
        }
    }
    std::cout << std::endl;
}