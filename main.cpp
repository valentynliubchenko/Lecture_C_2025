#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
    const int n = 20;
    const int m = 4;
    int matr[n][m];
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matr[i][j] = rand() % 200 - 100;
        }
    }

    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < m; j++)
            cout << matr[i][j] << "\t";
    cout << endl;
    int maspar[n];
    for (int j = 0; j < m; j++) {
        int par =0;
        for (int i = 0; i < n; i++) {
            if (matr[i][j] %2==0) {
                par++;
            }
        }
        //cout << par << " ";
        maspar[j] =par;
    }
    for (int j = 0; j < m; j++) {
            cout << maspar[j] << "\t";
    }

    int imax = 0;
    for (int j = 0; j < m; j++) {
        if (maspar[j] > maspar[imax]) {
            imax = j;
        }
    }

    cout<< "\nindex max = "<< imax << endl;

    return 0;
}
