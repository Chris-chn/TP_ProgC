#include <stdio.h>

int main() {

    // Tableaux pour stocker les informations
    char noms[5][30] = {
        "Dupont", "Martin", "Benali", "Rahimi", "Lopez"
    };

    char prenoms[5][30] = {
        "Alice", "Jean", "Sofia", "Karim", "Lucia"
    };

    char adresses[5][100] = {
        "12 Rue des Fleurs, Paris",
        "45 Avenue Victor Hugo, Lyon",
        "3 Boulevard Moulay, Rabat",
        "27 Rue des Oliviers, Marseille",
        "88 Calle Major, Madrid"
    };

    float note_prog[5] = {14.5, 11.0, 16.5, 12.0, 18.0};
    float note_sys[5] = {13.0, 10.5, 15.0, 11.5, 17.0};

    // Affichage des informations
    for (int i = 0; i < 5; i++) {
        printf("\n--- Étudiant %d ---\n", i + 1);
        printf("Nom           : %s\n", noms[i]);
        printf("Prénom        : %s\n", prenoms[i]);
        printf("Adresse       : %s\n", adresses[i]);
        printf("Note en C     : %.2f\n", note_prog[i]);
        printf("Note en S.E.  : %.2f\n", note_sys[i]);
    }

    return 0;
}
