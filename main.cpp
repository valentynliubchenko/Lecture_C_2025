#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {

    cout<<sizeof(double)<<endl;
    //double* b = (double*)malloc(sizeof(double));
    double* b = new double(89);
    cout<<*b<<endl;
    *b = 154 ;
    cout<<*b<<endl;

    //free(b);
    delete b;

    return 0;
}
