#include <iostream>

void count_digits(int array[4][4])
{
    // See main-1-3.cpp
    // Too large to put here
    int counters[10] = {0};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (0 <= array[i][j] && array[i][j] <= 9)   
            {
                counters[array[i][j]]++;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        std::cout << i << ":" << counters[i] << ";";
    }
    std::cout << std::endl;
}