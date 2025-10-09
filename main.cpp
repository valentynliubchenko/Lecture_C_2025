#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    //
   // double* mas = (double*)malloc(sizeof(double) *n); //створення динамічного масиву

    double* mas = new double[n];


    for (int i = 0; i < n; i++) {
        mas[i] = rand()%10000/100.0;
    }
    for (int i = 0; i < n; i++) {
        cout << mas[i] << " ";
    }
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += mas[i];
    }
    cout<<"\nThe sum is: "<<sum;

    //free(mas);
    delete [] mas;
return 0;
}
