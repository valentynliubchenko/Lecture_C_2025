#include<iostream>
#include<stdlib.h>
using namespace std;
#define WIN
//#undef WIN

// #if defined <==> #ifdef
// #if !defined <==> #ifndef
int main()
{
#ifndef UNIX
    cout<<"Windows"<<endl;
#else
    cout<<"unix"<<endl;
#endif

    return 0;
}
