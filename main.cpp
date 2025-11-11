#include <iostream>
#include <stdlib.h>
using namespace std;
struct T3
{
    int a;
    struct
    {
        int b;
    }obj, obj2,obj3;
    char c;
};
int main()
{
    T3 t;
    t.a = 1;
//    t.b = 2;
    t.c = 3;
    cout << sizeof(t) << endl;//8

    return 0;
}
