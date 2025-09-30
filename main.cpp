#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
    const int n = 10;
    int mas[n];
    for (int i = 0; i < n; i++) {
        mas[i] = rand() % 100;
    }
    int *pmas[n];
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
                int* c = pmas[i+1];
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
