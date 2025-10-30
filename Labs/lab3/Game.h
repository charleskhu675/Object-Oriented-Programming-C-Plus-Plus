//Game.h
#include <vector>
#include <set>
#include "RPG.h"
#ifndef GAME_H
#define GAME_H
using namespace std;

class Game {
    public:
        // Constructor
        Game();

        // Destructor
        ~Game();

        // Game Functions
        void generatePlayers(int n);
        int selectPlayer();
        void endRound(RPG* winner, RPG* loser, int loserIndex);
        void battleRound();
        void gameLoop();
        void printFinalResults();

    private:
        vector<RPG*> players;
        set<int> live_players;
};
#endif