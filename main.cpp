#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
    const int n = 7;
    int matr[n][n];
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matr[i][j] = rand() % 200 - 100;
        }
    }

    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < n; j++)
            cout << matr[i][j] << "\t";

    cout<<endl<<endl;
    for (int i = 0; i < n; i++) {
                cout << matr[i][i] << "\t";
    }

    int* pmin = &matr[0][0];
    int* pmax = &matr[0][0];
    for (int i = 0; i < n; ++i)
    {
        if (matr[i][i] < *pmin) pmin = &matr[i][i];// = mas+i;
        if (matr[i][i] > *pmax) pmax = &matr[i][i];// = mas+i;
    }
    cout << "\nmin = " << *pmin
       << " index min = " << pmin-&matr[0][0] << endl;
    cout << "\nmax = " << *pmax
       << " index max = " << pmin-&matr[0][0] << endl;

    int c =*pmin;
    *pmin =*pmax;
    *pmax =c;
    cout<<endl<<endl;

    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < n; j++)
            cout << matr[i][j] << "\t";

    return 0;
}
