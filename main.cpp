// Створити структуру яка зберігає інформацію про студента. Студент характеризується полями: Ім’я, Прізвище, Середній бал, Адреса проживання.
// Адреса проживання являється також структурою з полями: Вулиця , Номер будинку, Номер квартири.
// Створити об’єкт і ввести усю інформацію з клавіатури. Вивести усі поля структури.

#include <iostream>
#include <string.h>
using namespace std;

struct Adr {
    char street[20];
    int numBuild;
    int numFlat;
};

struct Student {
    char name[20];
    char lastName[20];
    int avarge;
    Adr adr;
};
int main()
{
    //введення
    char tmpStr[100]="";
    Student student;
    cout << "Enter student name: ";
    cin.getline(student.name,19);
    cout << "Enter student last name: ";
    cin.getline(student.lastName,19);
    cout << "Enter student avarge: ";
    cin.getline(tmpStr,99);
    student.avarge = atoi(tmpStr);
    cout << "Enter Street ";
    cin.getline(student.adr.street,99);
    cout << "Enter numBuild ";
    cin.getline(tmpStr,99);
    student.adr.numBuild = atoi(tmpStr);
    cout << "Enter numFlat ";
    cin.getline(tmpStr,99);
    student.adr.numFlat = atoi(tmpStr);

    //виведення
    cout<<"Name: "<<student.name<<endl;
    cout<<"Last Name: "<<student.lastName<<endl;
    cout<<"Avarge: "<<student.avarge<<endl;
    cout<<"Street "<<student.adr.street<<endl;
    cout<<"NumBuild "<<student.adr.numBuild<<endl;
    cout<<"NumFlat "<<student.adr.numFlat<<endl;




    return 0;
}
