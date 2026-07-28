#include "Lich.h"

int Lich::score() const {
    return Undead::score()+Spellcaster::score();
}
std::string Lich::getCategory() const{
    return "Creature + Character";
}
std::string Lich::getType() const {
    return "Lich";
}
std::string Lich::details() const {
    return "";
}
std::string Lich::action() const {
    return "";
}
