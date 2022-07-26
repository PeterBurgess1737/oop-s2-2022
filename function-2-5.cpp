bool is_descending(int array[], int n)
{
    // determine if the elements are in descending order
    if (n < 1)
    {
        return false;
    }

    for (int i = 1; i < n; i++)
    {
        if (array[i - 1] < array[i])
        {
            return false;
        }
    }

    return true;
}