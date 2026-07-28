#include "Adventure.h"

Adventure::~Adventure(){
    for(std::size_t i = 0; i<characters.size(); i++){
        delete characters[i];
    }
}
std::string Adventure::getName() const{
    return name;
}
void Adventure::operator+= (GameEntity* character){
    characters.push_back(character);
}
const GameEntity* Adventure::operator[] (std::size_t indx) const{
    return characters[indx];
}
GameEntity* Adventure::operator[] (std::size_t indx){
    return characters[indx];
}
int Adventure::operator() () const{ 
    int points = 0;
    for(GameEntity* character : characters){
        points += character->score();
    } 
    return points;
}
std::size_t Adventure::size() const{
    return characters.size();
}
int Adventure::countCharacters() const{
    int count = 0;
    for(GameEntity* character : characters){
        if(dynamic_cast<Character*>(character)){
            count++;
        }
    } 
    return count;
}
int Adventure::countCreatures() const{
    int count = 0;
    for(GameEntity* character : characters){
        if(dynamic_cast<Creature*>(character)){
            count++;
        }
    } 
    return count;
}
int Adventure::countExactWarriors() const{
    int count = 0;
    for(GameEntity* character : characters){
        if(typeid(*character) == typeid(Warrior)){
            count++;
        }
    } 
    return count;
}
const GameEntity* Adventure::firstExact(const std::type_info& info) const{
    for(GameEntity* character : characters){
        if(typeid(*character) == info){
            return character;
        }
    } 
    return nullptr;
}
const GameEntity* Adventure::strongest() const{
    if(size() == 0){
        return nullptr;
    }
    GameEntity* strongest = characters[0];
    int maxScore = characters[0]->score();
    for(GameEntity* character : characters){
        if(character->score() > maxScore){
            strongest = character;
            maxScore = character->score();
        }
    } 
    return strongest;
}    