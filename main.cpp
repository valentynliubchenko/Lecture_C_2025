#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
int main()
{
    char str[100] = "Help me please";
    char strC[100]="Hello world";
    char *res = strcpy(strC+6, str+5);
    cout << str << endl;
    cout << strC << endl;
    cout << res << endl;
    cout << strC << endl;
    cout << res << endl;



    return 0;
}
