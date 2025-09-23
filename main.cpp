#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

// 1 break     - switch for while do while
// 2 continue  -  for while do while
// 3 goto будь де
// 4 return - повертає результ із функції

int main() {

    srand(time(NULL));
    while (true) {
        int x = rand()%100;
        cout << x << " ";
        if (x%13==0 && x!=0) {
            break;
        }
    }
    cout << "exit"<<endl;
    return 0;
}
