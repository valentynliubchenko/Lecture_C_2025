#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
    const int n = 4;
    const int m = 5;
    int matr[n][m];

//    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matr[i][j] = rand() % 201 - 100+1;
        }
    }

    cout<<endl<<endl;
    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < m; j++)
            cout << matr[i][j] << "\t";

    return 0;
}
