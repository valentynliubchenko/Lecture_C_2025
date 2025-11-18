#include <iostream>
#include <string.h>
using namespace std;

int** createMatr(int n, int m)
{
    if (n < 1 || m < 1) return NULL;
    int** matr = new int* [n];
    for (int i = 0; i < n; ++i)
        matr[i] = new int[m];
    return matr;
}

void createMatr2(int**&matr, int n, int m)
{
    matr = NULL;
    if (n < 1 || m < 1) return ;
    matr = new int* [n];
    for (int i = 0; i < n; ++i)
        matr[i] = new int[m];
}



void deleteMatr(int**& matr, int n)
/*покажчик matr передається за посиланням, для того щоб можно було його змінити його значення на NULL */
{
    for (int i = 0; i < n; ++i)
        delete[] matr[i];
    delete[] matr;
    matr = NULL;
}

void randMatr(int ** matr, int n, int m, int a, int b)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            matr[i][j] = rand()%(b-a)+a;
        }
    }
}

void outputMatr( const int * const * matr, int n, int m)
{
    for (int i = 0; i < n; ++i, cout << endl) {
        for (int j = 0; j < m; ++j) {
            cout << matr[i][j] << "\t";
        }
    }
    cout << endl;
}

int sumMatr( const int * const * matr, int n, int m)
{
    int sum =0;
    for (int i = 0; i < n; ++i, cout << endl) {
        for (int j = 0; j < m; ++j) {
            sum += matr[i][j];
        }
    }
    return sum;
}

int main() {
    int n, m;
    cout << "Enter the size of the matrix: ";
    cin >> n >> m;
    int ** matr = createMatr(n, m);
    randMatr(matr, n,m, 5,15);
    outputMatr(matr, n, m);

    cout << endl << sumMatr(matr, n, m) << endl;

    deleteMatr(matr, n);


    return 0;
}

