#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include <vector>

#include "Book.h"

typedef struct {
    Book book;
    int number_avaliable_copies = 0;
}BookEntry;

class Library
{
private:
    std::string library_name;
    std::vector<BookEntry> book_entries;

public:
    // Constructors
    Library();
    Library(std::string l_library_name);

    // Public functions
    bool addBook(Book book);
    bool addBook(Book book, int number_copies);
    bool removeBook(Book book);

    bool borrowBook(Book book);
    bool returnBook(Book book);

    void printAllBooks();
};

#endif