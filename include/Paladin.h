#ifndef PALADIN_H
#define PALADIN_H

#include "Fighter.h"
#include "Spellcaster.h"

class Paladin : public Fighter, public Spellcaster{
    protected:

    public:
    Paladin(const std::string& name, int level, int strength, std::string weapon, int mana, std::string school):GameEntity(name),  Character(name, level), Fighter(name, level, strength, weapon), Spellcaster(name, level, mana, school){}
    int score() const override;
    std::string getType() const override;
    std::string details() const override;
    std::string action() const override;
};

#endif
