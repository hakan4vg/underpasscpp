#include <iostream>
#include "helloworld.h"
#include "basiccalculator.h"

int main()
{
    std::string greeting = helloworld();
    std::cout << greeting << std::endl;

    int a, b;
    char operation;

    while (operation != 'q')
    {
        std::cout << "Enter an operation (+, -, *, /, %, ^, !, q): ";
        std::cin >> operation;
        if (operation == 'q')
        {
            break;
        }
        else
        {
            std::cout << "Enter the first number: ";
            std::cin >> a;

            std::cout << "Enter the second number: ";
            std::cin >> b;

            switch (operation)
            {
            default:
                std::cout << "Invalid operation" << std::endl;
                break;

            case '+':
                printf("%d + %d = %d\n", a, b, add(a, b));
                break;
                // std::cout << a << " + " << b << " = " << add(a, b) << std::endl;
                // cout is type safe but harder to work with formatting
                // printf is standart c function but can't work with objects
                // printf is faster than cout

            case '-':
                printf("%d - %d = %d\n", a, b, subtract(a, b));
                break;

            case '*':
                printf("%d * %d = %d\n", a, b, multiply(a, b));
                break;

            case '/':
                printf("%d / %d = %.2f\n", a, b, divide(a, b));
                break;

            case '%':
                printf("%d %% %d = %d\n", a, b, modulo(a, b));
                break;

            case '^':
                printf("%d ^ %d = %d\n", a, b, power(a, b));
                break;

            case '!':
                printf("%d! = %d\n", a, factorial(a));
                break;
        }

        }
    }
    return 0;
}
