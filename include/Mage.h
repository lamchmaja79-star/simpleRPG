#ifndef MAGE_H
#define MAGE_H

#include "Spellcaster.h"

class Mage : public Spellcaster{
    public:
    Mage(const std::string& name, int level, int mana, std::string school):GameEntity(name),Character(name, level), Spellcaster(name, level, mana, school){}
    std::string getType() const override;
    std::string details() const override;
    std::string action() const override;
};

#endif
