#include "Mage.h"

std::string Mage::getType() const{
    return "Mage";
}

std::string Mage::details() const{
    return "school="+ school +" level="+ std::to_string(level)+" mana="+ std::to_string(mana);
}

std::string Mage::action() const{
    return name+" casts a "+ school+ " spell";
}