#include <iostream>
using namespace std;

int qrt(int x) {return x*x;}
#define SWAP(a, b, mytype) {\
        mytype c =b;\
        b=a;\
        a=c;\
}

int main()
{
    cout<<qrt(5)<<endl;
  //  cout<<QRT(5)<<endl;
    double x =2.5, y =9.4;
    SWAP(x,y, double)

    cout<<x<<endl;
    cout<<y<<endl;
    double x2 =21.5, y2 =91.4;
    SWAP(x2,y2, double)

    cout<<x2<<endl;
    cout<<y2<<endl;

    return 0;
}
