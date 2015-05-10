#include "warrior.h"
#include "inputcomponent.h"

#include <iostream>

Warrior::Warrior()
    :   Character(new Attributes(10, 10, 2, 2)) {
    GameObject::input = new InputComponent;
}

void Warrior::update() {
    //std::cout << "Hello, I'm a warrior!";
}
