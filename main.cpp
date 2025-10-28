#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str[100] ="";
    int n;
    do {
        cout<<" Input n>0:  ";
        cin >>str;
        n = atoi(str);
    } while (n <= 0);
    int * mas = new int[n];
    for (int i = 0; i < n; i++) {
        mas[i] = rand() % 100;
        cout<<mas[i]<<" ";
    }

    delete[] mas;

    return 0;
}
