#include <stdio.h>

int main() {
    int n;
    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    int U0 = 0, U1 = 1;   // Termes initiaux

    // Cas particuliers
    if (n == 0) {
        printf("%d\n", U0);
        return 0;
    }

    printf("%d, %d", U0, U1);   // Affichage des deux premiers termes

    int U;  // terme courant
    for (int i = 2; i <= n; i++) {
        U = U0 + U1;    // Un = Un-1 + Un-2
        printf(", %d", U);
        U0 = U1;        // Mise à jour des termes
        U1 = U;
    }

    printf("\n");
    return 0;
}
