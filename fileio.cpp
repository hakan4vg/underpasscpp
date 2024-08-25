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


std::ofstream createFile(const std::string& path) {
    std::ofstream file(path);
    if (!file.is_open()) {
        std::cerr << "File could not be created" << std::endl;
        exit(EXIT_FAILURE);
    }
    return file;
}

std::string readMessage() {
    std::string message;
    std::cout << "Enter the message to write to the file: ";
    std::getline(std::cin, message);
    return message;
}

void writeFile() {
    std::string path;
    std::cout << "Enter the file path: ";
    std::getline(std::cin, path);

    std::ofstream file(path, std::ios::app);
    if (!file.is_open()) {
        std::cerr << "File could not be opened" << std::endl;
        return;
    }

    std::string message = readMessage();
    file << message;
    if (file.fail()) {
        std::cerr << "File could not be written" << std::endl;
    } else {
        std::cout << "File written successfully" << std::endl;
    }
}