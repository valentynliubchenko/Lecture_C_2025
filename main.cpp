// Створити структуру яка зберігає інформацію про студента.
// Студент характеризується полями : Ім’я Середній бал.
// Створити масив структур, який зберігає інформацію про групу.
// Відсортувати елементи масиву за абеткою та вивести на екран.

#include <iostream>
#include <string.h>
using namespace std;


int main() {
    char tmpStr[100] = "help me please";
    char resstr[100]="";
    cout << tmpStr << endl;;
    strrev(tmpStr);
    cout << tmpStr << endl;;
    char sep[] = " ,.";
    char *curWord = strtok(tmpStr, sep);
    while (curWord != NULL) {
        cout << curWord << endl;
        strrev(curWord);
        cout << curWord << endl;
        strcat(resstr, curWord);
        strcat(resstr, " ");
        curWord = strtok(NULL, sep);
    }
    //     "help me"
    //     "em pleh"
    // "em" -> "me"
    // "pleh" -> "help"
    cout<<"----------"<<endl;
    cout<<resstr<<endl;
    return 0;
}
