#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tableau[100];
    int i, j, temp;

    // Initialiser la graine pour les nombres aléatoires
    srand(time(NULL));

    // Remplir le tableau avec des valeurs aléatoires entre -50 et 50
    for(i = 0; i < 100; i++) {
        tableau[i] = rand() % 101 - 50; // génère des nombres entre -50 et 50
    }

    // Afficher le tableau non trié
    printf("Tableau non trié :\n");
    for(i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    // Tri à bulles
    for(i = 0; i < 100 - 1; i++) {
        for(j = 0; j < 100 - 1 - i; j++) {
            if(tableau[j] > tableau[j + 1]) {
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    // Afficher le tableau trié
    printf("Tableau trié par ordre croissant :\n");
    for(i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
