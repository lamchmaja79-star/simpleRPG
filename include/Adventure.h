#ifndef ADVENTURE_H
#define ADVENTURE_H

#include <vector>
#include "GameEntity.h"
#include "Wolf.h"
#include "Skeleton.h"
#include "Paladin.h"
#include "Mage.h"
#include "Lich.h"
#include "Warrior.h"

class Adventure
{
public:
Adventure(std::string name): name(name){}
~Adventure();
std::string getName() const;
void operator+= (GameEntity* character);
const GameEntity* operator[] (std::size_t indx) const;
GameEntity* operator[] (std::size_t indx);
int operator() () const;
std::size_t size() const;
int countCharacters() const;
int countCreatures() const;
int countExactWarriors() const;
const GameEntity* firstExact(const std::type_info& info) const;
const GameEntity* strongest() const;

private:
std::string name;
std::vector<GameEntity*> characters;

};

#endif
