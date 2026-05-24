#ifndef DANGER_H
#define DANGER_H

#include <Field.h>


class Danger : public Field
{
    public:
        Danger();
        virtual ~Danger();
        void interact(character& player)override;

    protected:

    private:
};

#endif // DANGER_H
