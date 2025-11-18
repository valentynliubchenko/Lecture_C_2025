#include <iostream>
using namespace std;

template<typename MyT>
MyT** createMatr(int n, int m)
{
    if (n < 1 || m < 1) return NULL;
    MyT** matr = new MyT* [n];
    for (int i = 0; i < n; ++i)
        matr[i] = new MyT[m];
    return matr;
}

template<typename MyT>
void deleteMatr(MyT**& matr, int n)
/*покажчик matr передається за посиланням, для того щоб можно було його змінити його значення на NULL */
{
    for (int i = 0; i < n; ++i)
        delete[] matr[i];
    delete[] matr;
    matr = NULL;
}
template<typename MyTempl>
void randMatr(MyTempl** matr, int n, int m)
{
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            matr[i][j] = (rand() % 201 - 100)/10.0;
}

template<typename MyT>
void outputMatr(MyT** matr, int n, int m)
{
    for (int i = 0; i < n; ++i, cout << endl)
        for (int j = 0; j < m; ++j)
            cout << matr[i][j] << "\t";
    cout << endl;
}


int main()
{
    int n,m;
    cout << "Enter the size of the matrix: ";
    cin >> n >> m;
    int **matr =createMatr<int>(n, m);
    randMatr(matr, n, m);
    outputMatr<int>(matr, n, m);
    deleteMatr(matr, n);

    double **matrDouble = createMatr<double>(n, m);
    randMatr(matrDouble, n, m);
    outputMatr(matrDouble, n, m);
    deleteMatr(matrDouble, n);

    return 0;
}
