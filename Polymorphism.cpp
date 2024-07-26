
#include<iostream>
using namespace std;

class Vehicle{
  public:
     unsigned int year;
     string brand;
     
     Vehicle(unsigned int year,string brand){
        this->year=year;
        this->brand=brand;
     }
     virtual void Display()=0;
     virtual void Calculatemileage()=0;  
};

class Car:public Vehicle{
public:
     string type;
     Car(unsigned int year,string brand,string type):Vehicle(year,brand){
      this->type=type;
       }
     void Display(){
        cout<<"Type: "<<type<<endl;
        cout<<"Brand: "<<brand<<endl;
        cout<<"Year: "<<year<<endl;
     }
     void Calculatemileage(){
        cout<<"Mileage: "<<year*100<<endl; //rough formula of calculating mileage
     }
};

class Truck:public Vehicle{
  public:
  string type;
     Truck(unsigned int year,string brand,string type):Vehicle(year,brand){
        this->type=type;
     }
     void Display(){
        cout<<"Type: "<<type<<endl;
        cout<<"Brand: "<<brand<<endl;
        cout<<"Year: "<<year<<endl;
     }
     void Calculatemileage(){
        cout<<"Mileage: "<<year*50<<endl;
     }
};

class Motorbike:public Vehicle{
  public:
     string type;
     Motorbike(unsigned int year,string brand,string type):Vehicle(year,brand){
        this->type=type;
     }
     void Display(){
        cout<<"Type: "<<type<<endl;
        cout<<"Brand: "<<brand<<endl;
        cout<<"Year: "<<year<<endl;
     }
     void Calculatemileage(){
        cout<<"Mileage: "<<year*200<<endl;
     }
};
int main(){
    Car c1(2010,"BMW","Sedan");
    Truck t1(2010,"Ford","Pickup");
    Motorbike m1(2020,"Honda","100cc");
    Vehicle *v1[]={&c1,&m1,&t1};

    for(int i=0;i<3;i++){
        v1[i]->Display();
        v1[i]->Calculatemileage();
        cout<<"------------------"<<endl;
        }
     return 0;
}