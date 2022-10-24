#include <iostream>
#include <string>

#include "Book.h"

// Constructors
Book::Book()
{
    title = "";
    author = "";
    year_published = -1;
}
Book::Book(std::string b_title, std::string b_author, int b_year_published)
{
    title = b_title;
    author = b_author;
    year_published = b_year_published;
}

// Getters
std::string Book::get_title()
{
    return title;
}
std::string Book::get_author()
{
    return author;
}
int Book::get_year_published()
{
    return year_published;
}

// Functions, yay
std::string Book::get_string_represation()
{
    std::string representation = "'";

    representation += title;
    representation += "' by '";
    representation += author;
    representation += "' published in ";
    representation += std::to_string(year_published);

    return representation;
}
void Book::print_representation()
{
    std::cout << get_string_represation() << std::endl;
}

bool Book::compare_to(Book other_book)
{
    return !get_string_represation().compare(other_book.get_string_represation());
}
