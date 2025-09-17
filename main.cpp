#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

// 1 2 3 4 0
// ----------
// 1 2 3 0 4
// 1 2 0 3 4
// 1 0 2 3 4
// 0 1 2 3 4

int main() {
    const int n = 10;
    int mas[n];
    for (int i = 0; i < n; ++i) {
        mas[i] = rand() % 100;
    }

    for (int i= 0; i < n; ++i) {
        cout << mas[i] << " ";
    }
    // сортування
    for (int k = 0; k < n-1; ++k) {
        for (int i = 0; i < n-1; ++i) {
            if ( mas[i+1] < mas[i] ) {
                int c = mas[i+1];
                mas[i+1] = mas[i];
                mas[i] = c;
            }
        }
    }
    cout<<endl;
    for (int i= 0; i < n; ++i) {
        cout << mas[i] << " ";
    }

    return 0;
}
