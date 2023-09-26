
/*Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
collected. Model this tollbooth with a class called tollbooth.
The two data items are a type unsigned int to hold the total number of cars, and a type double to
hold the total amount of money collected.
A constructor initializes all data members to 0. A member function called payingCar() increments
the car total and adds 0.50 to the cash total. An other function, called nopayCar()
increments the car total but adds nothing to the cash total. Finally, a member function called
printOnConsole() displays the two totals and number of paying as well as non paying cars total.
( write a menu driven code for it)*/

#include <iostream>
using namespace std;
class Tollbooth
{
private:
    unsigned int ncars;
    double amt;


public:
    Tollbooth()
    {
        this->ncars = 0;
        this->amt = 0;
        
    }
    void payingcar()
    {
        this->ncars = this->ncars + 1;
        this->amt = this->amt + 0.50;
    }

    void nopaycar()
    {
        this->ncars = this->ncars + 1;
        this->amt=this->amt +0;
    }

    void printonconsole()
    {
        
        cout << "total number ncars=" << this->ncars << endl;
        cout << "total amt=" << this->amt << endl;
    }
};
enum emenu
{
    EXIT,
    PAYING_CARS,
    NOPAY_CARS,
    TOTAL,
    PRINTON_CONSOLE
};
emenu master()
{
    int choice;
    cout << "**************************" << endl;
    cout << "0.EXIT" << endl;
    cout << "1.PAYING_CARS" << endl;
    cout << "2.NOPAY_CARS" << endl;
    cout << "enter your choice";
    cin >> choice;
    cout << "**************************" << endl;
    return emenu(choice);
};
int main()
{
    Tollbooth t;
    emenu choice;
    while ((choice = master()) != EXIT)
    {
        switch (choice)
        {
        case PAYING_CARS:
            t.payingcar();
           t.printonconsole();
            break;
        case NOPAY_CARS:
            t.nopaycar();
            t.printonconsole();
            break;
        
        default:
            break;
        }
        cout << "tysm for coding" << endl;
    }
}
