#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct Triangle {
    struct {
        int x, y;
    }p1, p2,p3;
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


    cout << "exit" << endl;
    return 0;
}
