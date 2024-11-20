#include "dod.h"
#include "var.h"

using namespace nsVar;

void nsDod::dod() {
    a *= 1.0 / (x * x); // Рекурентна формула для 1 / x^(2n+1)
    a /= (2 * n + 1);   // Коефіцієнт 1 / (2n+1)
}

