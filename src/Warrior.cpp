#include "Warrior.h"

std::string Warrior::getType() const{
    return "Warrior";
}

std::string Warrior::details() const{
    return "weapon="+ weapon +" level="+ std::to_string(level)+" strength="+ std::to_string(strength);
}

std::string Warrior::action() const{
    return name+" attacks with "+ weapon;
}