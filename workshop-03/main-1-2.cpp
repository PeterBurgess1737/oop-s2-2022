/*
You are writing a "pretty printer" program that prints out student transcripts for all students enrolled in a degree.
The students and their grades are encoded in a multi-dimensional array called "report_card" in which each row represents a student, and each column represents a course.

All course names are encoded in a "courses" array, with the understanding that column Y in the "report_card" is element Y in the "courses" array.
In a similar manner, all student names are encoded in a "students" array and the student name at index X corresponds to row X in the "report_card".

Your "pretty_printer" program should define and initialize these three arrays and print them to stdout using a function.

Signature: void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);

There are 4 courses but any number of students.
The first line of output must start with "Report Card" and be followed by the course names.
Each of the 5 columns must be separated by a space and the last column is followed by a newline (std::endl).
For each student there is a line of output with the student's name in the first column followed by each of their 4 marks.
*/

// Libraries
#include <iostream>

// External functions
extern void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);

// MAIN
int main(void)
{
    std::string courses[4] = {
        "Course_1",
        "Course_2",
        "Course_3",
        "Course_4"
    };

    std::string students[7] = {
        "Student_1",
        "Student_2",
        "Student_3",
        "Student_4",
        "Student_5",
        "Student_6",
        "Student_7"
    };

    int report_card[7][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9,  10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20},
        {21, 22, 23, 24},
        {25, 26, 27, 28},
    };

    int nstudents = 7;

    print_class(courses, students, report_card, nstudents);
    
    return 0;
}