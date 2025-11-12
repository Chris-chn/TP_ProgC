#include <stdio.h>

int main() {
    int compteur = 5; // tu peux changer cette valeur (doit être < 10)

    printf("=== Triangle avec des boucles for ===\n\n");

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            // Conditions pour afficher * ou #
            if (i == 1 || i == compteur || j == 1 || j == i) {
                printf("* ");
            } else {
                if (i % 2 == 0)
                    printf("# ");
                else
                    printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
