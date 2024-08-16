//
// Created by xmrhk on 17.08.2024.
//

#include "guessinggame.h"
#include <iostream>
#include <cstdlib>


void guessinggame()
{
    int number = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    int numberfirst;
    int numbersecond;
    while (true)
    {
        numberfirst = number / 10;
        numbersecond = number % 10;

        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        int guessfirst = guess / 10;
        int guesssecond = guess % 10;

        if (guess == number)
        {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
            break;
        }
        else if (guessfirst == numberfirst || guesssecond == numbersecond)
        {
            std::cout << "You are very close." << std::endl;
        }
        else if (guessfirst == numbersecond || guesssecond == numberfirst)
        {
            std::cout << "You are close." << std::endl;
        }
        else
        {
            std::cout << "Try again." << std::endl;
        }
    }
}