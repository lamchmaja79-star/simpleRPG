#ifndef WOLF_H
#define WOLF_H

#include "Beast.h"

class Wolf : public Beast{
    public:
    Wolf(const std::string& name, int danger, int fury, std::string habitat): GameEntity(name), Creature(name, danger), Beast(name, danger,fury, habitat){}
    std::string getType() const override;
    std::string details() const override;
    std::string action() const override;
};

#endif
