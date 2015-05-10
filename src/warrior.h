#include "character.h"


class Warrior : public Character
{
    public:
        Warrior();
        virtual void update() override;
};
