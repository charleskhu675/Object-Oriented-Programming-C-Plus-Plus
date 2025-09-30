#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;

//default constructor
Pet::Pet() {
    name = "Pet";
    age = 1;
    owner = "N/A";
    isHouseTrained = false;
}

//overloaded constructor
Pet::Pet(string name, int age, string owner, bool isHouseTrained) {
    this->name = name;
    this->age = age;
    this->owner = owner;
    this->isHouseTrained = isHouseTrained;
}

//mutator functions
void Pet::updateName(string new_name) {
    name = new_name;
}
void Pet::updateAge() {
    age += 1;
}     //increments age by one
void Pet::updateOwner(string adopter) {
    owner = adopter;
}
void Pet::setHouseTrained() {
    isHouseTrained = true;
}//set isHouseTrained to true

//accessor functions
string Pet::getName() const {
    return name;
}
int Pet::getAge() const {
    return age;
}
string Pet::getOwner() const {
    return owner;
}
bool Pet::getisHouseTrained() const {
    return isHouseTrained;
}