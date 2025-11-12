// Створити структуру яка зберігає інформацію про студента.
// Студент характеризується полями : Ім’я Середній бал.
// Створити масив структур, який зберігає інформацію про групу.
// Відсортувати елементи масиву за абеткою та вивести на екран.

#include <iostream>
#include <math.h>
using namespace std;

double myExp(double a) {
    return exp(a + 5.0);;
}

double myY(double a) {
    double b = myExp(a);
    double res = sin(b) / cos(-b);
    return res;
}

void printRange(double beginA, double endA, double step) {
    for (double a = beginA; a < endA + step / 100.0; a += step) {
        cout << a << "\t" << myY(a) << endl;
    }
    cout<<"-----------------"<<endl;
}

int main() {
    printRange(2.0, 10.0, 1.5);
    printRange(200.0, 600.0, 15);
    printRange(0.1, 1., 0.2);


    return 0;
}
