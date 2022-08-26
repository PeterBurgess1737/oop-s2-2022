/*
Question 3 - Conditional Array Processing

File names:
    function-3-1.cpp (for functions) and main-3-1.cpp (for main)

Function signatures: 
    void dangerous_temps(double vals[],double threshold, int length);

    The function is:
        dangerous_temps:
            Which takes:
                An array of doubles representing temperatures in an biological process
                A double value representing a threshold temperature.
                    Temperatures lower than this value are dangerous as the samples may die.
                An integer representing the length of the array of temperatures.

            The function must print a space-separated list of pairs consisting of:
                The array index of a dangerous temperature, followed by a colon, followed by the dangerous temperature.
            The list can be terminated by a space (if it is convenient to write your code this way) and a newline character. 

Thus if the array vals contains the values: {-10.0, -70.5, -75.5, -20.0, -30.2, -40.6, -91.8} then the call
    dangerous_temps(vals,-72.0,7);

Should print: 
    2:-75.5 6:-91.8 

You must also create, in a separate file, a main function that does the following:
    Calls the dangerous_temps function twice on two different arrays with two different threshold values. 

The two functions defined above must be placed in the file function-3-1.cpp and the main function in the file main-3-1.cpp.
*/

// Libraries
#include <iostream>

// Variables
double arr_1[7] = {-10.0, -70.5, -75.5, -20.0, -30.2, -40.6, -91.8};
double arr_1_threshold = -72.0;

double arr_2[8] = {-17.1, -55.0, -22.0, -77.7, -33.2, -19.9, -17.37, -16.0};
double arr_2_threshold = -50.0;

// External Functions
extern void dangerous_temps(double vals[],double threshold, int length);

// MAIN
int main(void)
{
    dangerous_temps(arr_1, arr_1_threshold, 7);

    dangerous_temps(arr_2, arr_2_threshold, 8);

    return 0;
}