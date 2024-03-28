#ifndef Book_H
#define Book_H

#include <string>
using std::string;

class Book
{
    public:
        Book( const int bookId , const string name , const string authors , const int year );

        int getBookId();
        void setBookId( int bookId );
        //int getBookType();
        //void setBookType( string type );



    private:
        int bookId;
        string name;
        string authors;
        int year;
};

#endif // Book_H
