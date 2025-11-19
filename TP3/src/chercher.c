#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tableau[100];
    int i, recherche;
    int trouve = 0;  // flag pour indiquer si l'entier est trouvé

    // Initialiser la graine pour les nombres aléatoires
    srand(time(NULL));

    // Remplir le tableau avec des valeurs aléatoires entre -50 et 50
    for(i = 0; i < 100; i++) {
        tableau[i] = rand() % 101 - 50; // nombres entre -50 et 50
    }

    // Afficher le tableau
    printf("Tableau :\n");
    for(i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    // Demander à l'utilisateur l'entier à chercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &recherche);

    // Rechercher l'entier dans le tableau
    for(i = 0; i < 100; i++) {
        if(tableau[i] == recherche) {
            trouve = 1;
            break;
        }
    }

    // Afficher le résultat
    if(trouve) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
