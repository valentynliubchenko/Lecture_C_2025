#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
    const int n = 7;
    int matr[n][n];
   // srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matr[i][j] = rand() % 201 - 100;
        }
    }

    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < n; j++)
            cout << matr[i][j] << "\t";

    cout<<endl<<endl;
    for (int i = 0; i < n; i++) {
                cout << matr[i][n-i-1] << "\t";
    }

    cout<<endl<<endl;
    for (int i = 0; i < n; i++) {
        cout << matr[i][i] << "\t";
    }

    for (int index = 0; index < n; index++) {
        int c =matr[index][index];
        matr[index][index] =matr[index][n-1-index];
        matr[index][n-1-index]=c;
    }
    cout<<endl<<endl;
    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < n; j++)
            cout << matr[i][j] << "\t";

    return 0;
}
