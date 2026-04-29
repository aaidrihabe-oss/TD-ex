#include <stdio.h>
#include <stdlib.h>

/* Arbre */
typedef struct Tree {
    int val;
    struct Tree *left, *right;
} Tree;

Tree* insert(Tree* t, int v) {
    if(t==NULL) {
        Tree* n = (Tree*)malloc(sizeof(Tree));
        n->val = v;
        n->left = n->right = NULL;
        return n;
    }
    if(v < t->val)
        t->left = insert(t->left, v);
    else
        t->right = insert(t->right, v);
    return t;
}

void inorder(Tree* t) {
    if(t) {
        inorder(t->left);
        printf("%d ", t->val);
        inorder(t->right);
    }
}

/* Test */
int main() {
    Tree* T = NULL;

    T = insert(T,5);
    T = insert(T,2);
    T = insert(T,8);

    printf("Tree: ");
    inorder(T);

    return 0;
}
