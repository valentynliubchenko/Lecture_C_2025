#include <iostream>
#include <math.h>
using namespace std;
long long  factorial(int n) {
    if (n<=1) return 1;
    return n*factorial(n-1);
}
long long  factorialIter(int n) {
    if (n<=1) return 1;
    long long res =1;
    for (int i=2;i<=n;i++) {
        res *= i;
    }
    return res;
}

int main() {
    for (int x = 1; x <= 20; ++x)
        cout << "x=" << x << "\tfactorial="
         << factorial(x) <<"\t" << factorialIter(x) << endl;


    return 0;
}
