#include <algorithm>

int median_array(int array[], int n)
{
    // return the median of the array
    // return 0 if the size parameter, n, is even or if it is less than 1
    if (n < 1 || !(n % 2))
    {
        return 0;
    }

    std::sort(array, array + n);  // This line is destructive

    return array[n / 2];
}