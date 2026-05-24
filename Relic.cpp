#include "Relic.h"

Relic::Relic()
{
    //ctor
}

void Relic::interact(character& player)
{
    int change = player.getrelicpoints();
    change++;
    player.setrelicpoints(change);
}
Relic::~Relic()
{
    //dtor
}
