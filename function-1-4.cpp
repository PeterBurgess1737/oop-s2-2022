int sum_two_arrays(int array[], int secondarray[], int n)
{
    // return the sum of two arrays as an integer (of equal size)
    // return 0 if the size parameter, n, is less than 1
    if (n < 1)
    {
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
        sum += secondarray[i];
    }

    return sum;
}