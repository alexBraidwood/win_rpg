#pragma once

class InputComponent;

class GameObject
{
    public:
        GameObject() : input(nullptr) {}

        virtual void update() = 0;
        virtual void initialize() = 0;

        InputComponent* input;
        //MovementComponent* _movement;
};
