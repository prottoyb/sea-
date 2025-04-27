#include "SeaPlusPlusEngine.h"
#include <iostream>

void SeaPlusPlusEngine::mediate(const std::string& type, double size, bool carryingEggs) {
    if (type == "vertebrate") {
        vertebrateChecker.check(size, carryingEggs);
    } else if (type == "invertebrate") {
        invertebrateChecker.check(size, carryingEggs);
    } else {
        std::cout << "Unknown creature type." << std::endl;
    }
}
