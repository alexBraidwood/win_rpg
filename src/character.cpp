#include "character.h"

Character::Character(Attributes* attributes)
{
    this->_attributes = attributes;
}

void Character::update() {
    if (input != nullptr) {

    }
}

void Character::initialize() {

}

void Character::heal(int amount) {

}

void Character::heal(Character* other_character, int amount) {

}

void Character::deal_damage(Character* other_character) {

}

void Character::take_damage(Character* other_character, int amount) {

}
