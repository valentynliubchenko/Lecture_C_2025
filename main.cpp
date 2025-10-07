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
            matr[i][j] = rand() % 201 - 100;
        }
    }

    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < n; j++)
            cout << matr[i][j] << "\t";


    for (int k = 0; k < n-1; ++k) //повторення порівнання усіх сусідів
        for (int i = 0; i < n-1-k; ++i)//процедура порівняння усіх сусідів
        {
            if (abs(matr[i+1][i+1]) < abs(matr[i][i]))
            {//перестановка елементів за правилом трьох стаканів
                int c = matr[i+1][i+1];
                matr[i+1][i+1] = matr[i][i];
                matr[i][i] = c;
            }
        }

    cout<<endl<<endl;
    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < n; j++)
            cout << matr[i][j] << "\t";

    return 0;
}
