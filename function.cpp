#include <iostream>
using namespace std;
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