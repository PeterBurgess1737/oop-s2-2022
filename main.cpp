#include <iostream>
#include <string>

#include "Book.h"
#include "Library.h"

bool success;

int main(void)
{
    Library library("Library Name");

    Book book1("Book1", "Book1 Author", 1999);
    Book book2("Book2", "Book2 Author", 2000);
    Book book3;

    book1.print_representation();
    book2.print_representation();
    book3.print_representation();

    library.printAllBooks();

    std::cout << "\nAdding book1" << std::endl;
    success = library.addBook(book1, 10);
    std::cout << "Book added = " << success << std::endl;

    library.printAllBooks();

    std::cout << "\nAdding book2" << std::endl;
    library.addBook(book2, 17);
    std::cout << "Book added = " << success << std::endl;

    library.printAllBooks();

    std::cout << "\nAdding book1 again" << std::endl;
    library.addBook(book1, 3);
    std::cout << "Book added = " << success << std::endl;

    library.printAllBooks();

    std::cout << "\nAdding book3" << std::endl;
    library.addBook(book3, 22);
    std::cout << "Book added = " << success << std::endl;

    library.printAllBooks();

    return 0;
}