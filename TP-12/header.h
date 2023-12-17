#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

struct jadwalPenerbangan
{
    string kode,jenis,tanggal,waktu,asal,tujuan,kapasitas;
};


typedef struct elmJadwal *adr;
typedef jadwalPenerbangan infotype;
struct elmJadwal
{
    infotype info;
    adr next;
};

struct listJadwal
{
    adr first;
};

void createListJadwal_1301223029(listJadwal &l);
adr createElmJadwal_1301223029(infotype x);
void insertLast_1301223029(listJadwal &l, adr p);
void showJadwal_1301223029(listJadwal l);
void delelteFirst_1301223029(listJadwal &l, adr &p);
adr searchJ_1301223029(listJadwal l, string asal, string tujuan, string tanggal);

#endif