#include <iostream>
#include "gameworld.h"
#include "character.h"
#include "Field.h"
#include "Danger.h"
#include "Fountain.h"
#include "Relic.h"

int main()
{
    character player;
    gameworld game(player);
    game.printgameworld();
    Field emptyfield;
    Danger danger;
    Fountain fountain;
    Relic relic;
    std::cout << "Player is at row: " << player.gety()+1 << " column: " << player.getx()+1 << std::endl;
    std::cout << "HP: " << player.gethealth() << std::endl;
    std::cout << "Relics " << player.getrelicpoints() << std::endl;

    while(game.checkgameover(player))
    {
        int xbefore = player.getx();
        int ybefore = player.gety();
        player.movecharacter();
        game.gameboard[ybefore][xbefore] = 'E';
        Field *Feld;


        if(game.gameboard[player.gety()][player.getx()] == 'E')
        {
            Feld = &emptyfield;
            Feld->interact(player);
        }
        else if(game.gameboard[player.gety()][player.getx()] == 'F')
        {
            Feld = &fountain;
            Feld->interact(player);
        }
        else if(game.gameboard[player.gety()][player.getx()] == 'D')
        {
            Feld = &danger;
            Feld->interact(player);
        }
        else if(game.gameboard[player.gety()][player.getx()] == 'R')
        {
            Feld = &relic;
            Feld->interact(player);
        }
        game.gameboard[player.gety()][player.getx()] = 'P';
        std::cout << "Player is at row: " << player.gety()+1 << " column: " << player.getx()+1 << std::endl;
        std::cout << "HP: " << player.gethealth() << std::endl;
        std::cout << "Relics" << player.getrelicpoints() << std::endl;
        game.printgameworld();

    }
    if(player.getrelicpoints() == game.getrelicscount())
    {
        std::cout << "Congratulations You Win!" << std::endl;
    }
    else if(player.gethealth() == 0)
    {
        std::cout << "HAHA YOU LOSE!" << std::endl;
    }


    return 0;
}
