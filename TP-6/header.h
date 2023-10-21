#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <string>
#include<iostream>
using namespace std;


struct lagu{
    string penyayi;
    string judul;
};


typedef lagu infotype;
typedef struct elmList *adr;



struct elmList
{
    infotype info;
    adr prev;
    adr next;
};

struct List{
    adr first;
    adr last;
};


void buatList_1301223029(List &L);
bool isEmpty_1301223029(List L);
infotype buatData_1301223029(string penyanyi,string judul);
adr createNewElmt_1301223029(infotype x, adr p);
void insertFirst_1301223029(List &L, adr p);
void insertAfter_1301223029(List &L,adr &prec, adr &p);
void insertLast_1301223029(List &L, adr p);
void deleteFirst_1301223029(List &L,adr &p);
void deleteAfter_1301223029(List &L, adr &prec, adr &p);
void deleteLast_1301223029(List &L,adr &p);
void concat_1301223029(List L1 , List L2 , List &L3);
adr findLagu_1301223029(string judul, List L);
void removeLagu_1301223029(string judul, List &L);
void menu_1301223029();
void showAll_1301223029(List L);

#endif