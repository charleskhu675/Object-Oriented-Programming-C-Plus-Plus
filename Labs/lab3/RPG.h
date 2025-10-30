//RPG.h
#include <string>
#ifndef RPG_H
#define RPG_H
using namespace std;
const int INVENTORY_SIZE = 10;
const float HIT_FACTOR = 0.05;
const int MAX_HITS_TAKEN = 3;
class RPG {
    public:
        //constructors
        RPG();
        RPG(string name, int hits_taken, float luck, float exp, int level);

        //mutators
        bool isAlive() const;
        void setHitsTaken(int new_hits);

        /** @brief updates name
         *
         * @param name
         *
         */
        void setName(string name);

        /** @brief increase RPG's experience by 50
         * After updating, if RPG's experience is >= 100.0, increase
         * RPG's level by 1, reset their experience to 0, and increase
         * their luck by 0.1
         */
        void updateExpLevel();

        /** @brief Hits or misses the opponent at random. Luck is a form of defense.
         * The higher the opponent's luck, the more likely the attack will miss.
         * If the attack is a hit, opponent's hits taken should increment by 1.
         * Add last couple of lines to complete
         *
         * @param opponent: RPG *
         */
        void attack(RPG * opponent);
        
        /** @brief Prints in the format:
         * "Name: NPC_X     Hits Taken: X   Luck: 0.X00000  Exp: X0.00000   Level: X    Status: Alive or Dead"
         */
        void printStats();
        
        /** @brief Destroy the RPG::RPG object
         * Already completed
         */
        ~RPG();
        
        //accessors
        string getName() const;
        int getHitsTaken() const;
        float getLuck() const;
        float getExp() const;
        int getLevel() const;

        
    private:
        string name;
        int hits_taken;
        float luck;
        float exp;
        int level;
        
};
#endif