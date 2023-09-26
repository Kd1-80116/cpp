/*Q3. Write a menu driven program for Student in CPP language. Create a class student with data
members roll no, name and marks. Implement the following functions
void initStudent();
void printStudentOnConsole();
void acceptStudentFromConsole();*/

#include <iostream>
using namespace std;
class Student
{
       int rollno;
       string name;
       int mark;

       // Student(){
       // this->rollno=112;
       // this->name="a";
       //  this->mark=800;
       // }
public:
       void initstudent()
       {
              rollno = 12;
              name = "anil";
              mark = 100;
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
int main()
{

       Student t1;
       t1.acceptStudent();
       t1.printStudent();
}
