#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P) (P) -> info
#define right(P) (P) -> right
#define left(P) (P) -> left

typedef int infotype;
typedef struct Node *adrNode;
struct Node{
    infotype info;
    adrNode right;
    adrNode left;
};

typedef adrNode root;

adrNode newNode(infotype x);
adrNode findNode(adrNode root, infotype x);
void insertNode(adrNode &root, adrNode p);
void printPreOrder(adrNode root);
void printDescendant(adrNode root, infotype x);
int sumNode(adrNode root);
int countLeaves(adrNode root);
int heightTree(adrNode root);

#endif // TREE_H_INCLUDED
