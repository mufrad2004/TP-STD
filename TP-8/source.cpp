#include "header.h"
void createList_1301223029(List &L){
    L.first = NULL;
    L.last = NULL;
}

adr alokasi_1301223029(infotype x){
    adr p;
    p = new elmList; 
    p->info = x;
    p->next = NULL;
    p->prev = NULL;

    return p;

}
void dealokasi_1301223029(adr &p){
    delete p;
     p = NULL;
}

void insertFirst_1301223029(List &L, adr p){
    if (L.first == NULL){
        L.first = p;
        L.last = p;
        p->next = L.first;
        p->prev = L.last;
    }else{
        p->next = L.first;
        L.first->prev = p;
        L.first = p;
        p->prev = L.last;
        L.last->next = L.first;

    }
}
void insertLast_1301223029(List &L, adr p){
    if (L.first == NULL){
        L.first = p;
        L.last = p;
        p->next = L.first;
        p->prev = L.last;
    }else {
        p->prev = L.last;
        L.last ->next = p;
        L.last = p;
        p->next = L.first;
        L.first->prev = L.last;
    }

}

void insertAfter_13012230209(List &L, adr prec, adr p){
    if (prec->next == L.first){
        // * elemen akhir atau cuman ada 1 elemen
        insertLast_1301223029(L,p);
    }else {
        p->prev = prec;
        p->next = prec->next;
        prec->next->prev = p;
        prec->next = p;
    }
    
}


adr findElm_1301223029(List L, infotype x){
    adr p ;
    int lap = 0 ;
    if (L.first == NULL){
        p = NULL;
        return p;
    }else {
        p = L.first;
        while (lap != 1){
            if (p->info == x ){
                return p;
            }else {
                p = p->next;
            }
            if (p == L.first){
                lap++;
                p = NULL;
            }
        }
    }
    return p;
}


void deleteFirst_1301223029(List &L , adr &p){
    if (L.first == NULL){
        cout << "List kosong" <<endl;
    }else if (L.first == L.last) {
        // * Cuman 1 elemen
        p = L.first;
        L.first = NULL;
        L.last = NULL;
    }else {
        // * banyak elemen
        p = L.first;
        L.first = p->next;
        L.first->prev = L.last;
        L.last->next = L.first;
    }

}

void deleteLast_1301223029(List &L , adr &p){
    if (L.first == NULL){
        cout << "List Kosong" << endl;
    }else if (L.first == L.last) {
        // * Kalo cuman ada 1 elemen
        p = L.last;
        L.first = NULL;
        L.last= NULL;
    }else {
        // * kalo elemennya banyak
        p = L.last;
        L.last = p->prev ;
        L.first->prev = L.last;
        L.last->next = L.first;
    }

}


void deleteAfter_13012230209(List &L , adr prec, adr &p){
    if (L.first == NULL){
        cout << "List kosong"<<endl;
    }else if (prec->next == L.first){
        // * Kalo prec ada di elemen akhir atau elemen cuman 1
        deleteLast_1301223029(L,p);
    }else {
        p = prec->next;
        prec->next= p->next;
        p->next->prev = prec;
        L.last = L.first->prev;
    }
    
}



void printInfo_1301223029(List L){
    adr p ;
    int lap= 0;
    if (L.first == NULL){
        cout << "List Kosong" << endl;
    }else {
        p = L.first;
        while (lap != 1 ){
            cout << p->info << " ";
            p = p->next;
            if (p == L.first){
                lap++;
            }
        }
    }
    cout << endl;
}

void deleteByValue_1301223029(List &L, infotype x){
    adr p;
    adr temp;
    int lap =0;
    if (L.first == NULL){
        cout << "List Kosong" << endl;
    }else {
        p = L.first;
        while (lap != 1 ){
            if (p->info == x){
                if (p == L.first){
                    // * kalo yang sama di awal
                    deleteFirst_1301223029(L,temp);
                }else if (p == L.last ){
                    // * Kalo yang sama di akhir
                    deleteLast_1301223029(L,temp);
                }else {
                    // * kalo yang sama di tengah tengah
                    deleteAfter_13012230209(L, p->prev , temp);
                }
            }

            p = p->next;
            if (p == L.first){
                lap++;
            }
        }
    }   

}


void reverseList_1301223029(List L, List &L2){
    adr p;
    adr duplikasi;
    int lap= 0;
    if (L.first == NULL){
        cout << "List Kosong"<<endl;
    }else  {
        p = L.last;
        duplikasi = alokasi_1301223029(p->info);
        insertLast_1301223029(L2,duplikasi);
        while (lap != 1){
            p = p->prev;
            if (p == L.last){
                lap++;
            }
        }
        

    }

}
