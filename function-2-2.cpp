int max_sub_sum(int *nums, int length)
{
    // Length check
    if (length <= 0)
    {
        return 0;
    }

    // All negative check
    bool all_negative = 1;
    for (int i = 0; i < length; i++)
    {
        if (nums[i] >= 0)
        {
            all_negative = 0;
            break;
        }
    }
    if (all_negative)
    {
        return 0;
    }

    // Finding largest sum
    int current_sum = 0;
    int max_sum = 0;

    // For every starting index possible
    for (int starting_index = 0; starting_index < length; starting_index++)
    {
        // For every sub array length possible for the starting index
        for (int sub_array_length = 1; sub_array_length < length - starting_index; sub_array_length++)
        {
            // Reset the current sum
            current_sum = 0;

            // Get the sum for the current sub array
            for (int index_offset = 0; index_offset < sub_array_length; index_offset++)
            {
                current_sum += nums[starting_index + index_offset];
            }

            // Check against the last largest
            if (current_sum > max_sum)
            {
                max_sum = current_sum;
            }
        }
    }

    return max_sum;
}
