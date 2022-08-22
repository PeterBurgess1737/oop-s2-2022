#include <iostream>

int *readNumbers()
{
    int *arr = new int[10];

    for (int i = 0; i < 10; i++)
    {
        std::cin >> arr[i];
    }

    return arr;
}

void printNumbers(int *numbers, int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << i << " " << numbers[i] << std::endl;
    }
}

bool equalsArray(int *numbers1, int *numbers2, int length)
{
    if (length < 1)
    {
        return false;
    }

    bool is_equal = true;

    for (int i = 0; i < length; i++)
    {
        if (numbers1[i] != numbers2[i])
        {
            is_equal = false;
            break;
        }
    }

    return is_equal;
}