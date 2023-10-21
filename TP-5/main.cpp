#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    List L;
    adr p ,q;
    infotype data;
    int inputData;
    int k = 0;
    char c;
    int pilihan;


    createList_1301223029(L);
    menu_1301223029();
    cout << "Pilihan anda : ";
    cin >> pilihan;

    while (pilihan != 0 ) {
        if (pilihan == 1) {
            cout << "Jumlah data yang ingin ditambah : ";
            cin >> inputData;
            for (int i = 1 ; i <=inputData ;i++) {
                cout << "   -Masukkan nama ke-" << i << " : ";
                cin >> data;
                p = createNewElm_1301223029(data);
                insertLast_1301223029(L, p);
            }
        }else if (pilihan == 2) {
            showData_1301223029(L);
        }else if (pilihan == 3) {
            q = longestName_1301223029(L);
            cout << "   -Nama terpanjang    : " << q->info<< endl;
            cout << "   -Alamat             : " << q << endl;
        }else {
            cout << "Masukkan huruf : " ;
            cin >> c;      
            showFirstName_1301223029(L,k,c);      

        }



        menu_1301223029();
        cout << "Pilihan anda : ";
        cin >> pilihan;
    }
    cout << "ANDA TELAH KELUAR DARI PROGRAM"<<endl;

    return 0;

    
}
