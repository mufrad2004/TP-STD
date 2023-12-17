#include "header.h"

int main(){
    listJadwal j;
    infotype data;
    adr p;
    int n;


    /*
    3
    QG680 Airbus_A320 8_Desember_2022 04.55 jakarta denpasar 180
    QG250 ATR_72600 9_Desember_2022 12.55 surabaya malang 25
    QG250 ATR_72601 9_Desember_2022 19.55 malang surabaya 25


    */


    createListJadwal_1301223029(j);
    cin >> n;
    for (int i = 1 ; i <= n ; i++){
        cin >>data.kode;
        cin >>data.jenis;
        cin >>data.tanggal;
        cin >>data.waktu;
        cin >>data.asal;
        cin >>data.tujuan;
        cin >>data.kapasitas;
        p = createElmJadwal_1301223029(data);
        insertLast_1301223029(j,p);
    }

    delelteFirst_1301223029(j,p);
    p = searchJ_1301223029(j,"surabaya","malang" , "9_Desember_2022" );
    if (p != NULL){
        cout << p->info.kode << " " << p->info.jenis << " " << p->info.tanggal << " " << p->info.waktu << " " << p->info.asal << " " << p->info.tujuan << " " << p->info.kapasitas << endl;
    }else {
        cout << "Tidak ada " << endl;
    }

}