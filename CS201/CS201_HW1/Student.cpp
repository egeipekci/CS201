    #include "Student.h"

    Student::Student( const int studentId , const string name  )    {
        this->studentId = studentId;
        this->name = name;
     
        }

    int Student::getStudentId()  {
        return studentId;
        }

    void Student::setStudentId( int studentId )   {
        this->studentId = studentId;
        }
    
    
    /*
    void Student::getStudentType()  {
        return carType;
        }

    string Student::setStudentType( string type )   {
        carType = type;
        }
        */
