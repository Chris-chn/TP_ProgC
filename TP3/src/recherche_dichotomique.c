#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tableau[100];
    int i, recherche;
    int debut, fin, milieu;
    int trouve = 0;

    // Initialiser la graine pour les nombres aléatoires
    srand(time(NULL));

    // Remplir le tableau avec des nombres aléatoires entre -50 et 50
    for(i = 0; i < 100; i++) {
        tableau[i] = rand() % 101 - 50;
    }

    // Trier le tableau par ordre croissant (tri à bulles simple)
    for(i = 0; i < 99; i++) {
        for(int j = 0; j < 99 - i; j++) {
            if(tableau[j] > tableau[j + 1]) {
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    // Afficher le tableau trié
    printf("Tableau trié :\n");
    for(i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    // Demander à l'utilisateur l'entier à chercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &recherche);

    // Recherche dichotomique
    debut = 0;
    fin = 99;

    while(debut <= fin) {
        milieu = (debut + fin) / 2;
        if(tableau[milieu] == recherche) {
            trouve = 1;
            break;
        } else if(tableau[milieu] < recherche) {
            debut = milieu + 1;
        } else {
            fin = milieu - 1;
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
