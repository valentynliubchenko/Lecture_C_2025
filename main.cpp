#include <iostream>
#include <stdlib.h>
using namespace std;
struct T1
{
    int a;
    struct
    {
        int b;
    };
    char c;
};
int main()
{
    T1 t;
    t.a = 1;
    t.b = 2;
    t.c = 3;
    cout << sizeof(t) << endl;//12
    system("PAUSE");
    return 0;
}
