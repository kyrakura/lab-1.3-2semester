// Source.cpp
#include <iostream>
#include "CharLine.h"
#include <Windows.h>

int main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    CharLine line;
    line.Init(5, "Hello");
    line.Display();

    std::cout << "Рядок: " << line.toString() << std::endl;

    std::cout << "На позиції 3: " << line.CharAt(2) << std::endl;

    std::cout << "Чи містить рядок 'e'? " << (line.Contains('e') ? "Yes" : "No") << std::endl;

    CharLine otherLine;
    otherLine.Init(6, " World");
    line.Concat(otherLine);
    line.Display();

    std::cout << "Порівняння з іншим рядком: " << line.CompareTo(otherLine) << std::endl;

    CharLine substr;
    substr.Init(5, "World");
    std::cout << "Чи містить рядок підрядок 'World'? " << (line.ContainsSubstr(substr) ? "Yes" : "No") << std::endl;

    return 0;
}