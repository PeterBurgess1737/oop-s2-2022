int array_min(int integers[], int length)
{
    if (length < 1)
    {
        return -1;
    }

    int min = integers[0];
    for (int i = 1; i < length; i++)
    {
        if (integers[i] < min)
        {
            min = integers[i];
        }
    }

    return min;
}

int array_max(int integers[], int length)
{
    if (length < 1)
    {
        return -1;
    }

    int max = integers[0];
    for (int i = 1; i < length; i++)
    {
        if (integers[i] > max)
        {
            max = integers[i];
        }
    }

    return max;
}


int sum_min_max(int integers[], int length)
{
    // return the summ of the max and min elements of an array
    // call separate functions to identify the maximum and minimum elements
    // if the length is 0 or negative each function must return -1 as its result
    if (length < 1)
    {
        return -1;
    }

    return array_min(integers, length) + array_max(integers, length);
}