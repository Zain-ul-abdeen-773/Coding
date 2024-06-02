#include<iostream>
using namespace std;

class Result{
public:
 int rollno;
 string name;
 double marks[3];
 void input(){
    cout<<"Enter Rollno: "<<endl;
    cin>>rollno;
    cout<<"Enter name: "<<endl;
    cin>>name;
    cout<<"Enter marks of three subjects: "<<endl;
    for (int i=0;i<3;i++){
        cin>>marks[i];
    }
 }
 void show(){
    cout<<"Name: "<<name<<endl;
    cout<<"Rollno: "<<rollno<<endl;
    cout<<"Marks: "<<endl;
    for(int h=0;h<3;h++){
        cout<<marks[h]<<endl;
    }

 }
 double total(){
    double sum=0;
    for(int i=0;i<3;i++){
        sum=sum+marks[i];
 }
 return sum;
 }
 double average(){
    double avg=total()/3;
    return avg;}

};
int main(){
    Result r1;
    r1.input();
    r1.show();
    cout<<"Total marks: "<<r1.total()<<endl;
    cout<<"Average marks: "<<r1.average()<<endl;
    

}