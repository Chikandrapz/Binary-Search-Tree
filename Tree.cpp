#include "Tree.h"
adrNode newNode(infotype x){
    adrNode P = new Node;
    info(P) = x;
    left(P) = NULL;
    right(P) = NULL;
    return P;
}

adrNode findNode(adrNode root, infotype x){
    if(info(root) == x || root == NULL){
        return root;
    } else{
        if(info(root) > x){
            findNode_1301213141(left(root), x);
        } else if(info(root) < x){
            findNode_1301213141(right(root), x);
        }
    }
}

void insertNode(adrNode &root, adrNode p){
    if(root == NULL){
        root = p;
    } else{
        if(info(root) > info(p)){
            insertNode_1301213141(left(root), p);
        } else if(info(root) < info(p)){
            insertNode_1301213141(right(root), p);
        } else{
            cout << "Duplikat Node " << info(root) << endl;
        }
    }
}

void printPreOrder(adrNode root){
    if(root != NULL){
        if(info(root) != NULL){
            cout << info(root) << " ";
        }
        printPreOrder_1301213141(left(root));
        printPreOrder_1301213141(right(root));
    }
}

void printDescendant(adrNode root, infotype x){
    adrNode P = findNode(root, x);
    if(P == NULL){
        cout << "root ditemukan" << endl;
    } else{
        printPreOrder(left(P));
        printPreOrder(right(P));

    }
}

int sumNode(adrNode root){
    if(root == NULL){
        return 0;
    } else{
        return info(root) + sumNode(left(root)) + sumNode(right(root));
    }
}

int countLeaves(adrNode root){
    if(root == NULL){
        return 0;
    } else if(left(root) == NULL && right(root) == NULL){
        return 1;
    } else{
        return countLeaves(left(root)) + countLeaves(right(root));
    }
}

int heightTree(adrNode root){
    if(root == NULL){
        return -1;
    } else if(heightTree(left(root)) > heightTree(right(root))){
        return heightTree(left(root)) + 1;
    } else{
        return heightTree(right(root)) + 1;
    }

}
