#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
    const int n = 7;
    int mas[n] = {5, 3, 7, 2, 4, 1, 4};
    for (int i = 0; i < n; i++) {
        cout << mas[i] << " " ;
    }
    cout << endl;
    int *pmin = mas; //&mas[0];
    int *pmax = mas; //&mas[0];
    for (int i = 1; i < n; i++) {
        if (mas[i] < *pmin) {
            pmin = &mas[i]; // mas +i
        }
        if (mas[i] > *pmax) {
            pmax = &mas[i]; // mas +i
        }
    }
    cout << *pmin << " " << *pmax << endl;
    int c = *pmin;
    *pmin = *pmax;
    *pmax = c;
    for (int i = 0; i < n; i++) {
        cout << mas[i] << " " ;
    }

    return 0;
}
