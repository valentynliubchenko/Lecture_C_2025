#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{
    char str[100] = "Help me, please wweewww!";
    char * curCh = strchr(str, 'e');
    int num = 0;
    while(curCh != NULL) {
        ++num;
        *curCh ='*';
        curCh = strchr(curCh+1, 'e');
    }
    cout << num << endl;
    cout << str << endl;

    return 0;
}
