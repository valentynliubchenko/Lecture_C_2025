#include <cstdint>
#include <iostream>
#include <intrin.h>
using namespace std;
int f1 (int a) {
    cout<<"input a "<<a<<"\t"<<&a<<endl;
    ++a;
    cout<<"new a "<<a<<endl;
    return a;
}

int f2 (int* a) {
    cout<<"input a "<<*a<<"\t"<<a<<endl;
    ++(*a);
    cout<<"new a "<<(*a)<<endl;
    return (*a);
}

int f3 (int& a) {
    cout<<"input a "<<a<<"\t"<<&a<<endl;
    ++a;
    cout<<"new a "<<a<<endl;
    return a;
}


int main()
{
    {
        int obj1 =10;
        cout<<"obj1 "<<&obj1<<endl;
        int res = f1(obj1);
        cout<<res<<endl;  //11
        cout<<obj1<<endl; //10
    }
    cout<<"--------"<<endl;
    {
        int obj1 =10;
        cout<<"obj1 "<<&obj1<<endl;
        int res = f2(&obj1);
        cout<<res<<endl;  //11
        cout<<obj1<<endl; //10
    }
    cout<<"--------"<<endl;
    {
        int obj1 =10;
        cout<<"obj1 "<<&obj1<<endl;
        int res = f3(obj1);
        cout<<res<<endl;  //11
        cout<<obj1<<endl; //10
    }


    return 0;
}
