#ifndef BEAST_H
#define BEAST_H

#include "Creature.h"

class Beast : virtual public Creature{
    protected:
    int fury;
    std::string habitat;
    public:
    Beast(const std::string& name, int danger, int fury, std::string habitat): Creature(name, danger), fury(fury), habitat(habitat){}
    virtual ~Beast() {}
    int score() const override;
};

#endif
