int max_element(int array[], int n)
{
    // return the maximum element in an integer array
    // return 0 if the size parameter, n, is less than 1
    if (n < 1)
    {
        return 0;
    }

    int max = array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    return max;
}