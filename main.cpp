#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct Triangle {
    struct Tpoint {
        int x, y;
    };
    Tpoint p1; // Вкладена структура
    Tpoint p2; // Вкладена структура
    Tpoint p3; // Вкладена структура
    char comment[50]; // коментарій
};

int main() {
    Triangle t,t2,t3,t4;
    t.p1.x = 1;
    t.p1.y = 2;
    t.p2.x = 3;
    t.p2.y = 4;
    t.p3.x = 5;
    t.p3.y = 6;
    strcpy(t.comment, "Red Triangle");

    cout << t.p1.x << " " << t.p1.y << endl;
    cout << t.p2.x << " " << t.p2.y << endl;
    cout << t.p3.x << " " << t.p3.y << endl;
    cout << t.comment << endl;
    Triangle::Tpoint p2;
    Triangle::Tpoint p3;
    p2.x = 1;
    p2.y = 2;
    char comment[50]; // коментарій

    cout << "exit" << endl;
    return 0;
}
