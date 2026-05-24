#include "Danger.h"
#include <iostream>
#include <time.h>

Danger::Danger()
{
    //ctor
}

void Danger::interact(character& player)
{
    srand(time(NULL));
    int number = std::rand()%6;
    if(number == 3)
    {
        int health = player.gethealth();
        health--;
        player.sethealth(health);
        std::cout << "haha you noob " << std::endl;
    }
    else
    {
        std::cout << "you lucky bastard! nothing happened" << std::endl;
    }
}


Danger::~Danger()
{
    //dtor
}
