#ifndef FIELD_H
#define FIELD_H
#include "character.h"

class Field
{
    public:
        Field();
        virtual ~Field();
        virtual void interact(character& player);

    protected:


    private:
};

#endif // FIELD_H
