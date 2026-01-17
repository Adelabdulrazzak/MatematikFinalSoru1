#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c, delta, x1, x2;

    cout << "a, b ve c katsayilarini giriniz: ";
    cin >> a >> b >> c;

    // Hesaplanýþý: delta = b*b - 4*a*c
    delta = (b * b) - (4 * a * c);

    cout << fixed << setprecision(2);
    cout << "Delta: " << delta << endl;

    if (delta < 0) {
        cout << "Gercek kok yoktur." << endl;
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        cout << "Bir tane gercek kok vardir: x = " << x1 << endl;
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Iki farkli gercek kok vardir: x1 = " << x1 << ", x2 = " << x2 << endl;
    }

    return 0;
}
