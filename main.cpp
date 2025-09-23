#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

// 1 break     - switch for while do while
// 2 continue  -  for while do while
// 3 goto будь де
// 4 return - повертає результ із функції

int main() {

    for (int i = 1; i <= 10; i++) {
        if (i%3==0) {
            continue;
        }
        cout << i << " ";
    }
    cout << "exit"<<endl;
    return 0;
}
