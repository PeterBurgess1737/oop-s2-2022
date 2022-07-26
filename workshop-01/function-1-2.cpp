double array_mean(int array[], int n)
{
    // return the average of all elements in an integer array
    // return 0.0 if the size parameter, n, is less than 1

    if (n < 1)
    {
        return 0.0;
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    double average = (double)sum / n;

    return average;
}