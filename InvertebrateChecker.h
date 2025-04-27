#ifndef INVERTEBRATECHECKER_H
#define INVERTEBRATECHECKER_H

#include "SeaChecker.h"
#include <iostream>

class InvertebrateChecker : public SeaChecker {
public:
    void check(double size, bool carryingEggs) override;
};

#endif // INVERTEBRATECHECKER_H
