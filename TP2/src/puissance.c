#include <stdio.h>

int main() {
    int a = 2;  // base
    int b = 3;  // exposant
    int resultat = 1;  // initialisation du résultat

    printf("Calcul de %d puissance %d\n", a, b);

    // Boucle pour multiplier a par lui-même b fois
    for (int i = 1; i <= b; i++) {
        resultat *= a;
    }

    printf("Résultat : %d^%d = %d\n", a, b, resultat);

    return 0;
}
