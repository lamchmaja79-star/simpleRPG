#include "Skeleton.h"

std::string Skeleton::getType() const{
    return "Skeleton";
}

std::string Skeleton::details() const{
    return "relic="+ relic +" danger="+ std::to_string(danger)+" curse="+ std::to_string(curse);
}

std::string Skeleton::action() const{
    return name+" rattles the "+ relic;
}
