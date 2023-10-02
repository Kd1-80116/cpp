/*Q2. Implement following classes. Test all functionalities in main() of each created class. Note that
employee is inherited into manager and salesman. Insted of char[] use string datatype.*/
#include <iostream>
using namespace std;
class Employee
{
private:
    int id;
    float sal;
public:
   Employee()
    {
        cout << "parameterless constructor of base class" << endl;
        this->id = 0;
        this->sal = 0;
    }
    Employee(int id, float sal)
    {
        this->id = id;
        this->sal = sal;
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
        return this->sal;
    }

    void setsal(int sal)
    {
        this->sal = sal;
    }

    void Employeedisplay()
    { 
    cout <<"id="<< this->id<<endl;
    cout <<"salary"<< this->sal<<endl;
    
    }
    void Employeeaccept()
    {
        cout <<"enter id"<<endl;
     cin >>this->id;
     cout <<"enter salary"<<endl;
     cin>> this->sal;

    }
};

class Manger : virtual public Employee
{
private:
    float bonus;
public: 
    Manger()
    {
        cout << "paramterless_constructor manger" << endl;
        this->bonus = 0;
    }

    Manger(float bonus, int id, float sal)
    {  
        cout <<"inside manger"<<endl;
        this->bonus = bonus;
        // this->id = id;
        // this->sal = sal;
    }
    float getbonus()
    {
        return this->bonus;
    }

    void setbonus(float bonus)
    {
        this->bonus = 100;
    }

 protected:   
  void displayManager()
  {   
    cout <<" bonus="<<this->bonus<<endl;
    
 }
    void acceptManger()
    { 
        cout <<" enter bonus="<< endl;
      cin >>this->bonus;

    }
    
  
   
};

class Salesman : virtual public Employee
{
   
private: float comm;

public:
    Salesman()
    {
        cout << "parameterless_ constructor saleman"<< endl;
          this->comm = 0;
    }
    Salesman(float comm)
    {
     this->comm = comm;
    }
    float getcomm()
    {
        return this->comm;
    }

    void setcomm(float comm)
    {

        this->comm = comm;
    }
  protected:
    void Salesmandisplay()
    {
        cout <<"comm"<< this->comm<<endl;

    }
    void Salesmanaccept()
    {
        cout <<"enter comm="<<endl;
        cin>>this->comm;
    }
 };

class Sales_manger : public Manger, public Salesman
{
public:
    Sales_manger()
    { 
    }
    Sales_manger(int id,float sal,float bonus,float comm)
    { 

    }
    void display()
    {
         Employee::Employeedisplay();
         Manger::displayManager();
        Salesman::Salesmandisplay();


    }
    void accept()
    {
        Employee:Employeeaccept();
        Manger::acceptManger();
        Salesman::Salesmanaccept();

    }
};

int main()
{
    Sales_manger c;

    c.accept();
    c.display();
}
