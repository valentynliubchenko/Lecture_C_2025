#include <iostream>
using namespace std;
#define STR(s) #s
#define createF(name,type) void name##_##type(type& a,type& b)\
{\
char strname[] = STR(name ## _ ## type);\
cout<< strname << " was create";\
type c=a;\
a = b;\
b = c;\
}
createF(swap, int)
createF(swap, double)
int main()
{
    int x = 3, y = 5;
    swap_int(x, y);
    cout << endl << x << " " << y << endl;
    double a = 3.5, b = 5.5;
    swap_double(a, b);
    cout<<endl << a<< " " << b << endl;
    system("Pause");
    return 0;
}