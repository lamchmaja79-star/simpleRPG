#include "Beast.h"

int Beast::score() const {
    return danger * 7 + fury * 2;
}