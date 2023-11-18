#include "header.h"

adr alokasi_1301223029(infotype info){
    adr p ;
    p = new elmQ;
    p->info = info;
    p->next = NULL;
    return p;
}

adr findElmt_1301223029(queue q  , infotype num){
    adr p;
    p = q.head;
    while (p!= NULL){
        if (p->info == num){
            return p;
        }
        p = p->next;
    }
    return p;

}
bool queueEmpty_1301223029(queue q){
    return q.head == NULL;

}
void createqueue_1301223029(queue &q){
    q.head = NULL;
    q.tail= NULL;
}


void dealokasi_1301223029(adr p){
    delete p;
}


void enQueue_1301223029(queue &q , adr p){
    if (queueEmpty_1301223029(q)){
        q.head = p;
        q.tail = p;
    }else {
        q.tail->next = p; 
        q.tail = p;
    }

}
void dequeue_1301223029(queue &q , adr &p){
    if (queueEmpty_1301223029(q)){
        cout << "Kosong"<<endl;
    }else if (q.head == q.tail){
        p = q.head;
        q.head = NULL;
        q.tail = NULL;
    }else {
        p = q.head;
        q.head = p->next ;
        p->next = NULL;
    }
}
void printInfo_1301223029(queue q){
    adr p;
    p = q.head;
    int i = 1;
    if (queueEmpty_1301223029(q)){
        cout << "Kosong"<<endl;
    }else {
        while (p != NULL){
            cout <<"Antiran ke-" << i<< " : " <<p->info << endl;
            p = p->next;
            i++;
        }


    }

}
int nbOfElm_1301223029(queue q){
    int jml = 0;
    adr p ;
    p = q.head;
    while (p!=NULL)
    {
        jml++;
        p = p->next;
    }
    return jml;
}

void ganjilGenap_1301223029(queue &q , queue &qGanjil , queue &qGenap){
    adr p ;

    while (!queueEmpty_1301223029(q)){
        dequeue_1301223029(q,p);
        if (p->info % 2== 0){
            enQueue_1301223029(qGenap , p);
        }else {
            enQueue_1301223029(qGanjil, p);
        }
    }
}