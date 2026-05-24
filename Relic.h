#ifndef RELIC_H
#define RELIC_H

#include <Field.h>


class Relic : public Field
{
    public:
        Relic();
        virtual ~Relic();
        void interact(character& player)override;
    protected:

    private:
};

#endif // RELIC_H
