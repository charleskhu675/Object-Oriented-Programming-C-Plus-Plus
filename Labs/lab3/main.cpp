//main.cpp
#include <iostream>
#include "RPG.h"
using namespace std;

int main() {

    RPG p1 = RPG("Wiz", 0, 0.2, 60, 1);
    RPG p2 = RPG();

    printf("%s Current Stats\n", p1.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\n", p1.getHitsTaken(), p1.getLuck(), p1.getExp(), p1.getLevel());

    printf("%s Current Stats\n", p2.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\n\n", p2.getHitsTaken(), p2.getLuck(), p2.getExp(), p2.getLevel());

    p2.setHitsTaken(3);

    cout << p1.getName() << " hits taken: " << p1.getHitsTaken() << endl;
    cout << p2.getName() << " hits taken: " << p2.getHitsTaken() << endl;

    cout << "0 = dead, 1 = alive\n";
    cout << p1.getName() << " " << p1.isAlive() << endl;
    cout << p2.getName() << " " << p2.isAlive() << endl;

    return 0;
}