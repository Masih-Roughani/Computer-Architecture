#include <stdio.h>
#include <stdlib.h>

struct treeNode {
    int nob;
    struct treeNode *left;
    struct treeNode *right;
};

int countBs(struct treeNode *pBT);

void insert(struct treeNode *head, int l, int r);

int main(void) {
    struct treeNode *myTree, *tmp;
    int countBananas = 0;
    myTree = (struct treeNode *) malloc(sizeof(struct treeNode));
    myTree->left = NULL;
    myTree->right = NULL;
    myTree->nob = 0;
    tmp = myTree;
    insert(tmp, 3, 5);
    insert(tmp->left, 6, 9);
    insert(tmp->right, 4, 10);
    countBananas = countBs(myTree);
    printf("%d\n", countBananas);
}

void insert(struct treeNode *head, int l, int r) {
    head->left = (struct treeNode *) malloc(sizeof(struct treeNode));
    head->right = (struct treeNode *) malloc(sizeof(struct treeNode));
    head->left->nob = l;
    head->left->left = NULL;
    head->left->right = NULL;
    head->right->nob = r;
    head->right->left = NULL;
    head->right->right = NULL;
}

int countBs(struct treeNode *pBT) {
    if (pBT->left == NULL && pBT->right == NULL) {
        return pBT->nob;
//    } else if (pBT->left == NULL) {
//        return pBT->nob + countBs(pBT->right);
//    } else if (pBT->right == NULL) {
//        return pBT->nob + countBs(pBT->left);
    } else {
        return pBT->nob + countBs(pBT->left) + countBs(pBT->right);
    }
}
