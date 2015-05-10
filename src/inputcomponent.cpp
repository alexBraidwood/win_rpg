#include "inputcomponent.h"
#include <iostream>
#include "gameobject.h"

InputComponent::InputComponent() {
}

void InputComponent::handle_input(UINT key_code) {
    switch(key_code) {
    case VK_UP:
        std::cout << "Up Pressed" << std::endl;
        break;
    case VK_DOWN:
        std::cout << "Down Pressed" << std::endl;
        break;
    case VK_LEFT:
        std::cout << "Left Pressed" << std::endl;
        break;
    case VK_RIGHT:
        std::cout << "Right Pressed" << std::endl;
    }
}

void InputComponent::update(GameObject* obj) {

}
