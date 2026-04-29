#include <stdio.h>

/* Min index */
int minIndex(int tab[], int n) {
    int i, index = 0;
    for(i=1;i<n;i++) {
        if(tab[i] < tab[index])
            index = i;
    }
    return index;
}

/* Puissance normale */
int puissance(int a, int n) {
    if(n==0) return 1;
    return a * puissance(a, n-1);
}

/* Puissance rapide */
int expRapide(int a, int n) {
    if(n==0) return 1;
    if(n%2==0) {
        int x = expRapide(a,n/2);
        return x*x;
    }
    return a * expRapide(a,n-1);
}

/* Test */
int main() {
    int tab[] = {5,2,4,1};
    printf("Min index = %d\n", minIndex(tab,4));
    printf("Puissance = %d\n", puissance(2,5));
    printf("Rapide = %d\n", expRapide(2,5));
    return 0;
}
