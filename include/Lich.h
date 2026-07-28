#ifndef LICH_H
#define LICH_H

#include "Undead.h"
#include "Spellcaster.h"

class Lich : public Undead, public Spellcaster{
    protected:

    public:
    Lich(const std::string& name, int danger, int curse, std::string relic, int level,  int mana, std::string school):GameEntity(name), Creature(name, danger), Character(name, level), Undead(name, danger, curse, relic), Spellcaster(name, level, mana, school){}
    int score() const override;
    std::string getCategory() const override;
    std::string getType() const override;
    std::string details() const override;
    std::string action() const override;
};

#endif
