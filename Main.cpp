#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>

#include "GameEntity.h"
#include "Adventure.h"

int main() {
    Adventure adventure("Ruins of the Old Moon");

    adventure += new Warrior("Rhea", 5, 12, "blade");
    adventure += new Mage("Ivo", 4, 10, "arcane");
    adventure += new Wolf("Greyfang", 5, 9, "forest");
    adventure += new Skeleton("Old King", 6, 4, "crown");

    std::cout << "Adventure: " << adventure.getName() << "\n";

    for (std::size_t i = 0; i < adventure.size(); ++i) {
        std::cout << *adventure[i] << "\n";
    }

    std::cout << "Total adventure score: " << adventure() << "\n";
    std::cout << "Characters: " << adventure.countCharacters() << "\n";
    std::cout << "Creatures: " << adventure.countCreatures() << "\n";
    std::cout << "Exact warriors: " << adventure.countExactWarriors() << "\n";

    std::cout << "Actions:\n";
    for (std::size_t i = 0; i < adventure.size(); ++i) {
        std::cout << adventure[i]->action() << "\n";
    }

    const Adventure& constAdventure = adventure;
    const GameEntity* selected = constAdventure[1];

    std::cout << "Selected score with operator(): "
              << (*selected)()
              << "\n";

    const GameEntity* firstMage = constAdventure.firstExact(typeid(Mage));

    if (firstMage != nullptr) {
        std::cout << "First exact mage: "
                  << firstMage->getName()
                  << " score="
                  << (*firstMage)()
                  << "\n";
    }

    const GameEntity* strongest = adventure.strongest();

    if (strongest != nullptr) {
        std::cout << "Strongest entity: "
                  << strongest->getName()
                  << " score="
                  << (*strongest)()
                  << "\n";
    }

    return 0;
}
