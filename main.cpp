#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
    const int n= 4;
    const int m= 6;
    int matr[n][m];
    // srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matr[i][j] = rand() % 200 -100;
        }
    }

    for (int i = 0; i < n; i++,cout<<endl)
        for (int j = 0; j < m; j++)
            cout << matr[i][j] << "\t";
    cout << endl;
    int masmin[n];
    for (int i = 0; i < n; i++) {
        masmin[i] =matr[i][0];
        for (int ii = 0; ii < m; ii++) {
            if (matr[i][ii] < masmin[i]) {
                masmin[i] = matr[i][ii];
            }
        }
        //cout<<min<<"\t";
    }
    for (int i = 0; i < n; i++) {
        cout << masmin[i] << "\t";
    }
    int max =masmin[0];
    for (int i = 0; i < n; i++) {
        if (masmin[i] > max) {
            max = masmin[i];
        }
    }
    cout << "\nmas ="<< max << endl;

    return 0;
}
