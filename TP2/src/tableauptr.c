#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int N = 11;  // Taille des tableaux
    int tint[N];
    float tfloat[N];

    srand(time(NULL)); // Initialisation du générateur aléatoire

    /* --- Remplissage des tableaux avec des pointeurs --- */
    int *pi = tint;
    float *pf = tfloat;

    for (int i = 0; i < N; i++) {
        *(pi + i) = rand() % 150;   // Valeurs d'entiers aléatoires
        *(pf + i) = (rand() % 1000) / 100.0f; // Valeurs float aléatoires
    }

    /* --- Affichage avant manipulation --- */
    printf("Tableau d'entiers (avant) :\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(pi + i));
    }

    printf("\n\nTableau de flottants (avant) :\n");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", *(pf + i));
    }

    /* --- Multiplication par 3 via pointeurs --- */
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {   // Indice divisible par 2
            *(pi + i) = *(pi + i) * 3;
            *(pf + i) = *(pf + i) * 3.0f;
        }
    }

    /* --- Affichage après manipulation --- */
    printf("\n\nTableau d'entiers (après) :\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(pi + i));
    }

    printf("\n\nTableau de flottants (après) :\n");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", *(pf + i));
    }

    printf("\n");

    return 0;
}
