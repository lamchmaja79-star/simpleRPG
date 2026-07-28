#include "Spellcaster.h"

int Spellcaster::score() const {
    return level * 8 + mana * 3;
}