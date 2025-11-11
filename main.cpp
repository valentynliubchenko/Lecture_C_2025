// Створити структуру яка зберігає інформацію про студента.
// Студент характеризується полями : Ім’я Середній бал.
// Створити масив структур, який зберігає інформацію про групу.
// Відсортувати елементи масиву за абеткою та вивести на екран.

#include <iostream>
#include <string.h>
using namespace std;

struct Student {
    char name[100];
    int avarge;
};
int main()
{
    char tmpStr[100]="";

    const int n =3;
    Student info[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter student name: ";
        cin.getline(info[i].name,99);
        cout << "Enter student avarge: ";
        cin >> info[i].avarge;
        cin.getline(tmpStr,99);
        info[i].avarge = atoi(tmpStr);
    }
    //введення

    //виведення
    for (int i = 0; i < n; i++) {
        cout<<info[i].name<<    "\t"<<info[i].avarge<<endl;
    }




    return 0;
}
