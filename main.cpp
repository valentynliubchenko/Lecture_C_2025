#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main() {
    char str[1000] = "Kyiv, Lviv, Kharkiv, ddKyiv"
            " Kyivskyi, Lvivskyi, Kharkivskyi! Kyiv"
            " Kyivskyi, Lvivskyi, Kharkivskyi! Kyiv";
    char word[] = "Kyiv";
    char sep[] = " ,./!";
    int lenK = strlen(word);
    int num = 0;
    char *curW = strstr(str, word);
    while (curW != NULL) {
        if (strchr(sep, curW[lenK]) != NULL &&
            (curW != str && strchr(sep, curW[-1]) != NULL
             || curW == str
            )
        ) {
            ++num;
            *curW = '-';
        }
        curW = strstr(curW + lenK, word);
    }

    cout << "Num = " << num << endl;
    cout << str << endl;

    return 0;
}
