#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str[] = "Repetitio est mater studiorum. eghjttyyt Help. eKJHLKJHLkt esdfgsdfg";
    char strres[1000]="";
    char delimiters[] = " ;,!\t\n"; //розділові знаки
    std::cout << str << std::endl;
    char *curWord = strtok(str, delimiters); //пошук першого слова
    while (curWord) {
        if (curWord[0] == 'e' && curWord[strlen(curWord) -1] =='t') {
//            cout << curWord << "\t" << strlen(curWord) << endl;
            strcat(strres, curWord);
            strcat(strres, " ");
        }
        curWord = strtok(NULL, delimiters); //пошук наступного слова
    }
    cout<<strres<<endl;
    return 0;
}
