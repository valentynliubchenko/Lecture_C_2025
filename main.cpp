#include <iostream>
#include <exception>
using namespace std;

int main() {
    int n;
    int m;
    cout << "Enter n>0" << endl;
    cin >> n;
    cout << "Enter m>0" << endl;
    cin >> m;
    if (n <= 0 || m <= 0) {
        cout << "Invalid Input" << endl;
        return 1;
    }
    double ** matr = new double*[n];
    for (int i = 0; i < n; i++) {
        matr[i] = new double[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matr[i][j] = rand() % 10000/100.0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matr[i][j] << "\t";
        }
        cout << endl;
    }
//sort
    int index = 2;
    if ( index<0 || index>=m) {
        cout<< "Invalid index";
        return 2;
    }

    for (int k = 0; k < n-1; k++)
    for (int i = 0; i < n-1-k; i++) {
        if (matr[i+1][index]< matr[i][index]) {
            double temp = matr[i+1][index];
            matr[i+1][index] = matr[i][index];
            matr[i][index] =temp;
        }
    }

    //
    cout<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matr[i][j] << "\t";
        }
        cout << endl;
    }



    for (int i = 0; i < n; i++) {
        delete[] matr[i];
    }
    delete[] matr;

    return 0;
}
