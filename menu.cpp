//
// Created by Hakan Avgın on 23.08.2024.
//

#include "menu.h"

// I want to create a menu class that will have the menu options so that I can use it in main.cpp
// Display menu options will still be on main.cpp, but the options will be stored in menu.cpp

std::vector<MenuOption> getMenuOptions() {
    return {
        {1, "Guess the number"},
        {2, "Basic Calculator"},
        {3, "File contents"},
        {4, "Stop"}

    };
}
