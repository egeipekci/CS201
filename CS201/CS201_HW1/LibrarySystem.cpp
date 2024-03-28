    #include "LibrarySystem.h"
    #include "iostream"

    using std::string;
    using std::cout;
    using std::endl;

    LibrarySystem:: LibrarySystem () {
        booksSize = 0;
        Books = new Book*[ booksSize ];

    }

    /*LibrarySystem:: ~ LibrarySystem () {

    }*/

    void LibrarySystem:: addBook ( const int bookId , const string name , const string authors ,const int year ) {

    }

    void LibrarySystem:: deleteBook ( const int bookId ) {

    }

    void LibrarySystem:: addStudent ( const int studentId , const string name ) {

    }

    void LibrarySystem:: deleteStudent ( const int studentId ) {

    }

    void LibrarySystem:: checkoutBook ( const int bookId , const int studentId ) {

    }

    void LibrarySystem:: returnBook ( const int bookId ) {

    }

    void LibrarySystem:: showAllBooks () {
        

    }

    void LibrarySystem:: showBook ( const int bookId ) {

    }

    void LibrarySystem:: showStudent ( const int studentId ) {
        
    }
