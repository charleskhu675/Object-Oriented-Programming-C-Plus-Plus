#include <string>
#ifndef Pet_H
#define Pet_H
using namespace std;

class Pet {
    public:
        Pet();
        Pet(string name, int age, string owner, bool isHouseTrained);

        void updateName(string new_name);
        void updateAge();       //increments age by one
        void updateOwner(string adopter);
        void setHouseTrained(); //set isHouseTrained to true

        string getName() const;
        int getAge() const;
        string getOwner() const;
        bool getisHouseTrained() const;

    private:
        string name;
        int age;
        string owner;
        bool isHouseTrained;
};
#endif