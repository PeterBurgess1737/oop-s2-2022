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

void hexDigits(int *numbers, int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << i << " " << numbers[i] << " ";

        switch (numbers[i])
        {
        case 10:
            std::cout << "A";
            break;
        case 11:
            std::cout << "B";
            break;
        case 12:
            std::cout << "C";
            break;
        case 13:
            std::cout << "D";
            break;
        case 14:
            std::cout << "E";
            break;
        case 15:
            std::cout << "F";
            break;
        default:
            std::cout << numbers[i];
            break;
        }

        std::cout << std::endl;
    }
}