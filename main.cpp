#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main() {
    int a = 15;
    int b = 7;
    int min;
    if (a < b) {
        min = a;
    } else {
        min = b;
    }
    cout << min << endl;
    return 0;
}
