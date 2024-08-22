#include <iostream>
using namespace std;

int main() {
    string choice;
    int quantity1;

    string title[3] = {"The Great Gatsby", "To kill a Mocking Bird", "1984"};
    string author[3] = {"F. Scout Fitzgerald", "Harper Lee", "George Orwell"};
    int quantity[3] = {10, 8, 15};

    cout << "Current Inventory: " << endl;
    cout << "------------------\n";

    for (int i = 0; i < 3; i++) {
        cout << "Title: " << title[i] << endl;
        cout << "Author: " << author[i] << endl;
        cout << "Quantity: " << quantity[i] << endl;
        cout << "-----------------------\n";
    }

    cout << "Enter the title of book you want to buy: " << endl;
    cin >> choice;

    cout << "Enter quantity you want: " << endl;
    cin >> quantity1;
    
    if (choice == "The Great Gatsby") {
        if (quantity1 > quantity[0]) {
            cout << "Not enough Books" << endl;
        } else {
            quantity[0] -= quantity1;
            cout<<"Purchase successfull! "<<endl;
            cout<<"Amount Due: $"<<quantity1*10<<endl;
        }
    } else if (choice == "To kill a Mocking Bird") {
        if (quantity1 > quantity[1]) {
            cout << "Not enough Books" << endl;
        } else {
            quantity[1] -= quantity1;
            cout<<"Purchase successfull! "<<endl;
            cout<<"Amount Due: $"<<quantity1*10<<endl;
        }
    } else if (choice == "1984") {
        if (quantity1 > quantity[2]) {
            cout << "Not enough Books" << endl;
        } else {
            quantity[2] -= quantity1;
            cout<<"Purchase successfull! "<<endl;
            cout<<"Amount Due: $"<<quantity1*10<<endl;
        }
    } else {
        cout << "Invalid Book name!" << endl;
    }
    

    cout << "\nUpdated Inventory: " << endl;
    cout << "------------------\n";

    for (int i = 0; i < 3; i++) {
        cout << "Title: " << title[i] << endl;
        cout << "Author: " << author[i] << endl;
        cout << "Quantity: " << quantity[i] << endl;
        cout << "-----------------------\n";
    }

    return 0;
}