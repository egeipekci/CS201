#ifndef Student_H
#define Student_H

#include <string>
using std::string;
class Student
{
    public:
        Student( const int studentId , const string name );

        int getStudentId();
        void setStudentId( int studentId );
        //int getStudentType();
        //void setStudentType( string type );



    private:
        int studentId;
        string name;
};

#endif // Student_H