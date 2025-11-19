#include <stdio.h>

#define NB_PHRASES 10
#define MAX_TAILLE 200  // taille maximale pour la phrase à chercher

int phrases_egales(const char *p1, const char *p2) {
    int i = 0;
    while (p1[i] != '\0' && p2[i] != '\0') {
        if (p1[i] != p2[i]) {
            return 0; // les caractères diffèrent
        }
        i++;
    }
    // si les deux chaînes se terminent en même temps, elles sont égales
    return p1[i] == '\0' && p2[i] == '\0';
}

int main() {
    const char *tableau[NB_PHRASES] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    char phrase[MAX_TAILLE];

    printf("Entrez la phrase à rechercher :\n");
    fgets(phrase, MAX_TAILLE, stdin);

    // retirer le caractère '\n' si présent
    int i = 0;
    while (phrase[i] != '\0') {
        if (phrase[i] == '\n') {
            phrase[i] = '\0';
            break;
        }
        i++;
    }

    int trouve = 0;
    for (int j = 0; j < NB_PHRASES; j++) {
        if (phrases_egales(phrase, tableau[j])) {
            trouve = 1;
            break;
        }
    }

    if (trouve) {
        printf("Phrase trouvée\n");
    } else {
        printf("Phrase non trouvée\n");
    }

    return 0;
}
