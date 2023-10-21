#include "header.h"
#include <string>
#include<iostream>
using namespace std;


int main(){
    List List1,List2,List3;
    adr p,q;
    infotype data;
    int pilihan;
    int masukkanLagu;
    int punyaList;
    int pilihList;
    int jmlList = 0;
    string penyanyi, judul, cariJudul;


    
    menu_1301223029();
    cout << "Pilihan : ";
    cin >> pilihan;
    cout << "--------------------------------------------------------"<<endl<<endl;

    while (pilihan != 6){
        cout << "--------------------------------------------------------"<<endl;

        if (pilihan ==1) {
            if (jmlList ==2) {
                cout << "Anda hanya dapat membuat 2 List" <<endl;
            }else {
                if (jmlList == 0 ){
                    buatList_1301223029(List1);
                    jmlList++;
                }else if (jmlList ==1){
                    buatList_1301223029(List2);
                    jmlList++;
                }
                cout << "List"<<jmlList<< " telah dibuat"<<endl;
            }
        }else if (pilihan ==2) {
            if (jmlList ==0){
                // *Kalo gk punya list , buat dulu
                cout << "Anda belum punya list. Silakan membuat list terlebih dahulu" <<endl;
            }else if (jmlList==1){
                // * Masukkan lagu ke List1
                cout << "--------------------------------------------------------"<<endl;
                cout << "1. Masukkan di awal " <<endl;
                cout << "2. Masukkan di akhir " <<endl;
                cout << "3. Masukkan di tengah " <<endl;
                cout << "--------------------------------------------------------"<<endl;
                cout << "Pilihan : " ;
                cin >> masukkanLagu;
                cout << "--------------------------------------------------------"<<endl<<endl;

                if (masukkanLagu == 1) {
                    cout << "Masukkan nama penyanyi : ";
                    cin >> penyanyi;
                    cout << "Masukkan judul lagu    : ";
                    cin >> judul;
                    data.penyayi = penyanyi;
                    data.judul = judul;
                    p = createNewElmt_1301223029(data,p);
                    insertFirst_1301223029(List1,p);
                }else if (masukkanLagu == 2) {
                    cout << "Masukkan nama penyanyi : ";
                    cin >> penyanyi;
                    cout << "Masukkan judul lagu    : ";
                    cin >> judul;
                    data.penyayi = penyanyi;
                    data.judul = judul;
                    p = createNewElmt_1301223029(data,p);
                    insertLast_1301223029(List1,p);
                }else {
                    if (isEmpty_1301223029(List1)){
                        cout << "Masukkan nama penyanyi : ";
                        cin >> penyanyi;
                        cout << "Masukkan judul lagu    : ";
                        cin >> judul;
                        data.penyayi = penyanyi;
                        data.judul = judul;
                        p = createNewElmt_1301223029(data,p);
                        insertLast_1301223029(List1,p);
                    }else {
                        showAll_1301223029(List1);
                        cout << "------------------------------------------------------"<<endl;
                        cout << "***Lagu akan dimasukkan setelah judul yang ditentukan ***"<<endl;
                        cout << "------------------------------------------------------"<<endl;
                        cout << "Tentukan judul : ";
                        cin >> cariJudul;
                        q = findLagu_1301223029(cariJudul,List1);
                        cout << "------------------------------------------------------"<<endl;
                        cout << "Masukkan nama penyanyi : ";
                        cin >> penyanyi;
                        cout << "Masukkan judul lagu    : ";
                        cin >> judul;
                        data.penyayi = penyanyi;
                        data.judul = judul;
                        p = createNewElmt_1301223029(data,p);
                        insertAfter_1301223029(List1, q, p);
                    }
                }    
            } else {
                // * kalo udh, cek punya 1 atau 2 list nya 
                cout << "------------------------------------------------------"<<endl;
                if (jmlList ==2) {
                    cout << "1. Masukkan ke List1"<<endl;
                    cout << "2. Masukkan ke List2"<<endl;
                    cout << "------------------------------------------------------"<<endl;
                    cout << "Pilihan : ";
                    cin >> pilihList;
                    cout << "--------------------------------------------------------"<<endl<<endl;

                    if (pilihList ==1) {
                        // * Masukkan lagu ke List1
                        cout << "------------------------------------------------------"<<endl;
                        cout << "1. Masukkan di awal " <<endl;
                        cout << "2. Masukkan di akhir " <<endl;
                        cout << "3. Masukkan di tengah " <<endl;
                        cout << "------------------------------------------------------"<<endl;
                        cout << "Pilihan : " ;
                        cin >> masukkanLagu;
                        cout << "--------------------------------------------------------"<<endl<<endl;

                        if (masukkanLagu == 1) {
                            cout << "Masukkan nama penyanyi : ";
                            cin >> penyanyi;
                            cout << "Masukkan judul lagu    : ";
                            cin >> judul;
                            data.penyayi = penyanyi;
                            data.judul = judul;
                            p = createNewElmt_1301223029(data,p);
                            insertFirst_1301223029(List1,p);
                        }else if (masukkanLagu == 2) {
                            cout << "Masukkan nama penyanyi : ";
                            cin >> penyanyi;
                            cout << "Masukkan judul lagu    : ";
                            cin >> judul;
                            data.penyayi = penyanyi;
                            data.judul = judul;
                            p = createNewElmt_1301223029(data,p);
                            insertLast_1301223029(List1,p);
                        }else {
                            if (isEmpty_1301223029(List1)){
                                cout << "Masukkan nama penyanyi : ";
                                cin >> penyanyi;
                                cout << "Masukkan judul lagu    : ";
                                cin >> judul;
                                data.penyayi = penyanyi;
                                data.judul = judul;
                                p = createNewElmt_1301223029(data,p);
                                insertLast_1301223029(List1,p);
                            }else {
                                showAll_1301223029(List1);
                                cout << "------------------------------------------------------"<<endl;
                                cout << "***Lagu akan dimasukkan setelah judul yang ditentukan ***"<<endl;
                                cout << "------------------------------------------------------"<<endl;
                                cout << "Tentukan judul : ";
                                cin >> cariJudul;
                                q = findLagu_1301223029(cariJudul,List1);
                                cout << "------------------------------------------------------"<<endl;
                                cout << "Masukkan nama penyanyi : ";
                                cin >> penyanyi;
                                cout << "Masukkan judul lagu    : ";
                                cin >> judul;
                                data.penyayi = penyanyi;
                                data.judul = judul;
                                p = createNewElmt_1301223029(data,p);
                                insertAfter_1301223029(List1, q, p);
                            }
                        }
                    }else if (pilihList ==2) {
                        // *Masukkan lagu ke List2
                        cout << "------------------------------------------------------"<<endl;
                        cout << "1. Masukkan di awal " <<endl;
                        cout << "2. Masukkan di akhir " <<endl;
                        cout << "3. Masukkan di tengah " <<endl;
                        cout << "------------------------------------------------------"<<endl;
                        cout << "Pilihan : " ;
                        cin >> masukkanLagu;
                        cout << "--------------------------------------------------------"<<endl<<endl;
                
                        if (masukkanLagu == 1) {
                            cout << "Masukkan nama penyanyi : ";
                            cin >> penyanyi;
                            cout << "Masukkan judul lagu    : ";
                            cin >> judul;
                            data.penyayi = penyanyi;
                            data.judul = judul;
                            p = createNewElmt_1301223029(data,p);
                            insertFirst_1301223029(List2,p);
                        }else if (masukkanLagu == 2) {
                            cout << "Masukkan nama penyanyi : ";
                            cin >> penyanyi;
                            cout << "Masukkan judul lagu    : ";
                            cin >> judul;
                            data.penyayi = penyanyi;
                            data.judul = judul;
                            p = createNewElmt_1301223029(data,p);
                            insertLast_1301223029(List2,p);
                        }else {
                            if (isEmpty_1301223029(List2)){
                                cout << "Masukkan nama penyanyi : ";
                                cin >> penyanyi;
                                cout << "Masukkan judul lagu    : ";
                                cin >> judul;
                                data.penyayi = penyanyi;
                                data.judul = judul;
                                p = createNewElmt_1301223029(data,p);
                                insertLast_1301223029(List2,p);
                            }else {
                                showAll_1301223029(List2);
                                cout << "------------------------------------------------------"<<endl;
                                cout << "***Lagu akan dimasukkan setelah judul yang ditentukan ***"<<endl;
                                cout << "------------------------------------------------------"<<endl;
                                cout << "Tentukan judul : ";
                                cin >> cariJudul;
                                q = findLagu_1301223029(cariJudul,List2);
                                cout << "------------------------------------------------------"<<endl;
                                cout << "Masukkan nama penyanyi : ";
                                cin >> penyanyi;
                                cout << "Masukkan judul lagu    : ";
                                cin >> judul;
                                data.penyayi = penyanyi;
                                data.judul = judul;
                                p = createNewElmt_1301223029(data,p);
                                insertAfter_1301223029(List2, q, p);
                            }
                        }
                    }
                }else if (jmlList ==3) {
                    cout << "1. Masukkan ke List1"<<endl;
                    cout << "2. Masukkan ke List2"<<endl;
                    cout << "3. Masukkan ke List3"<<endl;
                    cout << "------------------------------------------------------"<<endl;
                    cout << "Pilihan : ";
                    cin >> pilihList;
                    cout << "--------------------------------------------------------"<<endl<<endl;

                    if (pilihList ==1) {
                        // * Masukkan lagu ke List1
                        cout << "------------------------------------------------------"<<endl;
                        cout << "1. Masukkan di awal " <<endl;
                        cout << "2. Masukkan di akhir " <<endl;
                        cout << "3. Masukkan di tengah " <<endl;
                        cout << "------------------------------------------------------"<<endl;
                        cout << "Pilihan : " ;
                        cin >> masukkanLagu;
                        cout << "--------------------------------------------------------"<<endl<<endl;

                        if (masukkanLagu == 1) {
                            cout << "Masukkan nama penyanyi : ";
                            cin >> penyanyi;
                            cout << "Masukkan judul lagu    : ";
                            cin >> judul;
                            data.penyayi = penyanyi;
                            data.judul = judul;
                            p = createNewElmt_1301223029(data,p);
                            insertFirst_1301223029(List1,p);
                        }else if (masukkanLagu == 2) {
                            cout << "Masukkan nama penyanyi : ";
                            cin >> penyanyi;
                            cout << "Masukkan judul lagu    : ";
                            cin >> judul;
                            data.penyayi = penyanyi;
                            data.judul = judul;
                            p = createNewElmt_1301223029(data,p);
                            insertLast_1301223029(List1,p);
                        }else {
                            if (isEmpty_1301223029(List1)){
                                cout << "Masukkan nama penyanyi : ";
                                cin >> penyanyi;
                                cout << "Masukkan judul lagu    : ";
                                cin >> judul;
                                data.penyayi = penyanyi;
                                data.judul = judul;
                                p = createNewElmt_1301223029(data,p);
                                insertLast_1301223029(List1,p);
                            }else {
                                showAll_1301223029(List1);
                                cout << "------------------------------------------------------"<<endl;
                                cout << "***Lagu akan dimasukkan setelah judul yang ditentukan ***"<<endl;
                                cout << "------------------------------------------------------"<<endl;
                                cout << "Tentukan judul : ";
                                cin >> cariJudul;
                                q = findLagu_1301223029(cariJudul,List1);
                                cout << "------------------------------------------------------"<<endl;
                                cout << "Masukkan nama penyanyi : ";
                                cin >> penyanyi;
                                cout << "Masukkan judul lagu    : ";
                                cin >> judul;
                                data.penyayi = penyanyi;
                                data.judul = judul;
                                p = createNewElmt_1301223029(data,p);
                                insertAfter_1301223029(List1, q, p);
                            }
                        }
                    }else if (pilihList ==2) {
                        // *Masukkan lagu ke List2
                        cout << "------------------------------------------------------"<<endl;
                        cout << "1. Masukkan di awal " <<endl;
                        cout << "2. Masukkan di akhir " <<endl;
                        cout << "3. Masukkan di tengah " <<endl;
                        cout << "------------------------------------------------------"<<endl;
                        cout << "Pilihan : " ;
                        cin >> masukkanLagu;
                        cout << "--------------------------------------------------------"<<endl<<endl;

                        if (masukkanLagu == 1) {
                            cout << "Masukkan nama penyanyi : ";
                            cin >> penyanyi;
                            cout << "Masukkan judul lagu    : ";
                            cin >> judul;
                            data.penyayi = penyanyi;
                            data.judul = judul;
                            p = createNewElmt_1301223029(data,p);
                            insertFirst_1301223029(List2,p);
                        }else if (masukkanLagu == 2) {
                            cout << "Masukkan nama penyanyi : ";
                            cin >> penyanyi;
                            cout << "Masukkan judul lagu    : ";
                            cin >> judul;
                            data.penyayi = penyanyi;
                            data.judul = judul;
                            p = createNewElmt_1301223029(data,p);
                            insertLast_1301223029(List2,p);
                        }else {
                            if (isEmpty_1301223029(List2)){
                                cout << "Masukkan nama penyanyi : ";
                                cin >> penyanyi;
                                cout << "Masukkan judul lagu    : ";
                                cin >> judul;
                                data.penyayi = penyanyi;
                                data.judul = judul;
                                p = createNewElmt_1301223029(data,p);
                                insertLast_1301223029(List2,p);
                            }else {
                                showAll_1301223029(List2);
                                cout << "------------------------------------------------------"<<endl;
                                cout << "***Lagu akan dimasukkan setelah judul yang ditentukan ***"<<endl;
                                cout << "------------------------------------------------------"<<endl;
                                cout << "Tentukan judul : ";
                                cin >> cariJudul;
                                q = findLagu_1301223029(cariJudul,List2);
                                cout << "------------------------------------------------------"<<endl;
                                cout << "Masukkan nama penyanyi : ";
                                cin >> penyanyi;
                                cout << "Masukkan judul lagu    : ";
                                cin >> judul;
                                data.penyayi = penyanyi;
                                data.judul = judul;
                                p = createNewElmt_1301223029(data,p);
                                insertAfter_1301223029(List2, q, p);
                            }
                        }
                    }else {
                        // *Masukkan lagu ke List3
                        cout << "------------------------------------------------------"<<endl;
                        cout << "1. Masukkan di awal " <<endl;
                        cout << "2. Masukkan di akhir " <<endl;
                        cout << "3. Masukkan di tengah " <<endl;
                        cout << "------------------------------------------------------"<<endl;
                        cout << "Pilihan : " ;
                        cin >> masukkanLagu;
                        cout << "--------------------------------------------------------"<<endl<<endl;

                        if (masukkanLagu == 1) {
                            cout << "Masukkan nama penyanyi : ";
                            cin >> penyanyi;
                            cout << "Masukkan judul lagu    : ";
                            cin >> judul;
                            data.penyayi = penyanyi;
                            data.judul = judul;
                            p = createNewElmt_1301223029(data,p);
                            insertFirst_1301223029(List3,p);
                        }else if (masukkanLagu == 2) {
                            cout << "Masukkan nama penyanyi : ";
                            cin >> penyanyi;
                            cout << "Masukkan judul lagu    : ";
                            cin >> judul;
                            data.penyayi = penyanyi;
                            data.judul = judul;
                            p = createNewElmt_1301223029(data,p);
                            insertLast_1301223029(List3,p);
                        }else {
                            if (isEmpty_1301223029(List3)){
                                cout << "Masukkan nama penyanyi : ";
                                cin >> penyanyi;
                                cout << "Masukkan judul lagu    : ";
                                cin >> judul;
                                data.penyayi = penyanyi;
                                data.judul = judul;
                                p = createNewElmt_1301223029(data,p);
                                insertLast_1301223029(List3,p);
                            }else {
                                showAll_1301223029(List3);
                                cout << "------------------------------------------------------"<<endl;
                                cout << "***Lagu akan dimasukkan setelah judul yang ditentukan ***"<<endl;
                                cout << "------------------------------------------------------"<<endl;
                                cout << "Tentukan judul : ";
                                cin >> cariJudul;
                                q = findLagu_1301223029(cariJudul,List3);
                                cout << "------------------------------------------------------"<<endl;
                                cout << "Masukkan nama penyanyi : ";
                                cin >> penyanyi;
                                cout << "Masukkan judul lagu    : ";
                                cin >> judul;
                                data.penyayi = penyanyi;
                                data.judul = judul;
                                p = createNewElmt_1301223029(data,p);
                                insertAfter_1301223029(List3, q, p);
                            }
                        }
                    }
                }
                
            }

        }else if (pilihan ==3) {
            if (jmlList ==1) {
                // * List cuman 1
                if (isEmpty_1301223029(List1)){
                    cout << "Playlist kosong"<<endl;
                }else {
                    showAll_1301223029(List1);
                    cout << "------------------------------------------------------"<<endl;
                    cout << "Masukkan judul yang ingin dihapus : ";
                    cin >> cariJudul;
                    removeLagu_1301223029(cariJudul,List1);
                    cout << cariJudul<< " berhasil dihapus dari List1"<< endl;

                }
            }else {
                cout << "1. Masukkan ke List1"<<endl;
                cout << "2. Masukkan ke List2"<<endl;
                cout << "------------------------------------------------------"<<endl;
                cout << "Pilihan : ";
                cin >> pilihList;
                cout << "--------------------------------------------------------"<<endl<<endl;


                if (pilihList==1) {
                    if (isEmpty_1301223029(List1)){
                        cout << "Playlist kosong"<<endl;
                    }else {
                        showAll_1301223029(List1);
                        cout << "------------------------------------------------------"<<endl;
                        cout << "Masukkan judul yang ingin dihapus : ";
                        cin >> cariJudul;
                        removeLagu_1301223029(cariJudul,List1);
                        cout << cariJudul<< " berhasil dihapus dari List1"<< endl;

                    }
                }else {
                    if (isEmpty_1301223029(List2)){
                        cout << "Playlist kosong"<<endl;
                    }else {
                        showAll_1301223029(List2);
                        cout << "------------------------------------------------------"<<endl;
                        cout << "Masukkan judul yang ingin dihapus : ";
                        cin >> cariJudul;
                        removeLagu_1301223029(cariJudul,List2);
                        cout << cariJudul<< " berhasil dihapus dari List2"<< endl;

                    }
                }
            }
        }else if (pilihan ==4) {
            if (jmlList ==1) {
                cout << "Anda hanya punya 1 List, silakan buat List ke 2 anda"<<endl;
            }else {
                concat_1301223029(List1,List2,List3);
                jmlList++;
                cout << "List1 dan List2 anda berhasil digabungkan"<<endl;
            }
            
        }else if (pilihan ==5) {
            if (jmlList ==1) {
                cout << "#List1 anda : "<<endl;
                showAll_1301223029(List1);
            }else if (jmlList==2) {
                cout << "#List1 anda : "<<endl;
                showAll_1301223029(List1);
                cout << endl;
                cout << "#List2 anda : "<<endl;
                showAll_1301223029(List2);
                cout << endl;
            }else {
                cout << "#List1 anda : "<<endl;
                showAll_1301223029(List1);
                cout << endl;
                cout << "#List2 anda : "<<endl;
                showAll_1301223029(List2);
                cout << endl;
                cout << "#List3 anda : "<<endl;
                showAll_1301223029(List3);
                cout << endl;

            }
        }else {
            cout << "Pilihan tidak valid"<<endl;
        }

        menu_1301223029();
        cout << "Pilihan : ";
        cin >> pilihan;
        cout << "--------------------------------------------------------"<<endl<<endl;
    
    }

    return 0;
}