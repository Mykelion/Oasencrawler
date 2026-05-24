#ifndef GAMEWORLD_H
#define GAMEWORLD_H
#include "character.h"
#include "Field.h"
class gameworld
{
    public:
        char gameboard[5][5];
        gameworld();
        gameworld(character& player);
        void printgameworld();
        int checkgameover(character& player);
        int getrelicscount();
        virtual ~gameworld();

    protected:

    private:

    int relicscount;
};

#endif // GAMEWORLD_H
