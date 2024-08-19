//
// Created by xmrhk on 20.08.2024.
// Inputs a file path and reads the file, then outputs the contents of the file to the console.
//

#include "fileio.h"
#include <iostream>
#include <fstream>
#include <string>

void readFile()
{
    std::string path;
    while (true)
    {
        std::cout << "Enter the file path or ('q') to exit: ";
        std::cin >> path;

        if (path == "q")
        {
            return;
        }

        std::ifstream file(path);
        if (!file.is_open())
        {
            std::cerr << "File not found" << std::endl;
            continue;
        }

        std::string line;
        while (std::getline(file, line))
        {
            std::cout << line << std::endl;
        }
        file.close();
    }


}