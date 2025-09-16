#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main()
{
    double a, x;
    cout<<"Please input a =";
    cin >> a;
    cout<<"Please input x =";
    cin >> x;
    double y = (x > 0 && a>0) ? exp(pow(x,a)) : pow(x,exp(a)) ;
    // if (x > 0 && a>0)
    // {
    //     y = exp(pow(x,a));
    // }
    // else
    // {
    //     y = pow(x,exp(a));
    // }
    cout<< "Result: y ="<<y<<endl;
    return 0;
}
