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
            matr[i][j] = rand() % 201 - 100+1;
        }
    }

    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < n; j++)
            cout << matr[i][j] << "\t";

//
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            matr[i][j] =0;

//

    for (int i = 1; i < n; i++)
        for (int j = 0; j < i ; j++)
            matr[i][j] = -1;

    cout<<endl<<endl;
    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < n; j++)
            cout << matr[i][j] << "\t";

    return 0;
}
