#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str[] = "RepetitioR este mater studiorum. eghjttyyt ertereeeeioioa HelpH. eKJHLKJHLkt esdfgsdfg";
    char delimiters[] = " ;,!.\t\n"; //розділові знаки
    char gl[] = "EUIOAeuioa";
    std::cout << str << std::endl;
    char *curWord = strtok(str, delimiters); //пошук першого слова
    while (curWord) {
        int num=0;
        for (int i = 0; curWord[i] != '\0'; i++) {
            if ( strchr(gl, curWord[i]) != NULL) {
                ++num;
            }
        }
        cout << curWord << "\t" << num << endl;
        curWord = strtok(NULL, delimiters); //пошук наступного слова
    }

    return 0;
}
