/*Q1. Implement following classes. Test all functionalities in main().Insted of char[] use string
datatype*/
#include <iostream>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year;
    }
    int getday()
    {
        return this->day = day;
    }
    void setday(int day)
    {
        this->day = day;
    }
    int getmonth()
    {
        return this->month = month;
    }
    void setmonth(int month)
    {
        this->month = month;
    }
    int getyear()
    {
        return this->year = year;
    }
    void set(int year)
    {
        this->year = year;
    }
    void displaydate()
    {
        cout << "the day=" << this->day << endl;
        cout << "the month=" << this->month << endl;
        cout << "the year=" << this->year << endl;
    }
    void acceptdate()
    {
        cout << "enter day=" << endl;
        cin >> this->day;
        cout << "enter month=" << endl;
        cin >> this->month;
        cout << "enter year=" << endl;
        cin >> this->year;
    }
    bool isLeapYear(int year)
    {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class person
{
private:
    string name;
    string addr;
    Date birth_date;
    

public:
    person()
    {
        this->name = " ";
        this->addr="";
        this-> birth_date = Date();
    }
    person(string name, string addr, Date birth_date, int day, int month, int year) :birth_date(day, month, year)
    {
        this->name = name;
        this->addr = addr;
        this->birth_date = Date();
    }
    string getname()
    {

        return this->name;
    }
    void setname(string name)
    {
        this->name = name;
    }
    string getaddr()
    {

        return this->addr;
    }
    void setaddr(string addr)
    {
        this->addr = addr;
    }
    Date getbirthdate()
    {

        return this->birth_date;
    }
    void setaddr(Date birthdate)
    {
        this->addr = addr;
    }
    void displayaddr()
    {
        cout << "personname" << this->name << endl;
        cout << "addresses=" << this->addr << endl;
        cout << "date=";
        birth_date.displaydate();
    }
    void acceptaddr()
    {
        cout << "entername=" << endl;
        cin >> this->name;
        cout << "enter addres=" << endl;
        cin >> this->addr;
        cout << "enter birthday_date=" << endl;
         birth_date.acceptdate();
    }
};
class employee{

private:

    int id;
    float sal;
    string dept;
    Date joining;

public:
    employee()
    {
        this->id = 0;
        this->sal = sal;
        this->dept = dept;
        this->joining=Date();
    }
    employee(int id, float sal, string dept, Date joining, int day, int month, int year) : joining(day, month, year)
    {
        this->id = 0;
        this->sal = sal;
        this->dept = dept;
        this->joining = Date();
    }
    int getid()
    {

        return this->id;
    }
    void setid(int id)
    {
        this->id = id;
    }
    float getsal()
    {
        return this->sal = sal;
    }
    void setsal(float sal)
    {

        this->sal = sal;
    }
    string getdept()
    {

        return this->dept;
    }
    void setdept(string dept)
    {

        this->dept;
    }
    Date getjoiningdate(Date joining)
    {

        return this->joining;
    }
    void setjoiningdate(Date joining)
    {

        this->joining = joining;
    }
    void displayemployee()
    {
        cout << "emp_id=" << this->id << endl;
        cout << "emp_sal=" << this->sal << endl;
        cout << "dept=" << this->dept << endl;
        cout << "joining_date=";
        joining.displaydate();
    }
    void acceptemployee(){
  cout << " enter employee id="<<endl;
  cin >> this->id;
  cout <<"enter emp_sal="<<endl;
  cin >> this->sal;
  cout <<"enter dept="<<endl;
  cin >> this->dept;
  cout <<"enter date of joining=";
  joining.acceptdate();
  cout<<endl;


    }
     

};
int main()
{
employee e;
e.acceptemployee();
e.displayemployee();

person p;
p.acceptaddr();
p.displayaddr();




}