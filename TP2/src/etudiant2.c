#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[30];
    char prenom[30];
    char adresse[100];
    float note1;
    float note2;
};

int main() {

    struct Etudiant etudiants[5];

    // Remplissage des données avec strcpy
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note1 = 16.5;
    etudiants[0].note2 = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].note1 = 14.0;
    etudiants[1].note2 = 14.1;

    strcpy(etudiants[2].nom, "Benali");
    strcpy(etudiants[2].prenom, "Sofia");
    strcpy(etudiants[2].adresse, "15 Avenue des Palmiers, Rabat");
    etudiants[2].note1 = 17.2;
    etudiants[2].note2 = 13.5;

    strcpy(etudiants[3].nom, "Rahimi");
    strcpy(etudiants[3].prenom, "Karim");
    strcpy(etudiants[3].adresse, "10 Rue des Oliviers, Marseille");
    etudiants[3].note1 = 12.4;
    etudiants[3].note2 = 11.9;

    strcpy(etudiants[4].nom, "Lopez");
    strcpy(etudiants[4].prenom, "Lucia");
    strcpy(etudiants[4].adresse, "88 Calle Major, Madrid");
    etudiants[4].note1 = 18.0;
    etudiants[4].note2 = 17.5;

    // Affichage des données
    for (int i = 0; i < 5; i++) {
        printf("\nÉtudiant.e %d :\n", i + 1);
        printf("Nom     : %s\n", etudiants[i].nom);
        printf("Prénom  : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note 1  : %.2f\n", etudiants[i].note1);
        printf("Note 2  : %.2f\n", etudiants[i].note2);
    }

    return 0;
}
