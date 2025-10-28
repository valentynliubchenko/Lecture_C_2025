#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
    int col = 0;
    char str[] = "      Help,5654      ";
    char delimiters[] = " ";//розділові знаки
    printf("[%s]\n",str);
    char* curWord = strtok(str, delimiters);//пошук першого слова
    printf("[%s]",curWord);

    return 0;
}
