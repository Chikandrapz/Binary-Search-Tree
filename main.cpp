#include "Tree.h"

int main()
{
    //Nama : Chikandra Permata Zahira
    //NIM : 1301213141
    cout << "========================================" << endl;
    int x[9] = {5,3,9,10,4,7,1,8,6};
    int n = 9;
    adrNode root = NULL;
    for(int i = 0;i < n;i++){
        cout << x[i] << " ";
    }
    cout << endl;

    for(int i = 0;i < n;i++){
        adrNode P = newNode(x[i]);
        insertNode(root, P);
    }
    printf("\n");
    printf("\nPre Order\t: ");
    printPreOrder(root);


    printf("\n");
    printf("\nDescendent of Node 9\t: ");
    printDescendant(root, n);

    printf("\n");
    printf("\nSum of BST Info\t: ");
    cout << sumNode(root);

    printf("\nNumber of Leaves\t: ");
    cout << countLeaves(root);

    printf("\nHeight of Tree\t\t: ");
    cout << heightTree(root) << endl;

    cout << "==========================================" << endl;

    return 0;
}
