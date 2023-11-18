#include "header.h"

int main(){
    adr p;
    queue q, qGenap, qGanjil;
    infotype x;

    createqueue_1301223029(q);
    createqueue_1301223029(qGenap);
    createqueue_1301223029(qGanjil);


    for (int i = 1 ; i <= 11 ; i++){
        cin >> x;
        p = alokasi_1301223029(x);
        enQueue_1301223029(q,p);
    }
    

    printInfo_1301223029(q);
    ganjilGenap_1301223029(q,qGanjil,qGenap);

    cout << "Queue utama : "<<endl;
    printInfo_1301223029(q);
    cout << "Queue ganjil : "<<endl;
    printInfo_1301223029(qGanjil);
    cout << "Queue genap : "<<endl;
    printInfo_1301223029(qGenap);
    return 0;
}

/*
1
2
3
4
5
6
7
8
9
10
11

*/