int num_count(int array[], int n, int number)
{
    // return the number of elements in an array that are equal to a given parameter
    // return 0 if the size parameter, n, is less than 1
    if (n < 1)
    {
        return 0;
    }

    int number_of_same_elements = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == number)
        {
            number_of_same_elements++;
        }
    }

    return number_of_same_elements;
}