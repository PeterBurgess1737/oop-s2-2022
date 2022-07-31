bool is_palindrome(int integers[], int length)
{
    if (length < 1)
    {
        return false;
    }
    
    for (int i = 0; i < length / 2; i++)
    {
        if (integers[i] != integers[length - i - 1])
        {
            return false;
        }
    }

    return true;
}

int sum_array_elements(int integers[], int length)
{
    if (length < 1)
    {
        return -1;
    }

    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += integers[i];
    }

    return sum;
}

int sum_if_palindrome(int integers[], int length)
{
    // return the sum of the elements if it is a palindrome array else return -2
    // call separate functions to check whether or not the array is a palindrome and to calculate the sum of its elements
    // if the length is 0 or negative each function must return -1 or false as its result
    if (length < 1)
    {
        return -1;
    }

    if (is_palindrome(integers, length))
    {
        return sum_array_elements(integers, length);
    }
    
    return -2;
}