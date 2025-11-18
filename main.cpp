#include <iostream>
#include <string.h>
using namespace std;

void printMas(const int* mas, int size);
int sum(const int* mas, int size);
int main() {
    const int n =10;
    int mas[n] = {1, 20, 13, 4, 5, 6, 7, 8, 9, 10};
    printMas(mas, 10);
    cout << sum(mas, 10) << endl;
    int mas2[6] = {1, 2, 3, 4, 5, 6};
    printMas(mas2, 6);
    cout << sum(mas2, 6) << endl;

    int * mas3 = new int[n];
    for (int i = 0; i < n; i++) {
        mas3[i] = rand() % 10;
    }
    printMas(mas3, n);
    cout << sum(mas3, n) << endl;
    delete[] mas3;

    ////////////////
    ///
    printMas(mas+1, 3);

    return 0;
}

void printMas(const int* mas, int size) {
    for (int i = 0; i < size; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;
}

int sum(const int* mas, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += mas[i];
    }
    return sum;
}