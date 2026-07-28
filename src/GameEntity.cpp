#include "GameEntity.h"

std::string GameEntity::getName() const {
    return name;
}

int GameEntity::operator()() const{
    return score();
}

std::string GameEntity::summary() const{    
    return getCategory() +" "+ getType() +" "+ getName()+" score="+std::to_string(score())+" -> "+details();
}

std::ostream& operator<<(std::ostream& os, const GameEntity& entity){
    os << entity.summary();
    return os;
}
