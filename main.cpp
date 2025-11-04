#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;

typedef double (*Tptrfun) (double);
typedef double (*Tptrfun2) (double, double);
double myF(double x) {
    return x*x;
}

int main()
{
    Tptrfun ptrfun;
    Tptrfun ptrfun2;

    double x =1.2;
    double y;
    y =sin(x);
    cout << y << endl;
    ptrfun = &sin;
    y = ptrfun(x);
    cout << y << endl;
    y = (*ptrfun)(x);
    cout << y << endl;
    y=cos(x);
    cout << y << endl;

    ptrfun = &cos;
    y = ptrfun(x);
    cout << y << endl;
    y = (*ptrfun)(x);
    cout << y << endl;

    Tptrfun2 ptrfun3;
    ptrfun3 = &pow;
    y = ptrfun3(2, 3.0);
    cout << y << endl;
    ptrfun = &myF;
    y = ptrfun(10);
    cout << y << endl;
    return 0;

}

