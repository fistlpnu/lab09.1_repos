#include <iostream>
#include <cmath>
#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
    n = 0;
    a = 1.0 / x; // Початковий член ряду
    s = a;       // Початкова сума
    do {
        n++;
        dod(); // Обчислення наступного доданку
        s += a;

        // Вивід проміжних значень для налагодження
        std::cout << "Iteration " << n
            << ", a = " << a
            << ", s = " << s
            << std::endl;

    } while (fabs(a) > e); // Поки модуль доданку більше точності
}
