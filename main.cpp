#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

// ТИП* ІМЯ = (ТИП*)malloc(sizeof(ТИП));
// free(ІМЯ);
struct myT {
    int a,t,fd,gh,f,r;
    char msg[1000];
};

int main() {

    cout<<sizeof(myT)<<endl;
    myT* b = (myT*)malloc(sizeof(myT));

    (*b).gh = 89 ;
    cout<<(*b).gh<<endl;

    free(b);

    return 0;
}
