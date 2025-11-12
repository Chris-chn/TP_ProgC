#include <stdio.h>

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    printf("=== Affichage des nombres en binaire ===\n\n");

    for (int n = 0; n < taille; n++) {
        int nombre = nombres[n];
        int bits[32];   // tableau pour stocker les bits
        int i = 0;

        // Cas particulier : si le nombre est 0
        if (nombre == 0) {
            printf("Nombre : %d --> Binaire : 0\n", nombre);
            continue;
        }

        // Conversion du nombre en binaire (division par 2)
        while (nombre > 0) {
            bits[i] = nombre % 2; // reste de la division par 2
            nombre /= 2;          // division entière
            i++;
        }

        // Affichage des bits dans le bon ordre
        printf("Nombre : %d --> Binaire : ", nombres[n]);
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", bits[j]);
        }
        printf("\n");
    }

    return 0;
}
