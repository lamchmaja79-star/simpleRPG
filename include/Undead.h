#ifndef UNDEAD_H
#define UNDEAD_H

#include "Creature.h"

class Undead : virtual public Creature{
    protected:
    int curse;
    std::string relic;
    public:
    Undead(const std::string& name, int danger, int curse, std::string relic): Creature(name, danger), curse(curse), relic(relic){}
    virtual ~Undead() {}
    int score() const override;
};

#endif
