#include <cstdint>
#include <iostream>
#include <intrin.h>
using namespace std;

void printMas(const int *mas, int n) {
    for (int i = 0; i < n; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;
}

void randMas(int *mas, int n) {
    for (int i = 0; i < n; i++) {
        mas[i] = rand() % 10;
    }
}

int countMas(int *mas, int n) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (mas[i] % 2 == 0) {
            ++c;
        }
    }
    return c;
}

int sumMas(int *mas, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += mas[i];
    }
    return sum;
}


int main() {
    int mas1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int mas2[5] = {43545, 2232, 56564, 445456, 343};
    printMas(mas1, 10);

    cout << countMas(mas1, 10) << endl;
    cout << endl;
    printMas(mas2, 5);
    cout << countMas(mas2, 5) << endl;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int *mas3 = new int[n];
    randMas(mas3, n);
    printMas(mas3, n);
    cout << sumMas(mas3, n) << endl;
    delete[] mas3;
    return 0;
}
