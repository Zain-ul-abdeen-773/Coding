#include<iostream>
using namespace std;
class Book{
    private:
    string title;
    string author;
    double price;

    public:
    Book(){
        title="";
        author="";
        price=0.0;
    }
    Book(string title,string author,double price){
        this->author=author;
        this->price=price;
        this->title=title;
    }
    void displayBookinfo(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: $"<<price<<endl;
        cout<<"-------------------"<<endl;
    }
    string gettitle(){
        return title;
    }
    double getprice(){
        return price;
    }

};
class ShoppingCart{
    private:
    const static int maxitems=5;
    Book items[maxitems];
    int itemcount;

    public:
    ShoppingCart(){
        itemcount=0;
    }
    void addtocart( Book &book){
        if(itemcount<maxitems){
            items[itemcount++]=book;
            cout<<"Added "<<book.gettitle()<<" to the shopping cart."<<endl;
        }
        else{
            cout<<"Shopping cart is full!"<<endl;
        }
    }
    void displaycart(){
        cout<<"Shopping cart Contents:"<<endl;
        for(int x=0;x<itemcount;x++){
            cout<<x+1<<". ";
            items[x].displayBookinfo();
        }
    }
};

int main(){

    Book b1("The Great Gatsby","F. Scott Fitz",15.99);
    Book b2("1984","Harper Lee",12.99);
    Book b3("Harry Potter","Rowling",9.99);
    Book b4("To kill a mocking bird","George orwell",19.99);
    Book b5("Catcher in the rye","Salinger",14.99);
    Book b6("Narvik","Mussolini",17.99);
    ShoppingCart s1;
    s1.addtocart(b1);
    s1.addtocart(b2);
    s1.addtocart(b3);
    s1.addtocart(b4);
    s1.addtocart(b5);
    s1.addtocart(b6);
    s1.displaycart();
return 0;
}