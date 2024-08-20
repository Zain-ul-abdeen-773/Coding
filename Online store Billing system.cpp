#include<iostream>
#include<vector>
using namespace std;
class Product{
    public:
    string name;
    float price;
    int quantity;

    Product(){
        name="";
        price=0.0;
        quantity=0;
    }
     
    Product(string name,float price,int quantity){
        this->name=name;
        this->price=price;
        this->quantity=quantity;
    }
    
    virtual double Totalprice()=0;
    virtual void output()=0;
};

class Electronics: public Product{
    public:
    Electronics(string e_name,float e_price,int e_quantity):Product(e_name,e_price,e_quantity){

    }
    double Totalprice(){
        double rest=quantity*price;
    return rest;
    }
    void output(){
        cout<<"Name: "<<name<<", "<<"Price: $"<<price<<", "<<"Quantity: "<<quantity<<endl;
    }
};
class Clothing:public Product{
    public:
    Clothing(string c_name,float c_price,int c_quantity):Product(c_name,c_price,c_quantity){

    }
    double Totalprice(){
        double res=quantity*price-((quantity*price)*0.10);
        return res;
    }
    void output(){
        cout<<"Name: "<<name<<", "<<"Price: $"<<price<<", "<<"Quantity: "<<quantity<<endl;
    }
};
class Customer{
    public:
    string name;
    string contactnum;
    string loyaltylevel;
    Customer(string name,string contactnum,string loyaltylevel){
        this->name=name;
        this->contactnum=contactnum;
        this->loyaltylevel=loyaltylevel;
    }
    void get_name(){
         cout<<"Customer Name: "<<name<<endl;
    }
    void get_num(){
         cout<<"Customer Number: "<<contactnum<<endl;
    }
    void get_level(){
         cout<<"Loyalty Level:"<<loyaltylevel<<endl;
    }
    double applydiscount(double total){
        double dis;
        if(loyaltylevel=="Gold"){
            dis=total-(total*0.10);
        }
        else if(loyaltylevel=="Silver"){
            dis=total-(total*0.05);
        }
        else{
            dis=total;
        }
        cout<<"Total amount: $"<<dis<<endl;
        
        return dis;

    }
    };
    
    class Billing{
        public:
        vector<Product*>cart;
        void addtocart(Product *product){
            cart.push_back(product);
            product->output();
        }
        void generatereceipt(Customer &customer){
            cout<<"--------Receipt--------"<<endl;
            customer.get_name();
            customer.get_num();
            customer.get_level();
        }
    };
int main(){
   Customer c("John Doe", "1234567890", "Gold");
    Electronics e("Laptop", 999.99, 2);
    Clothing clothe("Shirt", 29.99, 3);
    Billing b;
    b.generatereceipt(c);
    cout << "---------Products--------" << endl;
    b.addtocart(&e);
    b.addtocart(&clothe);
    double total = e.Totalprice() + clothe.Totalprice();
    cout << "-------------------------" << endl;
    double final_amount = c.applydiscount(total);
 

    return 0;
}
