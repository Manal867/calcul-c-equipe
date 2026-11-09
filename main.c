
#include <stdio.h>

int produit(int a, int b) {
    return a * b;
}

double moyenne(int a, int b) {
    return (a + b) / 2.0;
}

int main(void) {
    printf("Bienvenue depuis feature-message\n");
    printf("Produit = %d\n", produit(3, 4));
    return 0;
}


