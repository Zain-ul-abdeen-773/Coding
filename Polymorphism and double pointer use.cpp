
#include<iostream>
using namespace std;
static int employ_count=0;
class Employee{
    public:
    double salary;
    int vacancy_days;
    Employee(double salary=0,int vacancy_days=0){
        this->salary = salary;
        this->vacancy_days = vacancy_days;
    }
double getsalary(){
     if(vacancy_days==0){
         double bonus=(salary/10);
         return bonus+salary;
     }
     else{
         return salary;
     }
}
int vancantdays(){
    return vacancy_days;
}
};

class Engineer:public Employee{
    public:
    Engineer(double a,int b):Employee(a,b){
        employ_count++;
    }
};
class Manager:public Employee{
    public:
    Manager(double a,int b):Employee(a,b){
        employ_count++;
    }
};
class Saleperson:public Employee{
    public:
    Saleperson(double a,int b):Employee(a,b){
        employ_count++;
    }
};
void displaysalaries(Employee **e,int count){
    for(int i=0;i<count;i++){
        cout<<"Salary of Employee "<<i+1<<" is :"<<e[i]->getsalary()<<endl;
    }
}
int main(){
Manager m(24000,4);
Engineer e(34000,6);
Saleperson s(28000,3);
Employee *y[]={ &m, &e, &s};
cout<<"Number of employeees are: "<<employ_count<<endl;
displaysalaries(y,employ_count);
    return 0;
}