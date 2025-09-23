#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

// 1 break     - switch for while do while
// 2 continue  -  for while do while
// 3 goto будь де
// 4 return - повертає результ із функції

int main() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                int x = rand() % 100;
                cout << i << " " << j << " " << k << " " << x << endl;
                if (x % 13 == 0 && x != 0) {
                    cout << "Break" << endl;
                    goto myexit;
                }
            }
        }
    }
    myexit:
    return 0;
}
