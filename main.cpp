// Створити структуру яка зберігає інформацію про студента.
// Студент характеризується полями : Ім’я Середній бал.
// Створити масив структур, який зберігає інформацію про групу.
// Відсортувати елементи масиву за абеткою та вивести на екран.

#include <iostream>
#include <math.h>
using namespace std;

double myExp (double a) {
    return  exp(a+5.0);;
}

double myY (double a) {
    double b = myExp(a);
    double res = sin(b)/cos(-b);
    return  res;
}


int main() {
    cout << myExp(2.0) << endl;


    return 0;
}

