#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double x,y;
    char ch;
    do
    {
        cout<<"Enter x:";
        cin>>x;
        y = pow(sin(x),x);
        cout<<" y = "<<y<<endl; ;
        cout<<"continue: (y/n)?";
        cin>>ch;
    }while (ch=='y'||ch=='Y');
    cout<<endl;
    return 0;
}
