#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int x = 0, y = 0;
    for ( x=0; x<4; y = x, ++x) {
        cout<<" current x = "<<x<<endl;
        cout<<" current y = "<<y<<endl;
    }
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;


    cout<<"Exit";
    return 0;
}
