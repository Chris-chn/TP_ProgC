#include <stdio.h>

int main() {
    int tableau[100];
    int i;
    int recherche;
    int debut, fin, milieu;
    int trouve = 0;

    // Créer un tableau trié de 100 entiers (par exemple de 1 à 100)
    for(i = 0; i < 100; i++) {
        tableau[i] = i + 1;  // Tableau trié croissant : 1, 2, 3, ..., 100
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
