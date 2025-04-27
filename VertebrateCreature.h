#ifndef VERTEBRATECREATURE_H
#define VERTEBRATECREATURE_H

#include "SeaCreature.h"

class VertebrateCreature : public SeaCreature {
public:
    void create() override;
};

#endif // VERTEBRATECREATURE_H
