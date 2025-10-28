#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int col = 0;
    char str[] = "      Help, me! PleAase! sdf,gsd weArt qw432 xfgbhAdfyj 5654      ";
    char delimiters[] = " ;!.\t\nA";//розділові знаки
    std::cout << str << std::endl;
    char* curWord = strtok(str, delimiters);//пошук першого слова
    while (curWord)
    {
        cout << curWord << endl;
        curWord = strtok(NULL, delimiters);//пошук наступного слова
    }

    return 0;
}
