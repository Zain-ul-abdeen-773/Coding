#include<iostream>
using namespace std;
class Book{
public:
 double bookid;
 int pages;
 double price;
 void fill(){
    cout<<"Enter book id: "<<endl;
    cin>>bookid;
    cout<<"Enter pages: "<<endl;
    cin>>pages;
    cout<<"Enter price: "<<endl;
    cin>>price;
 }
 void show(){
    cout<<"Book id: "<<bookid<<endl;
    cout<<"Book price: "<<price<<endl;
    cout<<"Book pages: "<<pages<<endl;
 }
 double getprice(){
    return price;
 }

};
int main(){
    Book b1[100];
    Book b2;
    b1[0].fill();
    b2.fill();
    cout<<"BOOK 1"<<endl;
    b1[0].show();
    cout<<"Book 2"<<endl;
    b2.show();

}