#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main() {
    int a = 5;
    int b = 7;
    int min = (a<b) ? a : b;

    // if (a < b) {
    //     min = a;
    // } else {
    //     min = b;
    // }
    cout << min << endl;
    return 0;
}
