#include "gameworld.h"
#include <iostream>
#include <time.h>
gameworld::gameworld()
{

}
gameworld::gameworld(character& player)
{
    srand(time(NULL));
    relicscount = 0;
    for(int y = 0; y < 5; y++)// je höher y desto niedriger die zeile y= 1 ist zweite zeile
    {
        for(int x = 0; x < 5; x++)
        {

            int number = std::rand()%10;
            if(number > 0 && number <= 3)
            {
                gameboard[y][x] = 'E';//Empty;
            }
            else if(number >= 4 && number <= 7)
            {
                gameboard[y][x] = 'D';//Danger
            }
            else if(number == 8)
            {
                gameboard[y][x] = 'F';//Fountain
            }
            else
            {
                gameboard[y][x] = 'R';//Relic
                relicscount++;
            }
        }
    }
    while(relicscount < 1)
        {
            int numberx = std::rand()%5;
            int numbery = std::rand()%5;
            if(gameboard[numbery][numberx] == 'E')
            {
                gameboard[numbery][numberx] = 'R';
                relicscount++;
            }
        }
    gameboard[player.gety()][player.getx()] = 'P';//Player
}

void gameworld::printgameworld()
{
    for(int y = 0; y < 5; y++)
    {
        for(int x = 0; x < 5; x++)
        {
            std::cout << gameboard[y][x];
        }
        std::cout << '\n';
    }
}
int gameworld::getrelicscount()
{
    return relicscount;
}
int gameworld::checkgameover(character& player)
{
    if(player.getrelicpoints() == getrelicscount() || player.gethealth() == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
gameworld::~gameworld()
{
    //dtor
}
