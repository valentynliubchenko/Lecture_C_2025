#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

struct T {
    int x,y,t,r,e;
};


// тип назва;  - створення звичайної зміни
// тип* назва;    - створення покажчика/вказівник/поінтер/pointer

int main() {

    double a =2.6;
    double* p1;
    p1 = &a;
    cout << p1 <<endl;
    cout << &a <<endl;
    cout << *p1 <<endl;//2.6
    a = 5.8;
    cout << *p1 <<endl;//5.8
    *p1 = 3.6;
    cout << a <<endl;
    return 0;
}
