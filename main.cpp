#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
int main()
{
    char str[100] = "Help me please";
    char strC[100]="";
    strncpy(strC, str, 9);
    //strC[9]='\0';
    cout << str << endl;
    cout << strC << endl;


    return 0;
}
