#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
int main()
{
    char str[100] = "Help me ";
    char str2[100]="please";
    strcat(str, str2 );
    cout << str << endl;

    return 0;
}
