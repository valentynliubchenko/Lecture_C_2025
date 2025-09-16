#include <iostream>
#include <math.h>
using namespace std;

int main() {
    const double E = 0.005;

    double s = 0;
    double x;
    for ( x = 1; 1.0 / x > E; x += 1) {
        cout << "current 1/x = " << 1.0 / x << endl;
        cout << "current suma = " << s << endl;
        s += 1.0 / x;
        cout << "next 1/x = " << 1.0 / x << endl;
    }
    cout << "suma = " << s << endl;
    cout << "iteration = " << x << endl;
    return 0;
}
