/*
Question 4 - Nested Array Processing

File names:
    function-4-1.cpp (for functions) and main-4-1.cpp (for main)

Function signatures:
    int* matrix_max_min(int **vals,int num_rows, int num_cols);

The function is:
    matrix_max_min:
        Which takes:
            A nested array of integer values, assumed to be, between 0 and 100 inclusive.
            An integer representing the number of outer-array elements (rows)
            An integer representing the number of elements in each inner-array (columns)

        matrix_max_min returns a two element array that contains:
            The maximum element of the array in its first element
            The minimum element of the array as its second element.

Note:
    You can assume that the array has at least one row and one column and that all of the values are in the range given above.
    Your function doesn't have to work for values outside of these specifications.

As an example of how your function might work given the declaration:
    int row1[]={10,15,99};
    int row2[]={100,5,73};
    int row3[]={23,56,1};
    int *vals[]={row1,row2,row3};
    int nrows=3;
    int ncols=3;

The call:
    int *mm = matrix_max_min(vals,nrows,ncols);

Should return an array {100,1} because the minimum value in the array is 1 and the maximum value is 100.

Note:
    Your array will have to allocate the result array itself.

The two functions defined above must be placed in the file function-4-1.cpp and the main function in the file main-4-1.cpp.
*/

// Libraries
#include <iostream>

// Variables
int *max_min;

int row1_1[] = {10, 15, 99};
int row2_1[] = {100, 5, 73};
int row3_1[] = {23, 56, 1};
int *vals_1[] = {row1_1, row2_1, row3_1};

int row1_2[] = {1, 7, 9, 72};
int row2_2[] = {16, 3, 0, 42};
int row3_2[] = {59, 99, 76, 69};
int *vals_2[] = {row1_2, row2_2, row3_2};

// External Functions
extern int *matrix_max_min(int **vals, int num_rows, int num_cols);

// MAIN
int main(void)
{
    max_min = matrix_max_min(vals_1, 3, 3);
    std::cout << "For arr_1 max = " << max_min[0] << " and min = " << max_min[1] << std::endl;

    max_min = matrix_max_min(vals_2, 3, 4);
    std::cout << "For arr_2 max = " << max_min[0] << " and min = " << max_min[1] << std::endl;

    return 0;
}