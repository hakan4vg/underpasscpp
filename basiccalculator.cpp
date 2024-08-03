//
// Created by xmrhk on 3.08.2024.
//

#include "basiccalculator.h"

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

double divide(int a, int b)
{
    return static_cast<double>(a) / static_cast<double>(b);
}

int modulo(int a, int b)
{
    return a % b;
}

int power(int a, int b)
{
    int result = 1;
    for (int i = 0; i < b; i++)
    {
        result *= a;
    }
    return result;
}

int factorial(int a)
{
    int result = 1;
    for (int i = 1; i <= a; i++)
    {
        result *= i;
    }
    return result;
}