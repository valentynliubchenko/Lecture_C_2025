#include <iostream>
#include <math.h>
using namespace std;
long long  factorial(int n) {
    if (n<=1) return 1;
    return n*factorial(n-1);
}

int main() {
    for (int x = 1; x <= 20; ++x)
        cout << "x=" << x << "\tfactorial="
         << factorial(x) << endl;


    return 0;
}
