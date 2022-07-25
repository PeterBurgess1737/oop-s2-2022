int count(int array[], int n)
{
    // Returns the total count of even numbers in the given array
    int num_evens = 0;
    for (int i = 0; i < n; i++)
    {
        if (!(array[i] % 2))
        {
            num_evens++;
        }
    }

    return num_evens;
}
