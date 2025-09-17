#include <iostream>
#include <math.h>
using namespace std;

int main() {
    const int n = 5;
    int mas[n];
    // int a;
    // cin>>a;
    for (int i = 0; i < n; ++i) {
        cout<<"Enter number: "<<i<<": ";
        cin>>mas[i] ;
    }

    for (int i = 0; i < n; ++i) {
        cout << mas[i] << " ";
    }

    return 0;
}
