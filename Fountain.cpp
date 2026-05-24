#include "Fountain.h"
#include <iostream>

Fountain::Fountain()
{
    //ctor
}

void Fountain::interact(character& player)
{
    std::cout << "take a break you deserved it!" << std::endl;
    int health = player.gethealth();
    health++;
    player.sethealth(health);
}
Fountain::~Fountain()
{
    //dtor
}
