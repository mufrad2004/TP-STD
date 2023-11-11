#ifndef HEADER_N_INCLUDED
#define HEADER_N_INCLUDED   
#include <iostream>
#include <string>
using namespace std;
typedef char infotype;

struct stack {
    infotype info[15];
    int top;
};
void createStack_1301223029(stack &s);
bool isEmpty_1301223029(stack s);
bool isFull_1301223029(stack s);
void push_1301223029(stack &s , infotype x);
int pop_1301223029(stack &s);
void printInfo_1301223029(stack s);
void createStack_1301223029(stack &s);
#endif