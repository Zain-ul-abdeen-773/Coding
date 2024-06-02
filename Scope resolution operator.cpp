#include<iostream>
using namespace std;
class Box{
    private:
    double length;
    double width;
    double height;
    public:
    void setlength(double );
    void setwidth(double );
    void setheight(double );
    double getvolume();
    

};
void Box::setlength(double len){
    length=len;
}
void Box::setwidth(double wid){
    width=wid;
}
void Box::setheight(double hei){
    height=hei;
}
double Box::getvolume(){
    double volume=length*height*width;
    cout<<"Volume: ";
    return volume;
}
int main(){

    Box b1;
    Box b2;
    double x;
    double d;
    double f;
    cout<<" enter height:"<<endl;
    cin>>x;
    cout<<" enter length:"<<endl;
    cin>>d;
    cout<<" enter width:"<<endl;
    cin>>f;
    b1.setlength(x);
    b1.setwidth(d);
    b1.setheight(f);

    b2.setlength(2);
    b2.setwidth(3);
    b2.setheight(6);
    double vol=b1.getvolume();
    cout<<vol<<endl;
    vol=b2.getvolume();
    cout<<vol<<endl;

return 0;
}