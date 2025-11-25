#include<iostream>
#include<stdlib.h>
using namespace std;
#define version 3
int main()
{
#if version == 1
    cout<<"version 1"<<endl;
#elif version == 2
    cout<<"version 2"<<endl;
#elif version == 3
    cout<<"version 3"<<endl;
#else
    cout<<"version 4"<<endl;
#endif

    return 0;
}
