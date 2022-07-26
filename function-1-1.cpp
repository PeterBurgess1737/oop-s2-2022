int array_sum(int array[], int n)
{
    // return the sum of all elements in an int array
    // return 0 if the size parameter, n, is less than 1
    if (n < 1)
    {
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }

    return sum;
}