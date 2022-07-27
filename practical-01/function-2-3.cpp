#include <iostream>

void two_five_nine(int array[], int n)
{
    // count the amount of times the numbers 2, 5 and 9
    // print out results on one line in the following form:
    //  2:<num_twos>;5:<num_fives>;9:<num_nines>;
    if (n < 1)
    {
        std::cout << "2:0;5:0;9:0;" << std::endl;
        return;
    }

    int num_2 = 0, num_5 = 0, num_9 = 0;
    for (int i = 0; i < n; i++)
    {
        switch (array[i])
        {
        case 2:
            num_2++;
            break;

        case 5:
            num_5++;
            break;

        case 9:
            num_9++;
            break;
        }
    }

    std::cout << "2:" << num_2 << ";5:" << num_5 << ";9:" << num_9 << ";" << std::endl;
}