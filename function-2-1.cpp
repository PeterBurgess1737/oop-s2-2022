int min_element(int array[], int n)
{
    // find the minimum number in an array and return it
    // return 0 if the size parameter, n, is less than 1
    if (n < 0)
    {
        return 0;
    }

    int min = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    return min;
}