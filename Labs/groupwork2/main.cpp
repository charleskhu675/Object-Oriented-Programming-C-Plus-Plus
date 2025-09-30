#include <iostream>
#include "Pet.h"
using namespace std;

int main() {
    
    Pet p1 = Pet();
    Pet p2 = Pet("Snoopy", 3, "Charlie", true);

    cout << "Pet: " << p1.getName() << endl;
    cout << "Age: " << p1.getAge() << endl;
    cout << "Owner: " << p1.getOwner() << endl;
    cout << "House Trained? " << p1.getisHouseTrained() << endl;

    cout << "\nPet: " << p2.getName() << endl;
    cout << "Age: " << p2.getAge() << endl;
    cout << "Owner: " << p2.getOwner() << endl;
    cout << "House Trained? " << p2.getisHouseTrained() << endl;

    p2.updateName("Scooby");
    p2.updateAge();
    p2.updateOwner("Shaggy");
    p2.setHouseTrained();

    cout << "\nPet: " << p2.getName() << endl;
    cout << "Age: " << p2.getAge() << endl;
    cout << "Owner: " << p2.getOwner() << endl;
    cout << "House Trained? " << p2.getisHouseTrained() << endl;

    return 0;
}