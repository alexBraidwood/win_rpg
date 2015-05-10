#pragma once
#include "gameobject.h"
#include "attributes.h"

class Character : public GameObject
{
    public:
        Character(Attributes* attributes);
        virtual void update() override;
        virtual void initialize() override;

        void heal(int amount);
        void heal(Character* other_character, int amount);
        void take_damage(Character* other_character, int amount);
        void deal_damage(Character* other_character);
    protected:
    private:
        int _hit_points;
        //Magic* _magic;
        Attributes* _attributes;
        //Weapon* _equipped_weapon;
        //Inventory* _inventory;
};
