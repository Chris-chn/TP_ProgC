#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tableau[100];
    int i;
    int plusGrand, plusPetit;

    // Initialiser la graine pour les nombres aléatoires
    srand(time(NULL));

    // Remplir le tableau avec des valeurs aléatoires entre 1 et 1000
    for(i = 0; i < 100; i++) {
        tableau[i] = rand() % 1000 + 1;
    }

    // Initialiser plusGrand et plusPetit avec le premier élément du tableau
    plusGrand = plusPetit = tableau[0];

    // Parcourir le tableau pour trouver le plus grand et le plus petit
    for(i = 1; i < 100; i++) {
        if(tableau[i] > plusGrand) {
            plusGrand = tableau[i];
        }
        if(tableau[i] < plusPetit) {
            plusPetit = tableau[i];
        }
    }

    // Afficher les résultats
    printf("Le numéro le plus grand est : %d\n", plusGrand);
    printf("Le numéro le plus petit est : %d\n", plusPetit);

    return 0;
}
