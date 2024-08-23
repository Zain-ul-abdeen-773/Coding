
#include <iostream> 
#include <string> 
using namespace std; 

struct Animal { 
    string animalID; 
    string name; 
    string species; 
    int age; 
    string habitat; 
}; 

class ZooManager { 
 private: 
    static const int MAX_ANIMALS = 10; 
    Animal animals[MAX_ANIMALS]; 
    int totalAnimals; 
 public: 
    ZooManager(){ 
        totalAnimals = 3; 
        animals[0] = {"A001", "Lion", "Panthera leo", 5, "Savanna"}; 
        animals[1] = {"A002", "Penguin", "Spheniscidae", 2, "Antarctica"}; 
        animals[2] = {"A003", "Elephant", "Loxodonta africana", 10, "Jungle"}; 
    } 

    void displayAnimalInfo(string id_check){ 
        for (int i = 0; i < totalAnimals; ++i) { 
            if (animals[i].animalID == id_check) { 
                cout << "AnimalID: " << animals[i].animalID << ", Name: " << animals[i].name 
                     << ", Species: " << animals[i].species << ", Age: " << animals[i].age 
                     << ", Habitat: " << animals[i].habitat << endl; 
                return; 
            } 
        } 
        cout << "Animal with ID " << id_check << " not found." << endl; 
    } 
   
    void addAnimal() { 
        if (totalAnimals < MAX_ANIMALS) { 
            cout << "Enter AnimalID: "; 
            cin >> animals[totalAnimals].animalID; 
            cout << "Enter Name: "; 
            cin >> animals[totalAnimals].name; 
            cout << "Enter Species: "; 
            cin >> animals[totalAnimals].species; 
            cout << "Enter Age: "; 
            cin >> animals[totalAnimals].age; 
            cout << "Enter Habitat: "; 
            cin >> animals[totalAnimals].habitat; 
 
            totalAnimals++; 
            cout << "Animal Added Successfully." << endl; 
        } else { 
            cout << "Cannot add more animals." << endl; 
        } 
    } 
    void removeAnimal(string id_check) { 
        for (int i = 0; i < totalAnimals; ++i) { 
            if (animals[i].animalID == id_check) { 
                for (int j = i; j < totalAnimals - 1; ++j) { 
                    animals[j] = animals[j + 1]; 
                } 
                totalAnimals--; 
                cout << "Animal Removed Successfully." << endl; 
                return; 
            } 
        } 
        cout << "Animal with ID " << id_check << " not found." << endl; 
    } 
    friend void displayZooDetails(ZooManager& zooManager); 
}; 

void displayZooDetails(ZooManager& zooManager) { 
    cout << "\nZoo Details:" << endl; 
    cout << "Total Animals: " << zooManager.totalAnimals << endl; 
    cout << "\nAnimal List:" << endl; 
    for (int i = 0; i < zooManager.totalAnimals; ++i) { 
        cout << i + 1 << ". " << zooManager.animals[i].name << " (ID: " << zooManager.animals[i].animalID << ")" << endl; 
    } 
} 
int main() { 

    ZooManager z; 

    cout << "Displaying Information about Animal with ID A002:" << endl; 
    z.displayAnimalInfo("A002"); 
  
    cout << "\nAdding a New Animal:" << endl; 
    z.addAnimal(); 
   
    cout << "\nRemoving Animal with ID A001..." << endl; 
    z.removeAnimal("A001"); 

    displayZooDetails(z); 
    return 0; 
}