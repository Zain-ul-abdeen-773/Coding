
#include<iostream>
using namespace std;
class A{
    public:
    int d;
    void assignvalue(int f){
    j= 4;
    d= 9;
    cout<<j<<endl<<d<<endl;
    }
    private:
    int g;
    protected:
    int j;
};
class B: public A{
    public:
    void assignvalue(int j,int d) {
      //this->assignvalue(3);
    j= 45;
    d= 90;
    cout<<j<<endl<<d<<endl;
    }
};

int main(){

 A a;
  a.assignvalue(4);
 B b;
  b.assignvalue(3,5);

    return 0;
}