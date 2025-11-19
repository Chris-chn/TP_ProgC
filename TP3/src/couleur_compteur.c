#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

// Structure pour représenter une couleur RGBA
typedef struct {
    unsigned char R;
    unsigned char G;
    unsigned char B;
    unsigned char A;
} Couleur;

// Structure pour stocker une couleur distincte et son compteur
typedef struct {
    Couleur couleur;
    int compteur;
} CouleurDistincte;

// Fonction pour comparer deux couleurs
int couleurs_egales(Couleur c1, Couleur c2) {
    return (c1.R == c2.R) && (c1.G == c2.G) &&
           (c1.B == c2.B) && (c1.A == c2.A);
}

int main() {
    Couleur tableau[TAILLE];
    CouleurDistincte distinctes[TAILLE];
    int nbDistinctes = 0;

    srand(time(NULL));

    // Remplissage du tableau de couleurs avec des valeurs aléatoires
    for (int i = 0; i < TAILLE; i++) {
        tableau[i].R = rand() % 256;
        tableau[i].G = rand() % 256;
        tableau[i].B = rand() % 256;
        tableau[i].A = rand() % 256;
    }

    // Comptage des couleurs distinctes
    for (int i = 0; i < TAILLE; i++) {
        int trouve = 0;
        for (int j = 0; j < nbDistinctes; j++) {
            if (couleurs_egales(tableau[i], distinctes[j].couleur)) {
                distinctes[j].compteur++;
                trouve = 1;
                break;
            }
        }
        if (!trouve) {
            distinctes[nbDistinctes].couleur = tableau[i];
            distinctes[nbDistinctes].compteur = 1;
            nbDistinctes++;
        }
    }

    // Affichage des couleurs distinctes et de leurs occurrences
    printf("Couleurs distinctes et leur nombre d'occurrences :\n");
    for (int i = 0; i < nbDistinctes; i++) {
        printf("%02x %02x %02x %02x : %d\n",
               distinctes[i].couleur.R,
               distinctes[i].couleur.G,
               distinctes[i].couleur.B,
               distinctes[i].couleur.A,
               distinctes[i].compteur);
    }

    return 0;
}
