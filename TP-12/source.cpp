#include "header.h"

void createListJadwal_1301223029(listJadwal &l){
    l.first =NULL;
}


adr createElmJadwal_1301223029(infotype x){
    adr p;
    p = new elmJadwal;
    p->info = x;
    p->next = NULL;
    return p;
}

void insertLast_1301223029(listJadwal &l, adr p){
    adr q;
    if (l.first == NULL){
        l.first = p;
    }else {
        q = l.first;
        while(q->next != NULL){
            q= q->next;
        }
        q->next = p;
    }
}

void showJadwal_1301223029(listJadwal l){
    adr p;
    p = l.first;
    if (l.first == NULL){
        cout << "Jadwal kosong " << endl;
    }else {
        while(p != NULL){
            cout << p->info.kode << " " << p->info.jenis << " " << p->info.tanggal << " " << p->info.waktu << " " << p->info.asal << " " << p->info.tujuan << " " << p->info.kapasitas << endl;
        }
    }
}


void delelteFirst_1301223029(listJadwal &l, adr &p){
    if(l.first == NULL){
        cout << "Jadwal kosong " << endl;
    }else {
        p = l.first;
        l.first = p->next;
        p->next = NULL;
    }
}

adr searchJ_1301223029(listJadwal l, string asal, string tujuan, string tanggal){
    adr p;
    p = l.first;
    if(l.first == NULL){
        p = NULL;
    }else {
        while(p != NULL && p->info.asal != asal && p->info.tujuan != tujuan && p->info.tanggal != tanggal){
            p = p->next;
        }

    }
    return p;
}

