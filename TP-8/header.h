#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
using namespace std;
typedef int infotype;
typedef struct elmList *adr;

struct  elmList
{
    infotype info;
    adr next;
    adr prev;
};

struct List {
    adr first;
    adr last;
};

void createList_1301223029(List &L);
adr alokasi_1301223029(infotype x);
void dealokasi_1301223029(adr &p);
void insertFirst_1301223029(List &L, adr p);
void insertAfter_13012230209(List &L, adr prec, adr p);
void insertLast_1301223029(List &L, adr p);
adr findElm_1301223029(List L, infotype x);
void deleteFirst_1301223029(List &L , adr &p);
void deleteAfter_13012230209(List &L , adr prec, adr &p);
void deleteLast_1301223029(List &L , adr &p);
void printInfo_1301223029(List L);
void deleteByValue_1301223029(List &L, infotype x);
void reverseList_1301223029(List L, List &L2);
#endif