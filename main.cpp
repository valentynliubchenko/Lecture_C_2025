#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

// 0 4 1 2 3
// ----------
// 0 1 2 3 4
// 0 1 2 3 4
// 0 1 2 3 4
// 0 1 2 3 4

int main() {
    const int n = 10;
    int mas[n] = {0, 4, 1, 2, 3};
    for (int i = 0; i < n; ++i) {
        mas[i] = rand() % 100 -50;
    }

    for (int i= 0; i < n; ++i) {
        cout << mas[i] << " ";
    }
    // сортування
    bool isSorted = false;
    int k = 0;
    while (!isSorted && k < n-1) {
        isSorted = true;
        for (int i = 0; i < n-1-k; ++i) {
            if ( abs(mas[i+1]) < abs(mas[i]) ) {
                isSorted =false;
                int c = mas[i+1];
                mas[i+1] = mas[i];
                mas[i] = c;
            }
        }
        ++k;
    }

    cout<<endl;
    for (int i= 0; i < n; ++i) {
        cout << mas[i] << " ";
    }
    cout<<"k = "<<k<<endl;

    return 0;
}
