#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str[] = "    ";
    char delimiters[] = " ;,!.\t\n"; //розділові знаки
    char gl[] = "EUIOAeuioa";
    std::cout << str << std::endl;
    char *curWord = strtok(str, delimiters); //пошук першого слова
    char * pMax = curWord;
    int numMax = 0;
    for (int i = 0; curWord&&curWord[i] != '\0'; i++) {
        if ( strchr(gl, curWord[i]) != NULL) {
            ++numMax;
        }
    }
    while (curWord) {
        int num=0;
        for (int i = 0; curWord[i] != '\0'; i++) {
            if ( strchr(gl, curWord[i]) != NULL) {
                ++num;
            }
        }
        cout << curWord << "\t" << num << endl;
        if (num > numMax) {
            numMax = num;
            pMax = curWord;
        }

        curWord = strtok(NULL, delimiters); //пошук наступного слова
    }
    if (pMax)
        cout <<"max = "<< pMax << endl;
    else
        cout <<"no found "<< endl;
    return 0;
}
