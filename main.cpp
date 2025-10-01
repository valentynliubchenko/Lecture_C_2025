#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
    const int n= 3;
    const int m= 4;
    int matr[n][m];
    // srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matr[i][j] = rand() % 200 -100;
        }
    }

    for (int i = 0; i < n; i++,cout<<endl)
        for (int j = 0; j < m; j++)
            cout << matr[i][j] << "\t";

    int sum = 0;
    int neg =0;
    int min = matr[0][0];
    int max = matr[0][0];

    for (int i = 0; i < n; i++) {
        for (int ii = 0; ii < m; ii++) {
            sum += matr[i][ii];
            if (matr[i][ii] < 0) {
                neg++;
            }
            if (matr[i][ii] > max) {
                max = matr[i][ii];
            }
            if (matr[i][ii] < min) {
                min = matr[i][ii];
            }
        }
    }
    cout<<endl<<"sum = "<<sum<<endl;
    cout<<endl<<"neg = "<<neg<<endl;
    cout<<endl<<"min = "<<min<<endl;
    cout<<endl<<"max = "<<max<<endl;
    return 0;
}
