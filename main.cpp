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

    int min = mas[0];
    int max = mas[0];
    for (int i = 1; i < n; ++i) {
        if (mas[i]<min) {
            min = mas[i];
        }
        if (mas[i]>max) {
            max = mas[i];
        }


    }
    cout << "\nmin = " << min << endl;
    cout << "\nmax = " << max << endl;

    return 0;
}
