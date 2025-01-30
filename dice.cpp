// Dice class - implementation

#include "dice.h"
#include <cstdlib>
using namespace std;

Dice::Dice () {
    die0 = rand() % 6 + 1;
    die1 = rand() % 6 + 1;
}

int Dice::get_die0 () const {
    return die0;
}

int Dice::get_die1 () const {
    return die0 + die1;
}

void Dice::roll() {
    die0 = rand() % 6 + 1;
    die1 = rand() % 6 + 1;
}