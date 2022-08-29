#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book
{
private:
    std::string title;
    std::string author;
    int year_published;

public:
    // Constructors
    Book();
    Book(std::string b_title, std::string b_author, int b_year_published);

    // Getters
    std::string get_title();
    std::string get_author();
    int get_year_published();

    // Functions, yay
    std::string get_string_represation();
    void print_representation();

    bool compare_to(Book other_book);
};

#endif