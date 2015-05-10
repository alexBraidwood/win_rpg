#include "game.h"

#include "inputcomponent.h"
#include "warrior.h"
#include <iostream>

Game::Game(HWND main_window)
{
    _main_window = main_window;
}

Game::~Game()
{
    for (auto o : _objects) {
        delete o;
    }
}

//void Game::draw() {
//    for (auto o : _objects) {
//        o->draw();
//    }
//}

void Game::add_game_object(GameObject* obj) {
    _objects.push_back(obj);
}

void Game::initialize() {
    this->add_game_object(new Warrior());
    for (auto o : _objects) {
        o->initialize();
    }
}

void Game::update() {
    for (auto o : _objects) {
        o->update();
    }
}

void Game::handle_events(MSG &msg) {
    switch(msg.message) {
    case WM_KEYDOWN:
        for (auto o : _objects) {
            if (o->input != nullptr) {
                o->input->handle_input(msg.wParam);
            }
        }
        break;
    default:
        break;
    }
}

void Game::quit() {
    SendMessage(_main_window, WM_QUIT, NULL, NULL);
}
