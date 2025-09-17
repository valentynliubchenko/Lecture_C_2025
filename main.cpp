#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
    int a = 5;
    int b = 10;
    cout<<a<<" "<<b<<endl;
    a = a + b; // a 15 b 10
    b = a - b; // a 15 b 5
    a = a - b; // a 10 b 5

    cout<<a<<" "<<b<<endl;
    return 0;
}
