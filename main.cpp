#include <iostream>
#include <math.h>
using namespace std;

int main() {
    const double E = 0.005;
    double x = 1;
    double s = 0;
    while (1.0 / x > E) {
        cout << "current 1/x = " << 1.0/x << endl;
        cout << "current suma = " << s << endl;
        s += 1.0 / x;
        x += 1;
        cout << "next 1/x = " << 1.0/x << endl;
    }
    cout << "suma = " << s << endl;
    cout << "iteration = " << x << endl;
    return 0;
}
