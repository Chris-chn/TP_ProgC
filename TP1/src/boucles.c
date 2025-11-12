#include <stdio.h>

int main() {
    int compteur = 5; // tu peux changer cette valeur (doit être < 10)

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            // bordures et dernière ligne en étoiles, intérieur en '#'
            if (i == 1 || i == compteur || j == 1 || j == i) {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n");
    }

    return 0;
}
