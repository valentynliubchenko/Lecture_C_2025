#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str[] = 	"This header declares a set of functions to classify "
        " and transform individual charactkers.";
    cout << str << endl;
    char * p1 = strchr(str, 'a');
    char * p2 = strrchr(str, 'i');
    char res[1000]="";
    if (p1&&p2) {
        if (p1<p2)
            strncat(res, p1+1, p2-p1-1);
        else
            strncat(res, p2+1, p1-p2-1);
    }
    else
        cout << "Not found" << endl;
    cout<<res<<endl;


    return 0;
}
