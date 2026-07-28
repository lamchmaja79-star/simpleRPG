#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <string>
#include <ostream>

class GameEntity
{
protected:
std::string name;

public:
GameEntity(const std::string& name): name(name){}
virtual ~GameEntity(){}

std::string getName() const;
virtual std::string getCategory() const = 0;
virtual std::string getType() const= 0;
virtual std::string details() const= 0;
virtual std::string action() const= 0;
virtual int score() const= 0;
int operator() () const;
std::string summary() const;
friend std::ostream& operator<<(std::ostream& os, const GameEntity& entity);

};

#endif
