#include "header.h"


int main(){
    int x[9] = {5,3,9,10,4,7,1,8,6};

    adrNode root;
    root = NULL;

    for (int i = 0 ; i<= 9 -1 ; i++){
        cout << x[i] << " ";
        insertNode_1301223029(root, newNode_1301223029(x[i]));
    }

    cout << endl;

    cout << "Preorder : ";
    printPreOrder_1301223029(root);
    cout << endl;

    cout << "descendent of Node 9 : ";
    printDescendant_1301223029(root,9);
    cout << endl;

    cout << "Sum of BST Info : " << sumNode_1301223029(root)<<endl;

    cout << "Number of Leaves : " << countLeaves(root)<<endl;

    cout << "Height of Tree : " << heightTree_1301223029(root) << endl;
    return 0;
}