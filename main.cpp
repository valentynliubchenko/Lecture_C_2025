#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
    const int n = 12;
    int matr[n][n];
//    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matr[i][j] = rand() % 201 - 100+1;
        }
    }

    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < n; j++)
            cout << matr[i][j] << "\t";

//
    for (int i = 0; i < (n-1)/2; i++)
        for (int j = i+1; j < n-1-i; j++)
            matr[i][j] = 0;


    cout<<endl<<endl;
    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < n; j++)
            cout << matr[i][j] << "\t";

    return 0;
}
