#include <stdio.h>
#include <stdlib.h>

/* Liste */
typedef struct Node {
    int val;
    struct Node* next;
} Node;

Node* insertHead(Node* L, int v) {
    Node* n = (Node*)malloc(sizeof(Node));
    n->val = v;
    n->next = L;
    return n;
}

int search(Node* L, int v) {
    while(L) {
        if(L->val == v) return 1;
        L = L->next;
    }
    return 0;
}

/* Test */
int main() {
    Node* L = NULL;
    L = insertHead(L, 5);
    L = insertHead(L, 10);

    printf("Search 5 = %d\n", search(L,5));

    return 0;
}
