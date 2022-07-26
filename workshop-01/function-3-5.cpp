double sum_even(double array[], int n)
{
    // return the sum of the elements in the even positions in an array
    // return 0 if the size parameter, n, is less than 1
    // note, 0 is considered an even position
    if (n < 1)
    {
        return 0.0;
    }

    double sum = 0.0;
    for (int i = 0; i < n; i += 2)
    {
        sum += array[i];
    }

    return sum;
}