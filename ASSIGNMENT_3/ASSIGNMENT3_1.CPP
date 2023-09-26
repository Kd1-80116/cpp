/*Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide necessary constructors.*/
#include<iostream>
using namespace std;
class Volume{
 
 private: double length;
 double width;
 double height;
 public:


 Volume (){
     this->length=length;
     this->width=width;
     this->height=height;
     }
     void acceptVolume(){
      cout <<" enter length=";
      cin >> this->length;
      cout <<"enter the width";
      cin >>this->width;
      cout <<"enter height";
      cin >> this->height;
     }
     void displayVolume(){
        cout << this->length <<','<<this->width <<','<<this->height<< endl;
     }
        double calculate(){
            return length*width*height;
        }
};
 enum emenu {
    EXIT ,
    VOLUME,
    ACCEPTVOLUME,
    DISPLAYVOLUME,
    CALCULATE


 };
 emenu master(){
int choice;
cout << "**************************" << endl;
cout <<"0.EXIT"<<endl;
cout <<"1.VOLUME"<<endl;
cout <<"2.ACCEPTVOLUME"<<endl;
cout <<"3.DISPLAYVOLUME"<< endl;
cout <<"4.CALCULATE"<< endl;
cout <<"enter your choice";
cin >> choice;
cout << "**************************" << endl;
return emenu(choice);
 }
 int main(){
     Volume v;
     emenu choice;
     while((choice =master())!=EXIT){
  switch(choice){
case VOLUME: 
break;
case ACCEPTVOLUME:v.acceptVolume();
break;
case DISPLAYVOLUME: v.displayVolume();
break;
case CALCULATE: cout << v.calculate()<<endl;
break;
default:
cout<< "ur enter wrong choice"<<endl;
break;
  }
     }

 cout<<"ty for docoding"<< endl;


  }


     




 



 

     





