#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
    void *p;
    int *pa;
    int a = 25;
    float b =2.5;
    double c =3.6;

    pa = &a;
    p = &a;
    cout<< *((int*)p)<<endl;

    p = &b;
    cout<< *((float*)p)<<endl;
    p = &c;
    cout<< *((double*)p)<<endl;

    //cout<<*pa<<endl;

    return 0;
}
