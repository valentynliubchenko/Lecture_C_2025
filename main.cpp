// Створити структуру яка зберігає інформацію про студента.
// Студент характеризується полями : Ім’я Середній бал.
// Створити масив структур, який зберігає інформацію про групу.
// Відсортувати елементи масиву за абеткою та вивести на екран.

#include <iostream>
#include <math.h>
using namespace std;

int sub (int a, int b) {
    return a - b;
}

int main() {
    cout << sub(10, 7) << endl;
    int m =6, t=9;
    int res = sub(m, t);
    cout << res << endl;
    int a = 10, b = 2;
    cout << sub(a,b) << endl;
    cout << sub(b,a) << endl;

    return 0;
}

