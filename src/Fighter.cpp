#include "Fighter.h"

int Fighter::score() const {
    return level * 10 + strength * 2;
}