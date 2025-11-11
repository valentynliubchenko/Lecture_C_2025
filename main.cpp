#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
struct Tnod
{
    int num;
    char name[100];
    Tnod* next;
};

int main()
{

    Tnod a,b,c;
    a.num = 1;
    strcpy(a.name,"name A");
    b.num = 2;
    strcpy(b.name,"name B");
    c.num = 3;
    strcpy(c.name,"name C");

    cout<<&a<<endl;
    cout<<&b<<endl;
    cout<<&c<<endl;

    a.next = &b;
    b.next = &c;
    c.next = &a;

    cout<<a.name<< " "<<a.num<<endl;
    cout<<a.next->name<< " "<<a.next->num<<endl;
    cout<<b.name<< " "<<b.num<<endl;

    cout<<a.next->next->name<< " "<<a.next->next->num<<endl;
    cout<<c.name<< " "<<c.num<<endl;
    cout<<"-------------"<<endl;
    Tnod * pcur =&a;
    cout<<pcur->name<< " "<<pcur->num<<endl; //a
    pcur = pcur->next; //перехід на наступний елемент (b)
    cout<<pcur->name<< " "<<pcur->num<<endl; //b
    pcur = pcur->next;  //перехід на наступний елемент (c)
    cout<<pcur->name<< " "<<pcur->num<<endl; //c
    pcur = pcur->next;  //перехід на наступний елемент (a)
    cout<<pcur->name<< " "<<pcur->num<<endl; //a


    return 0;
}
