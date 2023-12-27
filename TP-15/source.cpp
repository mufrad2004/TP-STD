#include "header.h"
adrNode newNode_1301223029(infotype x){
    adrNode p;
    p = new node;
    p->info= x;
    p->kanan = NULL;
    p->kiri = NULL;
    return p;
}
adrNode findNode_1301223029(adrNode root, infotype x){
    if (root == NULL || root ->info == x){
        return root;
    }

    if (x > root->info) {
        return findNode_1301223029(root->kanan,x);
    }else {
        return findNode_1301223029(root->kiri,x);
    }
}
void insertNode_1301223029(adrNode &root, adrNode p){
    if(root == NULL ){
        root = p;
    }else {
        if (p ->info > root->info) {
            insertNode_1301223029(root->kanan, p);
        }else {
            insertNode_1301223029(root->kiri, p);
        }
    }
}
void printPreOrder_1301223029(adrNode root){
    if (root == NULL){
        return;
    }

    cout << root->info << " " ;
    printPreOrder_1301223029(root->kiri );
    printPreOrder_1301223029(root->kanan);

}
void printDescendant_1301223029(adrNode root, infotype x){
    adrNode p;
    p = findNode_1301223029(root , x);
    printPreOrder_1301223029(p);

}
int sumNode_1301223029(adrNode root){
    int hasil = 0;
    if (root == NULL){
        return 0;
    }
    return root->info + sumNode_1301223029(root->kiri) + sumNode_1301223029(root->kanan);
    

}
int countLeaves(adrNode root){
    if (root == NULL){
        return 0;
    }
    if (root->kiri == NULL && root->kanan == NULL){
        return 1;
    }else {
        return countLeaves(root->kiri) + countLeaves(root->kanan);
    }

}
int heightTree_1301223029(adrNode root){
    if (root == NULL){
        return 0;
    }

    return max(heightTree_1301223029(root->kiri), heightTree_1301223029(root->kanan) + 1);
}
