#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

// посилання reference
// тип & назва = ініціаліація;
// const тип & назва = ініціаліація;
int main() {
    int a =90;
    int& ra = a;
    cout << ra << endl;
    cout << a << endl;
    ra = 100;
    cout << ra << endl;
    cout << a << endl;
    int * const pra = &a;
    *pra = 123;
    cout << ra << endl;
    cout << a << endl;
    cout << *pra << endl;
    const int& ra2 = a;   //   const int * const pra2 = &a;
 //   ra2 = 77;
    cout << ra2 << endl;
    return 0;
}
