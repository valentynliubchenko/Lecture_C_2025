#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double a, x;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter x number: ";
    cin >> x;

    double y;
    if (a >0 && x>0) {
            y = sin(fabs(pow(a,x)));
            cout << "version1 " << endl;
    }
    else if (a>0 && x<0) {
        y = cos(fabs(exp(x)));
        cout << "version 2 " << endl;
    }
    else {
        y = sin(x)*cos(a);
        cout << "version 3 " << endl;
    }
    cout << "y= " << y << endl;

    return 0;
}
