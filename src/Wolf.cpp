#include "Wolf.h"

std::string Wolf::getType() const{
    return "Wolf";
}

std::string Wolf::details() const{
    return "habitat="+ habitat +" danger="+ std::to_string(danger)+" fury="+ std::to_string(fury);
}

std::string Wolf::action() const{
    return name+" charges from the "+ habitat;
}
