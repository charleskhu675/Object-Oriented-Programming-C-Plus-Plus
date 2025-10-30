#include <iostream>
#include "RPG.h"
#include "Game.h"
using namespace std;

int main()
{
    Game::Game();

    int num_players = 10;
    Game::generatePlayers(num_players);

    Game::gameLoop();

    Game::printFinalResults();

    return 0;
}