#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
    const int n = 10;
    int mas[n] = {55,-42,-11,556,-433,1,5,-7,3,11};
    int *pmas[n];
    for (int i = 0; i < n; i++) {
        cout << mas[i] << "\t";
    }
    int len =0;
    for (int i = 0; i < n; i++) {
        if(mas[i]>0){
            pmas[len++] = &mas[i];
        }
    }
    cout << endl;
    for (int i = 0; i < len; i++) {
        cout << *pmas[i] << "\t";
    }
    for (int k = 0; k < len - 1; k++)
        for (int i = 0; i < len-1-k; i++) {
            if (*pmas[i+1] < *pmas[i]) {
                int c = *pmas[i+1];
                *pmas[i+1] = *pmas[i];
                *pmas[i] = c;
            }
        }
    //--------------------
    //
    cout <<"\n--------------"<< endl;
    for (int i = 0; i < n; i++) {
        cout << mas[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < len; i++) {
        cout << *pmas[i] << "\t";
    }
    return 0;
}
