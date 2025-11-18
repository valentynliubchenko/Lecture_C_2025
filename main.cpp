#include <iostream>
#include <math.h>
using namespace std;



double (*p1) (double);
double (*p2) (double, double);


int main() {
    p1 = &sin;
    cout << sin(0.5) << "\n";
    cout << (*p1)(0.5) << "\n";
    cout << p1(0.5) << "\n";

    p1 = &cos;
    cout << cos(0.5) << "\n";
    cout << (*p1)(0.5) << "\n";
    cout << p1(0.5) << "\n";

    p1 = &tan;
    p2 = &pow;
    cout << p2(2.0,3) << "\n";

    return 0;
}

