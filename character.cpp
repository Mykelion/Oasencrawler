#include "character.h"
#include <iostream>

character::character()
{
    x = 0;
    y = 0;
    health = 5;
    relicpoints = 0;
}

void character::movecharacter()
{
    while(1)
    {
        char input;
        std::cout << "input: " << std::endl;
        std::cin >> input;
        if(input == 'w')
        {
            y--;
            if(y >= 0 && y < 5)
            {
                std::cout << "gueltiges Spielfeld\n" << std::endl;
            }
            else
            {
                y++;
                std::cout << "ungueltige Eingabe\n" << std::endl;
            }
        }
        else if(input == 'a')
        {
            x--;
            if(x >= 0 && x < 5)
            {
                std::cout << "gueltiges Spielfeld\n" << std::endl;
            }
            else
            {
                x++;
                std::cout << "ungueltige Eingabe\n" << std::endl;
            }
        }
        else if(input == 's')
        {
            y++;
            if(y >= 0 && y < 5)
            {
                std::cout << "gueltiges Spielfeld\n" << std::endl;
            }
            else
            {
                y--;
                std::cout << "ungueltige Eingabe\n" << std::endl;
            }
        }
        else if(input == 'd')
        {
            x++;
            if(x >= 0 && x < 5)
            {
                std::cout << "gueltiges Spielfeld\n" << std::endl;
            }
            else
            {
                x--;
                std::cout << "ungueltige Eingabe\n" << std::endl;
            }
        }
        else
        {
            std::cout << "ungueltige Eingabe\n" << std::endl;
        }

        break;
    }



}


int character::getx()
{
    return x;
}
int character::gety()
{
    return y;
}
int character::gethealth()
{
    return health;
}
int character::getrelicpoints()
{
    return relicpoints;
}
void character::setx(int x)
{
    this->x = x;
}
void character::sety(int y)
{
    this->y = y;
}
void character::sethealth(int health)
{
    this->health = health;

}
void character::setrelicpoints(int relicpoints)
{
    this->relicpoints = relicpoints;
}

character::~character()
{
    x = 0;
    y = 0;
    health = 0;
    relicpoints = 0;
}
