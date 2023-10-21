#include "header.h"
#include <iostream>



void createList_1301223029(List &L){
    L.first = NULL;
}
adr createNewElm_1301223029(infotype data){
    adr p;
    p = new elmList;

    p->info = data;
    p->next = NULL;
    return p;
}
void insertLast_1301223029(List &L, adr p){
    adr q;
    if (L.first == NULL){
        L.first = p;
    }else {
        q = L.first;
        while (q->next != NULL){
            q = q->next;
        }
        q->next = p;
    }
}
void showData_1301223029(List L){
    adr p;
    int i = 1;
    if (L.first == NULL){
        cout << "List Kosong" << endl;
    }else {
        cout << "Seluruh data yang ada di List : "<< endl;
        p = L.first;
        while (p != NULL){
            cout << "   -Data ke-"<< i << " : " << p->info << " " <<endl;
            p = p->next;
            i++;
        }
    }

}

adr longestName_1301223029(List L){
    int terpanjang;
    adr p ,q;
    p = L.first;
    q = L.first;
    terpanjang = (p->info).length();
    while (p != NULL){
        if (terpanjang < (p->info).length()){
            terpanjang =  (p->info).length();
            q = p;
        }
        p = p->next;

    }
    return q;

}
void showFirstName_1301223029(List L, int k , char c){
    adr p ;
    int i =1;
    p = L.first;
    cout << "Nama dengan awalan " << c << " : " << endl;
    while (p != NULL){
        if (c == (p->info)[0]) {
            k++;
            cout <<"    -Nama ke-" << i << " : " << p->info << endl;
            i++;
        }
        p = p->next;
    }
    if (k == 0) {
        cout << "Tidak ditemukan nama dengan awalan huruf " << c << endl; 
    }else {
        cout << "Terdapat " << k << " nama dengan awalan " << c << endl;

    }
    
    
}

void menu_1301223029(){
    cout << endl;
    cout << "======MENU======"<<endl;
    cout << "1. Menambahkan N data baru"<<endl;
    cout << "2. Menampilkan semua data "<<endl;
    cout << "3. Menampilkan alamat dengan nama terpanjang"<<endl;
    cout << "4. Menampilkan nama dengan awalan huruf"<<endl;
    cout << "0. Exit"<<endl;
    cout << "================"<<endl;
    cout << endl;
}
