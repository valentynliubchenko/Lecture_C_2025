#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
    const int n = 10;
    const int mas[n] = {55,42,11,556,433,1,5,7,3,11};
    const int *pmas[n];
    for (int i = 0; i < n; i++) {
        pmas[i] = mas + i; //&mas[i]
    }
    for (int i = 0; i < n; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << *pmas[i] << " ";
    }
    for (int k = 0; k < n - 1; k++)
        for (int i = 0; i < n-1-k; i++) {
            if (*pmas[i+1] < *pmas[i]) {
                const int *c = pmas[i+1];
                pmas[i+1] = pmas[i];
                pmas[i] = c;
            }
        }
    cout <<"\n--------------"<< endl;
    for (int i = 0; i < n; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << *pmas[i] << " ";
    }
    return 0;
}
