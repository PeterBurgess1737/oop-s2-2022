#include <iostream>
#include <string>

void print_class(std::string courses[4], std::string students[], int **report_card, int nstudents)
{
    std::cout << "Report Card ";
    for (int i = 0; i < 4; i++)
    {
        std::cout << courses[i];
        if (i != 3)
        {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    for (int i = 0; i < nstudents; i++)
    {
        std::cout << students[i] << " " << report_card[i][0] << " " << report_card[i][1] << " " << report_card[i][2] << " " << report_card[i][3] << std::endl;
    }
}