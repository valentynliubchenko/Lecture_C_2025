#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    char ch[4];
    char str2[] = "Help me please";


    cout << str2 << endl;
    str2[7] = 0;
    cout << str2 << endl;
    cout<<&str2[8]<<endl;
    cout<<str2+8<<endl;



    return 0;
}
