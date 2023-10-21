#include "header.h"
#include <iostream>
using namespace std;


void createList_1301223029(List &L){
    L.first = NULL;
}

address allocate_1301223929(infotype x){
    address p = new elmlist;
    p->info = x;
    p->next = NULL;

    return p;
}
void insertFirst_13012223029(List &L, address P){
    address q ;
    if (L.first == NULL) {
        L.first = P;
    }else if ((L.first->next) == NULL) {
        q = L.first;
        L.first = P;
        (P->next) = q;
    }

}


void printInfo_1301223029(List L){
    address p ;
    p = L.first;
    while (p != NULL) {
        cout << (p->info);
        p = (p->next);
    }

}


void insertLast_1301223029(List &L , address p){
    address q ;
    q = (L.first);

    if ((L.first) == NULL) {
        (L.first) = p;
    }else {
        while ((q->next) !=NULL) {
            q =  (q->next);
        }

        (q->next) = p;
    }
}


void insertAfter_1301223029(List &L , address prec, address p){
    address q;

    q = (prec->next);
    (prec->next) = p;
    (p->next) = prec;
}

void deleteLast_1301223029(List &L){
    address q,p;
    q = (L.first);
    p = (L.first);
    if ((L.first) == NULL) {
        cout << "List kosong" <<endl;
    }else if ((L.first->next)==NULL){
        (L.first) = NULL;
    }else {

        while ((p->next) != NULL) {
            q = p;
            p = (p->next);
        }

        (q->next) = NULL;
    }
}

void deleteAfter_1301223029(List &L , address prec ){
    address p;
    p = (prec->next);
    (prec->next) = (p->next);
}

address searchInfo_1301223029(List L, infotype x){
    address p,q;
    q = NULL;
    if ((L.first)!= NULL) {
        p = (L.first);
        while ((p->info) != x) {
            p = (p->next);
        }
        q = p;
    }

    return q;
}


void inputNIM_1301223029(List &L, int loop) {
    infotype NIM;
    address p;
    for (int i = 1 ; i <= loop; i++){
        cout << "Digit " << i << " : ";
        cin >> NIM;
        p = allocate_1301223929(NIM);
        insertLast_1301223029(L, p);

    }
}
