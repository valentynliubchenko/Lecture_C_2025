#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
    const int n = 5;
    int mas[n];
    for (int i = 0; i < n; ++i) {
        mas[i] = rand() % 10;
    }

    for (int i = 0; i < n; ++i) {
        cout << mas[i] << " ";
    }
    cout << endl;
    int s = 0;
    for (int i = 0; i < n; ++i) {
        s += mas[i];
    }
    cout << "suma = " << s << endl;

    return 0;
}
