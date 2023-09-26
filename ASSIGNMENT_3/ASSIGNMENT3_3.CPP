/*Q3. Write a class to find volume of a Cylinder by using following members. (volume of
Cylinder=3.14 * radius * radius *height) (write a menu driven code for it and also use modular
approach)
Class having following member functions:
Cylinder()
Cylinder(double radius, double height)
getRadius()
setRadius()
getHeight()
setHeight()
getVolume()
printVolume()
Initialize members using constructor member initializer list.*/

#include <iostream>
using namespace std;
class Cylinder
{

private:
  double radius;
  double height;
  double volume;

public:
  Cylinder()
  {
    this->radius = 0;
    this->height = 0;
  }
  Cylinder(double radius, double height)
  {
    this->radius = radius;
    this->height = height;
  }
  double getRadius()
  {
    return this->radius;
  }
  void setRadius(double radius)
  {
    this->radius = radius;
  }
  double getheight()
  {
    return this->height;
  }
  void setheight(double height)
  {
    this->height = height;
  }
  double getvolume(double volume)
  {
    return 3.14 * radius * radius * height;
  }
  void setvolume(double volume)
  {
    this->volume = volume;
  }

  void accept()
  {
    cout << "enter radius" << endl;
    cin >> this->radius;
    cout << "enter height" << endl;
    cin >> this->height;
    // cout << "enter volume" << endl;
    // cin >> this->volume;
  }
  double getVolume()
  {
    return 3.14*this->radius*this->radius;
    // cin>>this->length >>this->height;
  }
  void print(){
 cout<<"volume="<<getVolume() << endl;

  }
};

enum anil
{

  EXIT,
  ACCEPT,
  GET_VOLUME,
  PRINT,
  
};

anil menu()
{
  int choice;
  cout << "*****************************" << endl;
  cout << "0.EXIT" << endl;
  // cout<<"1.CYLINDER PARAMETERLESS"<< endl;
  // cout<<"2.CYLINDER PARAMETERISED"<<endl;
  // cout<<"3.GET REDIUS"<< endl;
  // cout<<"4.SET RADIUS"<<endl;
  // cout<<"5.GET HEIGHT"<< endl;
  // cout<< "6.SET HEIGHT"<< endl;
  // cout<<"7.GET VOLUME"<< endl;
  // cout<< "8. SET VOLUME"<<endl;
  cout << "1.ACCEPT" << endl;
  cout <<"2.GET_VOLUME"<< endl;
  cout <<"3.PRINT"<< endl;
  cout << "3.enter your choice" << endl;
  cin >> choice;
  cout << "*******************" << endl;
  return anil(choice);
}

int main()
{
  Cylinder c;
  anil choice;
  while ((choice = menu()) != EXIT)
  {
    switch (choice)
    {

    // case CYLINDER_PARAMETERLESS:
    //     c.Cylinder();
    //     break;
    // case CYLINDER_PARAMETERISED:
    //     c.Cylinder(10,20);
    //     break;
    // case GET_RADIUS:
    // c.getRadius();
    // break;
    // case SET_RADIUS:
    // c.setRadius(15);
    // break;
    // case GET_HEIGHT:
    case ACCEPT:
      c.accept();
      c.print();
    
      case PRINT:
      c.print();

    default:
      // cout<<"Enter the choice";
      break;
    }
    cout << " tysm for coding" << endl;
  }
}
