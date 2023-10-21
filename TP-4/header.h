#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#define nil NULL

using namespace std;
typedef int infotype;
typedef struct elmlist *address;
struct elmlist {
    infotype info;
    address next;
};
struct List {
    address first;
};

void createList_1301223029(List &L);

address allocate_1301223929(infotype x);

void insertFirst_13012223029(List &L, address P);

void printInfo_1301223029(List L);

void insertLast_1301223029(List &L , address p);

void insertAfter_1301223029(List &L , address prec, address p);

void deleteLast_1301223029(List &L);

void deleteAfter_1301223029(List &l);

address searchInfo_1301223029(List L);

void inputNIM_1301223029(List &L, int loop );


#endif // HEADER_H_INCLUDED
