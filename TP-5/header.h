#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;

typedef string infotype ;
typedef struct elmList *adr;

struct elmList {
    infotype info;
    adr next;
};

struct List {
    adr first;
};

void createList_1301223029(List &L);
adr createNewElm_1301223029(infotype data);
void insertLast_1301223029(List &L, adr p);
void showData_1301223029(List L);
adr longestName_1301223029(List L);
void showFirstName_1301223029(List L, int k , char c);

void menu_1301223029();




#endif // HEADER_H_INCLUDED
