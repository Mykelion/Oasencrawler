#ifndef FOUNTAIN_H
#define FOUNTAIN_H

#include <Field.h>


class Fountain : public Field
{
    public:
        Fountain();
        virtual ~Fountain();
        void interact(character& player)override;

    protected:

    private:
};

#endif // FOUNTAIN_H
