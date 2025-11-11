#include <iostream>
#include <stdlib.h>
using namespace std;
struct T4
{
    int a;
    struct T
    {
        int b;
    }obj;
    char c;
};
int main()
{
    T4 t;
    t.a = 1;
    t.obj.b = 2;
    t.c = 3;
    cout << sizeof(t) << endl;//12
    T4::T t2;
    t2.b = 56;

    return 0;
}
