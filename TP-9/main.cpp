#include "header.h"
// * 1301223029 % 4 = 1
int main(){
    stack s;
    string x;
    infotype temp;
    int lenX;
    int count = 0;
    createStack_1301223029(s);
    
    cout << "Input : " ;
    cin >>x;
    lenX = x.length();

    while (lenX > 0){
        push_1301223029(s,x[lenX-1]);
        lenX--;
    }

    printInfo_1301223029(s);
    while (!isEmpty_1301223029(s)){
        temp = pop_1301223029(s);
        count ++;
        
        if (count >= 5) {
            cout << temp;
        }
    }

    cout << endl;
    return 0;
}

