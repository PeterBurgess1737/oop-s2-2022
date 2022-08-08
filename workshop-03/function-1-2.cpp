/*
There are 4 courses but any number of students.
The first line of output must start with "Report Card" and be followed by the course names.
Each of the 5 columns must be separated by a space and the last column is followed by a newline (std::endl).
For each student there is a line of output with the student's name in the first column followed by each of their 4 marks.
*/

#include <iostream>

void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents)
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