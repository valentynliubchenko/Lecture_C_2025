#include <iostream>
#include <string.h>
using namespace std;

int main() {
    const int n = 6;
    char pibs[n][20] = {
        "Ivanov K.",
        "Sidirov Z.",
        "Abramov R.",
        "aPetrov Z.",
        "Mirosh R.",
        "Rudnev Z."
    };
    for (int i = 0; i < n; i++) {
        cout << pibs[i] << endl;
    }

    for (int k = 0; k < n - 1; k++) {
        for (int i = 0; i < n - 1 - k; i++) {
            if (strcmp(pibs[i + 1], pibs[i]) < 0) {
                char c[20];
                strcpy(c, pibs[i + 1]);
                strcpy(pibs[i+1], pibs[i]);
                strcpy(pibs[i], c);
            }
        }
    }
    cout<<endl<<endl;
    for (int i = 0; i < n; i++) {
        cout << pibs[i] << endl;
    }
    return 0;
}
