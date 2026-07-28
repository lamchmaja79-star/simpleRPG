#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include "Character.h"

class Spellcaster : virtual public Character{
    protected:
    int mana;
    std::string school;
    public:
    Spellcaster(const std::string& name, int level, int mana, std::string school): Character(name, level), mana(mana), school(school){}
    virtual ~Spellcaster(){}
    int score() const override;
};

#endif
