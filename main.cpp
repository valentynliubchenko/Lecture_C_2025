#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
    const int n = 10;
    int mas[n];
//    srand(time(NULL));
    for (int i = 0; i < n; ++i) {
        mas[i] = rand()%100;
    }

    for (int i = 0; i < n; ++i) {
        cout << mas[i] << " ";
    }

    return 0;
}
