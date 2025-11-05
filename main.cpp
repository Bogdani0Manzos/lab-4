#include <iostream>
#include <cmath>
using namespace std;

// ======== Proc33 ========
// Функція визначає номер координатної чверті
int Quarter(double x, double y) {
    if (x > 0 && y > 0) return 1;
    else if (x < 0 && y > 0) return 2;
    else if (x < 0 && y < 0) return 3;
    else if (x > 0 && y < 0) return 4;
    else return 0; // якщо координати нульові (на осі)
}

// ======== Proc21 ========
// Процедура обчислює час вільного падіння
void FreeFallTime(double h, double &t) {
    const double g = 9.81;
    t = sqrt(2 * h / g);
}

int main() {
    cout << "=== Proc33: Визначення координатних чвертей ===" << endl;
    double x1, y1, x2, y2, x3, y3;
    cout << "Введіть координати трьох точок (x y):\n";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    cout << "Точка 1 у " << Quarter(x1, y1) << " чверті." << endl;
    cout << "Точка 2 у " << Quarter(x2, y2) << " чверті." << endl;
    cout << "Точка 3 у " << Quarter(x3, y3) << " чверті." << endl;

    cout << "\n=== Proc21: Час вільного падіння ===" << endl;
    double h1, h2, h3, t;
    cout << "Введіть три висоти (у метрах):\n";
    cin >> h1 >> h2 >> h3;

    FreeFallTime(h1, t);
    cout << "Висота " << h1 << " м → час падіння = " << t << " с" << endl;
    FreeFallTime(h2, t);
    cout << "Висота " << h2 << " м → час падіння = " << t << " с" << endl;
    FreeFallTime(h3, t);
    cout << "Висота " << h3 << " м → час падіння = " << t << " с" << endl;

    return 0;
}