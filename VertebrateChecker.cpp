#include "VertebrateChecker.h"
#include <iostream>

void VertebrateChecker::check(double size, bool carryingEggs) {
    std::cout << "Checking a vertebrate creature..." << std::endl;

    if (carryingEggs) {
        std::cout << "Return it to the water — it’s carrying eggs!" << std::endl;
    } else if (size < 30.0) {
        std::cout << "Too small! Return it to the water." << std::endl;
    } else {
        std::cout << "You can keep this creature." << std::endl;
    }
}
