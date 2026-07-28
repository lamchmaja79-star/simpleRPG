#ifndef WARRIOR_H
#define WARRIOR_H

#include "Fighter.h"

class Warrior : public Fighter{
    public:
    Warrior(const std::string& name, int level, int strength, std::string weapon):GameEntity(name), Character(name, level), Fighter(name, level, strength, weapon){}
    std::string getType() const  override;
    std::string details() const override;
    std::string action() const override;
};

#endif
