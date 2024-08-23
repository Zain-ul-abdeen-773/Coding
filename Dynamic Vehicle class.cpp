#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string licensePlate;
    string make;
    string model;
    int year;
};

int main() {
    int max = 2;
    Vehicle* allRecords = new Vehicle[max];
    int n = 0; 
    char check;

    do {
        cout << "Want to enter Another Vehicle?? (y/n)" << endl;
        cin >> check;

        if (check == 'y' || check == 'Y') {
            max++;
            Vehicle* temp = new Vehicle[max];

            for (int i = 0; i < n; i++) {
                temp[i] = allRecords[i];
            }

            delete[] allRecords;
            allRecords = temp;

            cout << "Enter another Vehicle's Info:" << endl;
            cout << "Enter Make: ";
            cin >> allRecords[n].make;
            cout << "Enter Model: ";
            cin >> allRecords[n].model;
            cout << "Enter License: ";
            cin >> allRecords[n].licensePlate;
            cout << "Enter year: ";
            cin >> allRecords[n].year;
            n++;
        } else {
            break;
        }
    } while (check == 'y' || check == 'Y');

    cout << endl << "ALL Vehicle Records:" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Record " << i + 1 << ": " << endl;
        cout << "License: " << allRecords[i].licensePlate << endl;
        cout << "Model: " << allRecords[i].model << endl;
        cout << "Make: " << allRecords[i].make << endl;
        cout << "Year: " << allRecords[i].year << endl;
    }

    delete[] allRecords;  
    return 0;
}