#include <iostream>
#include <time.h>
#include <string.h>
using namespace std;
struct Tnod
{
    int num;
    char name[10];
    Tnod* next;
};

int main()
{

    Tnod * pbeg = NULL;
    int n = 10;
// створення лінійного списку
    for (int i = 0; i < n; i++) {
        Tnod * ptmp = new Tnod;  //1 крок
        // 2 start
        ptmp->num = i;

        //name
        for (int j = 0; j < 9; j++) {
            ptmp->name[j] = 'A' + rand() % 26;
        }
        ptmp->name[9] = '\0';
        // 2 end

        ptmp->next = pbeg; //3 крок
        pbeg = ptmp; //4 крок

    }

    // Друкування лінійного списку
    Tnod * pcur = pbeg;
    while (pcur != NULL) {
        cout << pcur->num << " " <<pcur->name <<endl;

        pcur = pcur->next;
    }

//звільнити лінійний список
    while (pbeg != NULL) {
        cout << "Delete "<<pbeg->num << " " <<pbeg->name <<endl;
        Tnod * ptmp = pbeg; //1
        pbeg = pbeg->next;//2
        delete ptmp;//3
    }


    return 0;
}
