#include <stdio.h>

int main() {
    int n = 5;  // hauteur de la pyramide
    int i, j;

    printf("=== Pyramide de nombres ===\n\n");

    // Boucle pour chaque niveau de la pyramide
    for (i = 1; i <= n; i++) {

        // 1️⃣ Afficher les espaces avant les nombres
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // 2️⃣ Afficher la partie croissante des nombres
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3️⃣ Afficher la partie décroissante des nombres
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // 4️⃣ Passer à la ligne suivante
        printf("\n");
    }

    printf("\nPyramide terminée avec succès !\n");
    return 0;
}
