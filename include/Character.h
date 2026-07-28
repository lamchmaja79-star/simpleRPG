#ifndef CHARACTER_H
#define CHARACTER_H

#include "GameEntity.h"

class Character : virtual public GameEntity{
    protected:
    int level;
    public:
    Character(const std::string& name, int level): GameEntity(name), level(level){}
    virtual ~Character(){}
    std::string getCategory() const override;
};

#endif
