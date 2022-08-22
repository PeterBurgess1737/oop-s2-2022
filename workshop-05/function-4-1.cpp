#include <iostream>

int *readNumbers()
{
    int *arr = new int[10];

    for (int i = 0; i < 10; i++)
    {
        std::cin >> arr[i];
    }

    return arr;
}

void printNumbers(int *numbers, int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << i << " " << numbers[i] << std::endl;
    }
}

int secondSmallestSum(int *numbers, int length)
{
    // Finding largest sum
    int current_sum = 0;

    int smallest_sum;
    int smallest_sum_index;
    int second_smallest_sum;

    int num_sub_arrays = length * (length + 1) / 2;
    int *all_sums = new int[num_sub_arrays];
    int current_index = 0;

    // For every starting index possible
    for (int starting_index = 0; starting_index < length; starting_index++)
    {
        // For every sub array length possible for the starting index
        for (int sub_array_length = 1; sub_array_length <= length - starting_index; sub_array_length++)
        {
            // Reset the current sum
            current_sum = 0;

            // Get the sum for the current sub array
            for (int index_offset = 0; index_offset < sub_array_length; index_offset++)
            {
                current_sum += numbers[starting_index + index_offset];
            }
            
            // Add it to the array
            all_sums[current_index] = current_sum;
            current_index++;
        }
    }

    // Find the smallest sub array
    smallest_sum_index = 0;
    smallest_sum = all_sums[smallest_sum_index];
    for (int i = 1; i < num_sub_arrays; i++)
    {
        if (all_sums[i] < smallest_sum)
        {
            smallest_sum = all_sums[i];
            smallest_sum_index = i;
        }
    }

    // Find the second smallest sub array
    second_smallest_sum = all_sums[(smallest_sum_index + 1) % num_sub_arrays]; // Making the index different to the smallest sum
    for (int i = 0; i < num_sub_arrays; i++)
    {
        if (i != smallest_sum_index)
        {
            if (all_sums[i] == smallest_sum)
            {
                return all_sums[i];
            }
            else if (all_sums[i] < second_smallest_sum)
            {
                second_smallest_sum = all_sums[i];
            }
        }
    }

    return second_smallest_sum;
}