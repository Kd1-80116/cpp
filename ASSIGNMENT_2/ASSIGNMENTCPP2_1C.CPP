/*Q1. Create a namespace NStudent. Create the Student class(created as per assignment-1 Q3) inside
namespace. Test the functionalities.*/
#include <iostream>
using namespace std;
namespace Nstudent
{
    class Student
    {
    private:
        int rollno;
        string name;
        int mark;

    public:
        Student()
        {
            this->rollno = 10;
            this->name = "anil";
            this->mark = 100;
        }
        Student(int rollno, string name, int mark)
        {
            this->rollno = rollno;
            this->name = name;
            this->mark = mark;
        }

         void acceptStudent()
       {
              cout << "enter the rollno,name,mark";
              cin >> this->rollno >> this->name >> this->mark;
       }
       void printStudent()
       {
              cout << "student" << this->rollno << ":" << this->name << ":" << this->mark << endl;
       }


    };
}

using namespace Nstudent;


int main()
{
    Student t1;
    Student t2(10,"amit",90);

    t1.acceptStudent();
    t1.printStudent();
    t2.acceptStudent();
    t2.printStudent();

    
    

}


