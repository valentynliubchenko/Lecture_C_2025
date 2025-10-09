#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {

    int n = 100000;


    for (int i = 0; i < 10000000; i++) {
        double* mas = (double*)malloc(n);
        if (mas == NULL ) {
            cout<<"Memory allocation failed "<<i<<endl;
            return 1;
        }

    }

return 0;
}
