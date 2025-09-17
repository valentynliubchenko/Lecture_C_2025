#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
    int a = 5;
    int b = 10;
    cout<<a<<" "<<b<<endl;
    int c = a;
    a=b;
    b=c;
    cout<<a<<" "<<b<<endl;
    return 0;
}
