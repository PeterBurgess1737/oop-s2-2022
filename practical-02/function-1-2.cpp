int is_identity(int array[10][10])
{
    // Return a 1 if it is an identity matrix and a 0 if not
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j)
            {
                if (array[i][j] != 1)
                {
                    return 0;
                }
            }
            else
            {
                if (array[i][j])
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}