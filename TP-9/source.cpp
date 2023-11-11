#include "header.h"
void createStack_1301223029(stack &s){
    s.top = 0;
}
bool isEmpty_1301223029(stack s){
    return s.top == 0 ;
}

bool isFull_1301223029(stack s){
    return s.top == 15;
}
void push_1301223029(stack &s , infotype x){
    if (isFull_1301223029(s)){
        cout << "Stack penuh"<<endl;
    }else {
        s.info[s.top] = x;
        s.top++;
    }
}
int pop_1301223029(stack &s){
    infotype hapus;
    if (isEmpty_1301223029(s)){
        return -1;
    }else {
        hapus = s.info[s.top-1];
        s.top--;
    }
    return hapus;
}
void printInfo_1301223029(stack s){
    int i  = s.top;

    for (i ; i > 0 ; i--){
        cout << s.info[i-1];
    }
    cout << endl;
}