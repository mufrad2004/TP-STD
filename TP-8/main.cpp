#include <iostream>
#include "header.h"
using namespace std;
int main(){
    List L,L2;
    createList_1301223029(L);
    createList_1301223029(L2);
    insertLast_1301223029(L, alokasi_1301223029(5));
    insertLast_1301223029(L, alokasi_1301223029(15));
    insertLast_1301223029(L, alokasi_1301223029(25));
    insertLast_1301223029(L, alokasi_1301223029(35));
    insertLast_1301223029(L, alokasi_1301223029(45));
    insertLast_1301223029(L, alokasi_1301223029(55));
    insertLast_1301223029(L, alokasi_1301223029(65));
    insertLast_1301223029(L, alokasi_1301223029(75));
    insertLast_1301223029(L, alokasi_1301223029(85));
    printInfo_1301223029(L);
    deleteByValue_1301223029(L,5);
    deleteByValue_1301223029(L,100);
    deleteByValue_1301223029(L,45);
    deleteByValue_1301223029(L,85);
    printInfo_1301223029(L);
    reverseList_1301223029(L,L2);
    printInfo_1301223029(L);
    printInfo_1301223029(L2);
    return 0;
}