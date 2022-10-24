#include <iostream>

int *matrix_max_min(int **vals, int num_rows, int num_cols)
{
    /*
    Which takes:
        A nested array of integer values, assumed to be, between 0 and 100 inclusive.
        An integer representing the number of outer-array elements (rows)
        An integer representing the number of elements in each inner-array (columns)

    matrix_max_min returns a two element array that contains:
        The maximum element of the array in its first element
        The minimum element of the array as its second element.
    */

    int *max_min = new int[2];

    max_min[0] = vals[0][0];
    max_min[1] = vals[0][0];

    for (int i = 0; i < num_rows; i++)
    {
        for (int j = 0; j < num_cols; j++)
        {
            if (vals[i][j] > max_min[0])
            {
                max_min[0] = vals[i][j];
            }

            if (vals[i][j] < max_min[1])
            {
                max_min[1] = vals[i][j];
            }
        }
    }

    return max_min;
}