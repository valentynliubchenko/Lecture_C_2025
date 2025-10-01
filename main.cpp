#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
    const int n= 10;
    const int m= 3;
    int matr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matr[i][j] = rand() % 200 -100;
        }
    }

    for (int i = 0; i < n; i++,cout<<endl)
        for (int j = 0; j < m; j++)
            cout << matr[i][j] << "\t";

    return 0;
}
