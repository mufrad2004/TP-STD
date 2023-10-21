#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    List L,NIM;
    int loop;
    infotype nilai, digit;
    address p ;
    createList_1301223029(L);
    cout << "Mau input berapa kali ? " ;
    cin >> loop;

    for(int i = 1 ; i <= loop ; i++) {
        cout << "Input ke " << i << " : ";
        cin >> nilai;
        p = allocate_1301223929(nilai);
        insertLast_1301223029(L, p);
    }

    printInfo_1301223029(L);

    cout << endl << endl;
    createList_1301223029(NIM);
    inputNIM_1301223029(NIM,10);
    printInfo_1301223029(NIM);
    return 0;
}
