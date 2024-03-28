    #include "Book.h"

    Book::Book( const int bookId , const string name , const string authors , const int year  )    {
        this->bookId = bookId;
        this->name = name;
        this->authors = authors;
        this->year = year; 
        }

    int Book::getBookId()  {
        return bookId;
        }

    void Book::setBookId( int bookId )   {
        bookId = bookId;
        }
    /*
    void Book::getBookType()  {
        return carType;
        }

    string Book::setBookType( string type )   {
        carType = type;
        }
        */