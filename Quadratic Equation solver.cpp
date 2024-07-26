#include<cmath>
#include<iostream>
#include<iomanip>
using namespace std;
class Quadratic{
	public:
	double a,b,c;
	char variable;

	Quadratic(){
      a=1;
	  b=1;
	  c=0;
	  variable='x';
	}
	Quadratic(double a,double b,double c){
		this->a=a;
		this->b=b;
		this->c=c;
		variable='x';
	}
	void add(Quadratic q){
		this->a+=q.a;
		this->b+=q.b;
		this->c+=q.c;
	}
	void subtract(Quadratic s){
		this->a-=s.a;
		this->b-=s.b;
		this->c-=s.c;
	}
	void tostring(){
		cout<<"Quadratic equation: "<<endl<<a<<variable<<"^2"<<"+"<<b<<variable<<"+"<<c<<"=0"<<endl;
	}
    void solve(){
		double d=((b*b)-4*a*c);
		double p=sqrt(d);
		double f=(-b+p)/2*a;
		double g=(-b-p)/2*a;
		if(d<0){
			cout<<"No real roots"<<endl;
	}
	else{
	   cout<<"Roots of equation are"<<endl;
	   cout<<"x= "<<f<<endl;
	   cout<<"x= "<<g<<endl;
	}
	}
};
int main(){
   Quadratic quadratic(2,3,-4);
   quadratic.tostring();
   quadratic.solve();
   Quadratic q(12,3,4);
   quadratic.add(q);
   quadratic.tostring();

 
	return 0;
}