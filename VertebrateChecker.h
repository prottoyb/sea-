#ifndef VERTEBRATECHECKER_H
#define VERTEBRATECHECKER_H

#include "SeaChecker.h"
#include <iostream>

class VertebrateChecker : public SeaChecker {
public:
    void check(double size, bool carryingEggs) override;
};

#endif // VERTEBRATECHECKER_H
