#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

// 1 break     - switch for while do while
// 2 continue  -  for while do while
// 3 goto будь де
// 4 return - повертає результ із функції

int main() {
    bool err1 = false;
    bool err2 = true;
    bool err3 = false;
    cout<<"processing 1"<<endl;
    if (err1) {
        goto myend;
    }
    cout<<"processing 2"<<endl;
    if (err2) {
        goto myend;
    }
    cout<<"processing 3"<<endl;

    if (err3) {
        goto myend;
    }
    cout<<"processing 4"<<endl;
    goto exit_program;
    myend:
    cout<<"Error processing!"<<endl;
    exit_program:
    cout<<"Exit!"<<endl;
    return 0;
}
