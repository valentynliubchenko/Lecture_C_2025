#include <iostream>
#include <math.h>
using namespace std;

void randMas(int* mas, int n)
{
    for (int i = 0; i < n; ++i)
        mas[i] = rand() % 21 - 10;
}
void outputMas(const int* mas, int n)
{
    for (int i = 0; i < n; ++i)
        cout << mas[i] << " ";
    cout << endl;
}
bool cmpLess(int a, int b) {
    return a < b;
}

bool cmpGreater(int a, int b) {
    return a > b;
}

bool cmpLessAbs(int a, int b) {
    return abs(a) < abs(b);
}

typedef bool (*Tcmp)(int, int);

void sortMas(int* mas, int n, Tcmp cmp)
{
    for (int k = 0; k < n - 1; ++k)
        for (int i = 0; i < n - 1 - k; ++i)
        {
            if (cmp (mas[i + 1], mas[i]))
            {
                int c = mas[i];
                mas[i] = mas[i + 1];
                mas[i + 1] = c;
            }
        }
}

int main()
{
    const int size = 10;
    int massive[size];
    randMas(massive, size);
    outputMas(massive, size);
    sortMas(massive, size, cmpLess);
    outputMas(massive, size);
    sortMas(massive, size, cmpGreater);
    outputMas(massive, size);
    sortMas(massive, size, cmpLessAbs);
    outputMas(massive, size);

    return 0;
}
