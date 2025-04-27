#ifndef SEAPLUSPLUSENGINE_H
#define SEAPLUSPLUSENGINE_H

#include "SeaChecker.h"
#include "VertebrateChecker.h"
#include "InvertebrateChecker.h"
#include <string>

class SeaPlusPlusEngine {
public:
    void mediate(const std::string& type, double size, bool carryingEggs);
private:
    VertebrateChecker vertebrateChecker;
    InvertebrateChecker invertebrateChecker;
};

#endif // SEAPLUSPLUSENGINE_H
