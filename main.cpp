#include <iostream>
#include <exception>
using namespace std;

int main() {
    int n;
    int m;
    int w;
    cout << "Enter n>0" << endl;
    cin >> n;
    cout << "Enter m>0" << endl;
    cin >> m;

    cout << "Enter w>0" << endl;
    cin >> w;

    if (n <= 0 || m <= 0 || w <= 0) {
        cout << "Invalid Input" << endl;
        return 1;
    }
    // створення динамічного масиву по другій схемі
    double ***mas3D = new double **[n];
    for (int i = 0; i < n; ++i) {
        mas3D[i] = new double*[m];
        for (int j = 0; j < m; ++j) {
            mas3D[i][j] = new double[w];
        }
    }



    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            for (int l = 0; l < w; l++){
            mas3D[i][j][l] = rand() % 10000 / 100.0;
        }
    }

    for (int i = 0; i < n; i++, cout << endl) {
        for (int j = 0; j < m; j++, cout << endl)
            for (int l = 0; l < w; l++){
            cout << mas3D[i][j][l] << "\t";
        }
    }
//    sort
     int index3  =2;
     for (int index = 0; index < m; index++) { //задаємо який стовпчик ми сортуємо
         for (int k = 0; k < n - 1; k++)
             for (int i = 0; i < n - 1 - k; i++) {
                 if (mas3D[i + 1][index][index3] < mas3D[i][index][index3]) {
                     double temp = mas3D[i + 1][index][index3];
                     mas3D[i + 1][index][index3] = mas3D[i][index][index3];
                     mas3D[i][index][index3] = temp;
                 }
             }
     }

     //
     cout <<"\nResult"<< endl;

    for (int i = 0; i < n; i++, cout << endl) {
        for (int j = 0; j < m; j++, cout << endl)
            for (int l = 0; l < w; l++){
                cout << mas3D[i][j][l] << "\t";
            }
    }
    delete[] mas3D;

    return 0;
}
