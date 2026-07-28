#ifndef SKELETON_H
#define SKELETON_H

#include "Undead.h"

class Skeleton : public Undead{
    public:
    Skeleton(const std::string& name, int danger, int curse, std::string relic):GameEntity(name), Creature(name, danger), Undead(name, danger, curse, relic){}
    std::string getType() const override;
    std::string details() const override;
    std::string action() const override;
};

#endif
