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

void outputStutend (const Student * info, int n) {
    for (int i = 0; i < n; i++) {
        cout<<info[i].name<<    "\t"<<info[i].avarge<<endl;
    }
}

int main()
{
    char tmpStr[100]="";

    int n;
    do {
        cout<<"Enter n>0: ";
        cin.getline(tmpStr,100);
        n=atoi(tmpStr);
    }while(n<=0);

//    Student info[n];
    Student * info = new Student[n];
    // for (int i = 0; i < n; i++) {
    //     cout << "Enter student name: ";
    //     cin.getline(info[i].name,99);
    //     cout << "Enter student avarge: ";
    //     cin >> info[i].avarge;
    //     cin.getline(tmpStr,99);
    //     info[i].avarge = atoi(tmpStr);
    // }
    //введення
    srand(time(NULL));
     for (int i = 0; i < n; i++) {
         info[i].avarge = 60 + rand() % 41;
         for (int j = 0; j < 10; j++) {
             info[i].name[j] = 'A' + rand() % 26;
         }
         info[i].name[10] = '\0';
     }

    //виведення
    outputStutend(info, n);

    for (int k = 0; k < n-1; k++) {
        for (int i =0; i < n-1-k; i++) {
            //if (strcmp(info[i+1].name, info[i].name) < 0) {
            if (info[i+1].avarge < info[i].avarge) {
                Student c;
                c = info[i+1];
                info[i+1] =info[i];
                info[i]= c;
            }
        }
    }
    cout<<"--------------------"<<endl;
    outputStutend(info, n);

    delete [] info;
    return 0;
}
