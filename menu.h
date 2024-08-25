//
// Created by Hakan Avgın on 23.08.2024.
//

#ifndef MENU_H
#define MENU_H

#include <vector>
#include <string>

struct MenuOption {
    int number;
    std::string description;
};

std::vector<MenuOption> getMenuOptions();


#endif //MENU_H
