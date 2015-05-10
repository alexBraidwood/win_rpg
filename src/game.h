#pragma once

#include <windows.h>

#define WIN32_LEAN_AND_MEAN

#include <vector>
#include "gameobject.h"

class Game
{
    public:
        Game(HWND main_window);
        ~Game();
    public:
        void update();
        void handle_events(MSG &msg);
      //void draw();
        void initialize();
        void quit();
        void add_game_object(GameObject* obj);
    protected:
    private:
        HWND _main_window;
        std::vector<GameObject*> _objects;
};
