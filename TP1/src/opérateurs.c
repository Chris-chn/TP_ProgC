#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérations arithmétiques
    int addition = a + b;
    int soustraction = a - b;
    int multiplication = a * b;
    int division = a / b;
    int modulo = a % b;

    // Opérations de comparaison (logiques)
    int egal = (a == b);
    int superieur = (a > b);

    // Affichage des résultats
    printf("=== Opérateurs arithmétiques et logiques en C ===\n\n");

    printf("a = %d, b = %d\n\n", a, b);

    printf("Addition (a + b)         = %d\n", addition);
    printf("Soustraction (a - b)     = %d\n", soustraction);
    printf("Multiplication (a * b)   = %d\n", multiplication);
    printf("Division (a / b)         = %d\n", division);
    printf("Modulo (a %% b)           = %d\n\n", modulo);

    printf("a == b ? %d\n", egal);
    printf("a > b  ? %d\n", superieur);

    return 0;
}
