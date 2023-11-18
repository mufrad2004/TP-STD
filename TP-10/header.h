#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>

using namespace std;

typedef bool boolean;
typedef int infotype;
typedef struct elmQ *adr;

struct elmQ{
    infotype info;
    adr next;
};

struct queue {
    adr head,tail;
};

adr alokasi_1301223029(infotype info);
adr findElmt_1301223029(queue q  , infotype num);
bool queueEmpty_1301223029(queue q);
void createqueue_1301223029(queue &q);
void dealokasi_1301223029(adr p);
void enQueue_1301223029(queue &q , adr p);
void dequeue_1301223029(queue &q , adr &p);
void printInfo_1301223029(queue q);
int nbOfElm_1301223029(queue q);
void ganjilGenap_1301223029(queue &q , queue &qGanjil , queue &qGenap);

#endif