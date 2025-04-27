#include "InvertebrateChecker.h"
#include <iostream>

void InvertebrateChecker::check(double size, bool carryingEggs) {
    std::cout << "Checking an invertebrate creature..." << std::endl;

    if (carryingEggs) {
        std::cout << "Return it to the water — it’s carrying eggs!" << std::endl;
    } else if (size < 10.0) {
        std::cout << "Too small! Return it to the water." << std::endl;
    } else {
        std::cout << "You can keep this creature." << std::endl;
    }
}
