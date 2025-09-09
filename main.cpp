#include <iostream>
using namespace std;
void f() {
    int a = 10;
    ++a;
    cout << "a= "<< a << endl;
    static int b = 10;
    ++b;
    cout << "b= " <<b << endl;
}
extern int x;
int main() {
    for (int i = 0; i < 10; ++i) {
        f();
    }

    return 0;
}
