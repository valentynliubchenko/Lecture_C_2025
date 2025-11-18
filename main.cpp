#include <iostream>
#include <string.h>
using namespace std;

void randMatr(int * matr, int n, int m, int a, int b)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            matr[i*m+j] = rand()%(b-a)+a;
        }
    }
}

void outputMatr( const int *matr, int n, int m)
{
    for (int i = 0; i < n; ++i, cout << endl) {
        for (int j = 0; j < m; ++j) {
            cout << matr[i*m+j] << "\t";
        }
    }
    cout << endl;
}

int sumMatr( const int * matr, int n, int m)
{
    int sum =0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            sum += matr[i*m+j];
        }
    }
    return sum;
}

int main() {
    const int n =4;
    const int m =5;
    int matr[n][m];
    randMatr(matr[0], n,m, 5,15); // matr[0]   <==>&matr[0][0]
    outputMatr(matr[0], n, m);

    cout << sumMatr(matr[0], n, m) << endl;

    return 0;
}

