#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str[] = "RepetitioR este mater studiorum. eghjttyyt HelpH. eKJHLKJHLkt esdfgsdfg";
    char strres[1000]="";
    char delimiters[] = " ;,!.\t\n"; //розділові знаки
    std::cout << str << std::endl;
    char *curWord = strtok(str, delimiters); //пошук першого слова
    while (curWord) {
        if (curWord[0] == curWord[strlen(curWord) -1] ) {
//            cout << curWord << "\t" << strlen(curWord) << endl;
            strcat(strres, curWord);
            strcat(strres, " ");
        }
        curWord = strtok(NULL, delimiters); //пошук наступного слова
    }
    cout<<strres<<endl;
    return 0;
}
