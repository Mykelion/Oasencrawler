#ifndef CHARACTER_H
#define CHARACTER_H


class character
{
    public:
        character();
        virtual ~character();
        void movecharacter();
        int getx();
        int gety();
        int gethealth();
        int getrelicpoints();
        void setx(int x);
        void sety(int y);
        void sethealth(int health);
        void setrelicpoints(int relicpoints);



    protected:

    private:
    int x;
    int y;
    int health;
    int relicpoints;
};

#endif // CHARACTER_H
