#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str[] = "Repetitio este mater studiorumsiue. Help. EIUIUOUOIU eme";
    char delimiters[] = " ;,!.\t\n"; //розділові знаки
    char gl[] = "EUIOAeuioa";
    std::cout << str << std::endl;
    char *curWord = strtok(str, delimiters); //пошук першого слова
    char * pMax = NULL;
    int numMax = 0;

    while (curWord) {
        int num=0;
        for (int i = 0; curWord[i] != '\0'; i++) {
            if ( strchr(gl, curWord[i]) != NULL) {
                ++num;
            }
        }
        cout << curWord << "\t" << num << endl;
        if (pMax ==NULL ||
            pMax !=NULL &&( num > numMax)) {
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
