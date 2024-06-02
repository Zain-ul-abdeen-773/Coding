#include <iostream>
using namespace std;

class overloading{
    public:
    double real;
    double imaginary;
    overloading(){
        real=0;
        imaginary=0;
    }
    overloading(double real,double imaginary){
        this->real=real;
        this->imaginary=imaginary;
    }
overloading operator + (overloading &O ){
    overloading temp;
    temp.real=real+O.real;
    temp.imaginary=imaginary+O.imaginary;
 return temp;
}
overloading operator - (overloading &O ){
    overloading temp;
    temp.real=real-O.real;
    temp.imaginary=imaginary-O.imaginary;
 return temp;
}
overloading operator * (overloading &O ){
    overloading temp;
    temp.real=(real*O.real)+((-1)*(imaginary*O.imaginary));
    temp.imaginary=(imaginary*O.real)+(real*O.imaginary);
 return temp;
}
overloading operator / (overloading &O ){
    overloading temp;
    temp.real=(((real*O.real)+(imaginary*O.imaginary))/ ((O.real*O.real)+(O.imaginary*O.imaginary)));
    temp.imaginary=(((imaginary*O.real)-(real*O.imaginary))/((O.real*O.real)+(O.imaginary*O.imaginary)));
 return temp;
}
void display(){
    cout<<" "<<real<<"+"<<imaginary<<"i"<<endl;
}
};
int main (){
   
   overloading e(7,5);
   overloading d(5,2);
   overloading v;
   cout<<" Addition: "<<endl;
   v=e+d;
   v.display();
   v=e-d;
   cout<<" Subtraction: "<<endl;
   v.display();
   v=e*d;
   cout<<" Multiplication: "<<endl;
   v.display();
   v=e/d;
   cout<<" Division: "<<endl; 
   v.display();

    return 0;
}

