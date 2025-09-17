#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
    unsigned int a = 5;
    unsigned int b = 7;
    cout<<a<<" "<<b<<endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout<<a<<" "<<b<<endl;
    return 0;
}
