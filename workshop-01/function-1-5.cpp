int count_evens(int number)
{
    // return number of even numbers between 1 and a number (inclusive)
    // return 0 if the parameter is less than 1

    int num_evens = 0;
    for (int i = 1; i <= number; i++)
    {
        if (!(i % 2))
        {
            num_evens++;
        }
    }

    return num_evens;
}