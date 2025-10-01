#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
    const int n= 3;
    const int m= 4;
    int matr[n][m];
//    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matr[i][j] = rand() % 20 -10;
        }
    }

    for (int i = 0; i < n; i++,cout<<endl)
        for (int j = 0; j < m; j++)
            cout << matr[i][j] << "\t";

    int sum = 0;
    int neg =0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += matr[i][j];
            if (matr[i][j] < 0) {
                neg++;
            }
        }
    }
    cout<<endl<<"sum = "<<sum<<endl;
    cout<<endl<<"neg = "<<neg<<endl;
    return 0;
}
