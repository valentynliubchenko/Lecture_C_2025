#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
    int mas[5] = {10, 20, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        cout << mas[i] << " ";
    }
    cout<<mas<<endl;
    int * pmas;
    pmas = mas;
    cout<<pmas<<endl;
    cout<<mas[0]<<endl;
    cout<<&mas[0]<<endl;
    *pmas = 111;
    cout<<endl;
    for (int i = 0; i < 5; i++) {
        cout << mas[i] << " ";
    }
    pmas = &mas[3];   // mas+3
    *pmas = 323;
    cout<<endl;
    for (int i = 0; i < 5; i++) {
        cout << mas[i] << " ";
    }
    return 0;
}
