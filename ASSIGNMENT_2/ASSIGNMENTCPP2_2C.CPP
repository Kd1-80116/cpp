/*2. Write a class Address. Implement constructors, getters, setters, accept(), and display() methods.
Instead of char[] use string datatype*/

#include<iostream>
using namespace std;
 class Address {
 private:   
    string building;
    string street;
    string city;
    int pin;
   public: 
    Address(){
        this->building="tree";
        this->street="peth";
        this->city="purna";
        this->pin=10;
    }
    Address(string building,string street,string city,int pin)
    {
        this->building=building;
        this->street=street;
        this->city=city;
        this->pin=pin;
    }
    void acceptAddress(){
        cout<<"enter name of building,street,city,pin";
        cin>> this->building>>this->street>>this->city>> this->pin;
    }
    void printAddress(){
        cout<<"Address="<<this->building<<this->street<<this->city<<this->pin<<endl;
    }
    string getbuilding(){
        return this->building;
    }
     string getstreet(){
        return this->street;
     }
     string getcity(){
        return this->city;
     }
     int getpin(){
        return this->pin;
     }
     void setbuilding(string building){
        this->building=building;
     }
     void setstreet(string street){
        this->street=street;
     }
     void setcity(string city){
        this->city=city;
     }
     void setpin(int pin){
        this->pin=pin;
     }

 };
 int main(){
   Address t1;
   Address t2("temple","mrkt"," nanded",10);
   t2.printAddress();
   t2.acceptAddress();
   t2.getbuilding();
   t2.getstreet();
   t2.getcity();
   t2.getpin();
   t2.setbuilding("calssrrom");
   t2.setstreet("dagdichal");
   t2.setcity("wadi");
   t2.setpin(16);

 }   

    


    





 