#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
    const int n = 3;
    const int m = 4;
    const int k = 2;
    int mas3d[n][m][k];

//    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int ii = 0; ii < m; ii++)
            for (int iii = 0; iii < k; iii++) {
            mas3d[i][ii][iii] = rand() % 201 - 100+1;
        }
    }
    cout<<endl<<endl;
    for (int i = 0; i < n; i++, cout << endl)
        for (int ii = 0; ii < m; ii++) {
            for (int iii = 0; iii < k; iii++)
                cout << mas3d[i][ii][iii] << "\t";
            cout << endl;
        }
    cout<<endl<<endl;
    return 0;
}
