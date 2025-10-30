#include <iostream>
#include "RPG.h"
#include "Game.h"
using namespace std;

int main()
{
    Game::Game();

    int num_players = 10;
    generatePlayers(num_players);

    gameLoop();

    printFinalResults();

    return 0;
}