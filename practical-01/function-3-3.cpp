#include <stdlib.h>
#include <iostream>

double weighted_average(int array[], int n)
{
    // return the weighted average of the array
    // defined as Σ xi * wi / n
    // return 0 if the size parameter, n, is less than 1
    if (n < 0)
    {
        return 0.0;
    }

    // Find each unique number
    // Find the number of occurances of each unique number
    // Do the sum

    // Finding each unique number, assumes alloc and realloc will not fail
    //std::cout << "Finding each unique number" << std::endl;
    int amount_of_unique_numbers = 1;
    int *unique_numbers = (int *)malloc(sizeof(int) * amount_of_unique_numbers);
    unique_numbers[0] = array[0];
    bool broken;
    for (int i = 1; i < n; i++)
    {
        broken = false;
        for (int j = 0; j < amount_of_unique_numbers; j++)
        {
            // For each unique number, if the current number is the same then break
            if (array[i] == unique_numbers[j])
            {
                broken = true;
                break;
            }
        }
        if (!broken) // If not broken then the current number is unique and so add it to the unique numbers
        {
            //std::cout << "\n\tUnique number found: " << array[i] << std::endl;
            //std::cout << "\t\tOld amount of unique numbers = " << amount_of_unique_numbers << std::endl;
            //std::cout << "\t\tOld unique number array: [";
            //for (int k = 0; k < amount_of_unique_numbers; k++)
            //{
            //    std::cout << unique_numbers[k] << ", ";
            //}
            //std::cout << "]" << std::endl;
            unique_numbers = (int *)realloc(unique_numbers, sizeof(int) * (amount_of_unique_numbers + 1));
            //std::cout << "\t\tAssigning new unique number" << std::endl;
            unique_numbers[amount_of_unique_numbers] = array[i];
            amount_of_unique_numbers++;
            //std::cout << "\t\tNew amount of unique numbers = " << amount_of_unique_numbers << std::endl;
            //std::cout << "\t\tNew unique number array: [";
            //for (int k = 0; k < amount_of_unique_numbers; k++)
            //{
            //    std::cout << unique_numbers[k] << ", ";
            //}
            //std::cout << "]" << std::endl;
        }
    }

    //std::cout << "\tArray: [";
    //for (int i = 0; i < n; i++)
    //{
    //    std::cout << array[i] << ", ";
    //}
    //std::cout << "]" << std::endl;

    //std::cout << "\tUnique numbers found: " << amount_of_unique_numbers << std::endl;

    //std::cout << "\tUnique numbers array: [";
    //for (int i = 0; i < amount_of_unique_numbers; i++)
    //{
    //    std::cout << unique_numbers[i] << ", ";
    //}
    //std::cout << "]" << std::endl;

    // Finds the amount of each unique number, assumes calloc will not fail
    //std::cout << "Finding the amount of each unique number" << std::endl;
    int *unique_number_counts = (int *)calloc(amount_of_unique_numbers, sizeof(int));
    
    //std::cout << "\tInitial unique number amounts: [";
    //for (int i = 0; i < amount_of_unique_numbers; i++)
    //{
    //    std::cout << unique_numbers[i] << ", ";
    //}
    //std::cout << "]" << std::endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < amount_of_unique_numbers; j++)
        {
            //std::cout << "\t\tj = " << j << std::endl;
            if (array[i] == unique_numbers[j])
            {
                unique_number_counts[j]++;
            }
        }
    }

    // Do the weighted average
    //std::cout << "Doing the weighted average" << std::endl;
    double weighted_average = 0.0;
    for (int i = 0; i < amount_of_unique_numbers; i++)
    {
        weighted_average += ((double)unique_numbers[i] * unique_number_counts[i] / n) * unique_number_counts[i];
    }

    return weighted_average;
}