#include <iostream>
#include <math.h>
using namespace std;

int main() {
    const double E = 0.0001;
    const double hx = 0.5;
    const double ha = 1.5;
    for (double x = -2.0; x < 2 + E; x += hx) {
        for (double a = 4; a < 10 + E; a += ha) {
            double y = exp(a) / pow(a, x);
            cout << "x =" << x << "\ta =" << a << "\ty = " << y << "\n";
        }
    }
    cout << endl;

    return 0;
}
