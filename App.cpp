#include "App.h"
#include <iostream>

void App::interact() {
    std::cout << "Welcome to Sea++!" << std::endl;

    std::string type;
    double size;
    char eggsChar;
    bool carryingEggs;

    std::cout << "Enter creature type (vertebrate/invertebrate): ";
    std::cin >> type;

    std::cout << "Enter size of the creature (in cm): ";
    std::cin >> size;

    std::cout << "Is it carrying eggs? (y/n): ";
    std::cin >> eggsChar;
    carryingEggs = (eggsChar == 'y' || eggsChar == 'Y');

    // Pass data to the engine
    engine.mediate(type, size, carryingEggs);
}
