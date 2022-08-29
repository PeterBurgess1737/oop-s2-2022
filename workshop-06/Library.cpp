#include <string>
#include <vector>
#include <iostream>

#include "Library.h"
#include "Book.h"

// Constructors
Library::Library()
{
    library_name = "";
}
Library::Library(std::string l_library_name)
{
    library_name = l_library_name;
}

// Public functions
bool Library::addBook(Book book)
{
    addBook(book, 0);
}
bool Library::addBook(Book book, int number_copies)
{
    // For each book
    for (BookEntry &entry : book_entries)
    {
        // Check if book is already added
        if (book.compare_to(entry.book))
        {
            return false;
        }
    }

    // If if book hasnt been added, create an entry
    BookEntry new_entry;

    // Pass the book and the number of copies
    new_entry.book = book;
    new_entry.number_avaliable_copies = number_copies;

    // Save it
    book_entries.push_back(new_entry);

    return true;
}
bool Library::removeBook(Book book)
{
    // Check if the book exists
    for (int i = 0; i < book_entries.size(); i++)
    {
        if (book.compare_to(book_entries[i].book))
        {
            book_entries.erase(book_entries.begin() + i);
            return true;
        }
    }

    return false;
}

bool Library::borrowBook(Book book)
{
    // For each book
    for (BookEntry &entry : book_entries)
    {
        // If the books are the same
        if (book.compare_to(entry.book))
        {
            // If there are copies avaliable
            if (entry.number_avaliable_copies)
            {
                // Borrow a copy
                entry.number_avaliable_copies--;
                return true;
            }
            else
            {
                return false;
            }
        }
    }

    return false;
}
bool Library::returnBook(Book book)
{
    // For each book
    for (BookEntry &entry : book_entries)
    {
        // If the books are the same
        if (book.compare_to(entry.book))
        {
            entry.number_avaliable_copies++;
            return true;
        }
    }

    return false;
}

void Library::printAllBooks()
{
    std::cout << "Library Books:" << std::endl;
    for (BookEntry &entry : book_entries)
    {
        std::cout << "\t" << entry.book.get_string_represation() << " with number of avaliable copies " << entry.number_avaliable_copies << std::endl;
    }
}
