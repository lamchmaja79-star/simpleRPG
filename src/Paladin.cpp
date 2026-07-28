#include "Paladin.h"

std::string Paladin::getType() const{
    return "Paladin";
}

std::string Paladin::details() const{
    return " ";
}

std::string Paladin::action() const{
    return name+" rattles the ";
}

int Paladin::score() const {
    return Fighter::score() + Spellcaster::score();
}