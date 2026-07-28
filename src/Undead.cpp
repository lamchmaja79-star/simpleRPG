#include "Undead.h"

int Undead::score() const {
    return danger * 8 + curse * 3;
}
