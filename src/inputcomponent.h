#pragma once

#include <windows.h>
#include <functional>

#include "gameobject.h"

class InputComponent
{
    public:
        InputComponent();

    public:
        void handle_input(UINT key_code);
        void update(GameObject* obj);

        /* Key Functions */
};
