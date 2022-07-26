bool is_fanarray(int array[], int n)
{
    // determine if the array is a 'fan' array
    //  entire array is a palindrome with the numbers in ascending order from the start to the middle element
    // return false if the size parameter, n, is less than 1
    if (n < 1)
    {
        return false;
    }

    for (int i = 0; i < n / 2; i++)
    {
        if (array[i] > array[i + 1])
        {
            return false;
        }
        if (array[i] != array[n - i - 1])
        {
            return false;
        }
    }

    return true;
}