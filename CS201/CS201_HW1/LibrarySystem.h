
#ifndef LIBRARYSYSTEM_H
#define LIBRARYSYSTEM_H

#include <iostream>
#include "Book.h"
#include "Student.h"

using std::string;

class LibrarySystem {
public :
    LibrarySystem () ;
    ~ LibrarySystem () ;
    void addBook ( const int bookId , const string name , const string authors ,
    const int year ) ;
    void deleteBook ( const int bookId ) ;
    void addStudent ( const int studentId , const string name ) ;
    void deleteStudent ( const int studentId ) ;
    void checkoutBook ( const int bookId , const int studentId ) ;
    void returnBook ( const int bookId ) ;
    void showAllBooks () ;
    void showBook ( const int bookId ) ;
    void showStudent ( const int studentId ) ;

private:
    int booksSize;
    Book** Books;
    int studentsSize;
    Student** Students;
    
};

#endif
