#ifndef CREATURE_H
#define CREATURE_H

#include "GameEntity.h"

class Creature : virtual public GameEntity{
    protected:
    int danger;
    public:
    Creature(const std::string& name, int danger): GameEntity(name), danger(danger){}
    virtual ~Creature(){}    
    std::string getCategory() const override;
};

#endif
