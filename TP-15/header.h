#ifndef HEADER_H_INCLUDED 
#define HEADER_H_INCLUDED
#include <iostream>

using namespace std;

typedef int infotype;

typedef struct node *adrNode;

struct root {
    adrNode first;
};

struct node {
    infotype info;
    adrNode kiri;
    adrNode kanan;
};
adrNode newNode_1301223029(infotype x);
adrNode findNode_1301223029(adrNode root, infotype x);
void insertNode_1301223029(adrNode &root, adrNode p);
void printPreOrder_1301223029(adrNode root);
void printDescendant_1301223029(adrNode root, infotype x);
int sumNode_1301223029(adrNode root);
int countLeaves(adrNode root);
int heightTree_1301223029(adrNode root);
#endif