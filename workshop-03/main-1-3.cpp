/*
You are writing a "pretty printer" program that prints out student transcripts for all students enrolled in a degree. 
The students and their grades are encoded in the same three array combination used in 1-2.

Write a program that obtains the values for the courses, students, and report_card arrays from the standard input.
In your program, you will need to focus also on usability:
    As you can imagine, it will get pretty tedious to input a large number of students, so designing and implementing the best text-based interface is important!

Makefile practice:
    For this programme, write a Makefile that compiles the code for you.
    When you type 'make', your program should be recompiled to a new executable only if the source code has changed.

Redirection testing: 
    Unix provides a handy way to take input from a file and give it to a program on standard input.
    Let's say your program us called pretPrint. 
    You create a text file, let's call it printTest.txt, that contains the values for the courses, students, and report_card arrays that you would usually have to type in.
    Now we can use the "<" operator to tell Unix to take the contents of the file and connect it to the standard input of your program, like this.

        ./pretPrint < printTest.txt

    You can probably see that, with the automation provided by Makefiles, and the ability to capture text to put back in to a program as if you typed it, you can write make commands that will allow you to test your code very easily.
*/

// Libraries
#include <iostream>

// External functions
extern void print_class(std::string courses[4], std::string students[], int **report_card, int nstudents);

// MAIN
int main(void)
{

    // Variables
    std::string courses[4];
    std::string *students;
    int **report_card;
    int nstudents;

    // Collecting course names
    for (int i = 0; i < 4; i++)
    {
        std::cin >> courses[i];
    }

    // Collecting number of students
    std::cin >> nstudents;

    // Collecting student names and their grades
    report_card = new int*[nstudents];
    students = new std::string[nstudents];
    for (int i = 0; i < nstudents; i++)
    {
        report_card[i] = new int[4];

        std::cin >> students[i];

        for (int j = 0; j < 4; j++)
        {
            std::cin >> report_card[i][j];
        }
    }

    print_class(courses, students, report_card, nstudents);
    
    return 0;
}