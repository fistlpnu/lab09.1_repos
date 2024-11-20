#include <iostream>
#include <iomanip>
#include <cmath>
#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main() {
    cout << "x_p = "; cin >> x_p;
    cout << "x_k = "; cin >> x_k;
    cout << "dx = "; cin >> dx;
    cout << "e = "; cin >> e;

    cout << endl;

    x = x_p;
    cout << setw(10) << "x" << setw(20) << "Sum" << setw(20) << "Arcth(x)" << setw(10) << "n" << endl;

    while (x <= x_k) {
        if (fabs(x) > 1) {
            sum(); // Виклик функції для обчислення суми ряду
            cout << setw(10) << x
                << setw(20) << s
                << setw(20) << atanh(1.0 / x)
                << setw(10) << n << endl;
        }
        else {
            cout << setw(10) << x << " The value of x does not fit (|x| <= 1)" << endl;
        }
        x += dx;
    }

    return 0;
}
