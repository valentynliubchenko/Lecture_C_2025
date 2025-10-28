#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{
    char str[] =   "asdf45645g 3456sD  FDF ";
    int num = 0;
    for (int i = 0; i < str[i]!='\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z'
            || str[i] >= 'a' && str[i] <= 'z') {
            ++num;
        }
    }
    cout << num;

}

