#include "header.h"
#include <string>
#include<iostream>
using namespace std;


void buatList_1301223029(List &L){
    L.first = NULL;
    L.last = NULL;

}

bool isEmpty_1301223029(List L){
    return L.first == NULL;

}
infotype buatData_1301223029(string penyanyi,string judul){
    infotype data;
    data.penyayi = penyanyi;
    data.judul = judul;
    return data;
}

adr createNewElmt_1301223029(infotype x, adr p){
    p = new elmList;
    p->info = x;
    p->next = NULL;
    p->prev = NULL;
    return p;
}


void insertFirst_1301223029(List &L, adr p){
    if (isEmpty_1301223029(L)){
        L.first = p;
        L.last  = p;
    }else {
        p->next = L.first;
        L.first->prev = p;
        L.first = p;
    }
}
void insertLast_1301223029(List &L, adr p){
    if (isEmpty_1301223029(L)){
        L.first = p;
        L.last = p;
    }else {
        p->prev = L.last;
        L.last->next = p;
        L.last = p;
    }

}
void insertAfter_1301223029(List &L,adr &prec, adr &p){
    if (prec == L.last) {
        // * Kalo prec ada di elemen akhir atau cuman ada 1 elemen
        insertLast_1301223029(L,p);
    }else {
        p->prev = prec;
        p->next = prec->next;
        prec->next = p;
        prec->next->prev = p;
    }

}


void deleteFirst_1301223029(List &L,adr &p){
    if (p == L.first){
        L.first = NULL;
        L.last = NULL;
    }else {
        p = L.first;
        L.first = p->next;
        p->next = NULL;
        L.first->prev = NULL;

    }

}

void deleteAfter_1301223029(List &L, adr &prec, adr &p){
    if (prec->next == L.last) {
        deleteLast_1301223029(L,p);
    }else {
        p = prec->next;
        prec->next = p->next;
        p->next->prev = prec;
        p->next = NULL;
        p->prev = NULL;
    }

}

void deleteLast_1301223029(List &L,adr &p){
    if (p== L.first) {
        L.first =NULL;
        L.last = NULL;
    }else {
        p = L.last;
        L.last = p->prev ; 
        p->prev = NULL;
        L.last->next = NULL;
    }

}


void concat_1301223029(List L1 , List L2 , List &L3){
    L1.last->next = L2.first;
    L2.first->prev = L1.last;
    
    L3.first = L1.first;
    L3.last= L2.last;
        

}


adr findLagu_1301223029(string judul, List L){
    adr p ;
    p = L.first;

    while (p != NULL && judul != p->info.judul){
        p  = p ->next;
    }

    return p ;
}
void removeLagu_1301223029(string judul, List &L){
    adr p;
    if (isEmpty_1301223029(L)){
        cout << "Playlist kosong"<< endl;
    }else {
        p  = findLagu_1301223029(judul , L);
        if (p == L.first){
            deleteFirst_1301223029(L,p);
        }else if (p == L.last){
            deleteLast_1301223029(L,p);
        }else {
            deleteAfter_1301223029(L,p->prev, p);
        }
    }
}
void showAll_1301223029(List L){
    adr p ;
    p = L.first;
    int i = 1;
    if (isEmpty_1301223029(L)) {
        cout << "Kosong"<<endl;
    }else {
        while (p != NULL){
            cout << "   +Lagu " << i << " : " <<endl;
            cout << "       -Penyanyi   : " << p->info.penyayi <<endl;
            cout << "       -Judul      : " << p->info.judul<<endl;
            cout << endl;
            i++;
            p = p->next;
        }

    }

}

void menu_1301223029(){
    cout << "--------------------------------------------------------"<<endl;
    cout << "1. Buat Playlist baru"<<endl;
    cout << "2. Masukkan lagu"<<endl;
    cout << "3. Hapus lagu"<<endl;
    cout << "4. Gabungkan playlist"<<endl;
    cout << "5. Tampilkan Playlist anda"<<endl;
    cout << "6. Keluar"<<endl;
    cout << "--------------------------------------------------------"<<endl;
}




