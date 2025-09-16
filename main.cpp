#include <iostream>
#include <math.h>
using namespace std;

int main() {
    const double E = 0.0001;
    const double hx = 0.5;
    double a = 4;
    const double ha = 1.5;
    for (double x = -2.0; x < 2 + E; x += hx) {
        double y = exp(a) / pow(a, x);
        cout << "a =" << a << "\tx =" << x << "\ty = " << y << "\n";
        a += ha;
    }
    cout << endl;

    return 0;
}
