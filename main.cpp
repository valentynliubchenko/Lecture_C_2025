#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
    const int n = 10;
    long long mas[n];
    for (int i = 0; i < n; ++i) {
        mas[i] = rand() % 100;
    }

    for (int i= 0; i < n; ++i) {
        cout << mas[i] << " ";
    }

    int imin = 0;
    int imax = 0;
    for (int i = 1; i < n; ++i) {
        if (mas[i]<mas[imin]) {
            imin = i;
        }
        if (mas[i]>mas[imax]) {
            imax = i;
        }
    }
    cout << "\nmin = " << mas[imin] << endl;
    cout << "index min = " << imin << endl;
    cout << "max = " << mas[imax] << endl;
    cout << "index max = " << imax << endl;

    mas[imax] = 1000;
    for (int i= 0; i < n; ++i) {
        cout << mas[i] << " ";
    }
    return 0;
}
