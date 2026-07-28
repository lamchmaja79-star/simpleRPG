#ifndef FIGHTER_H
#define FIGHTER_H

#include "Character.h"

class Fighter : virtual public Character{
    protected:
    int strength;
    std::string weapon;
    public:
    Fighter(const std::string& name, int level, int strength, std::string weapon): Character(name, level), strength(strength), weapon(weapon){}
    virtual ~Fighter(){}
    int score() const override;
};

#endif
