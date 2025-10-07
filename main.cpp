#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
    const int n = 5;
    int matr[n][n];
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matr[i][j] = rand() % 20 - 10;
        }
    }

    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < n; j++)
            cout << matr[i][j] << "\t";

    cout<<endl<<endl;
    for (int i = 0; i < n; i++) {
                cout << matr[i][n-i-1] << "\t";
    }

    int s = 0 ;
    for (int i = 0; i < n; i++) {
        s += matr[i][n-i-1];
    }
    cout << "\n\ns = "<<s << endl;

    return 0;
}
