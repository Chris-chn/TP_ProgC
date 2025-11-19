#include <stdio.h>

int main() {
    char s1[100], s2[100], copie[100], concat[200];
    int i, j;

    printf("Entrez la première chaîne : ");
    scanf("%99[^\n]", s1);
    getchar(); // pour consommer le '\n'

    printf("Entrez la deuxième chaîne : ");
    scanf("%99[^\n]", s2);

    /* 1) Calcul de la longueur de s1 */
    int longueur = 0;
    while (s1[longueur] != '\0') {
        longueur++;
    }

    /* 2) Copie de s1 dans copie */
    i = 0;
    while (s1[i] != '\0') {
        copie[i] = s1[i];
        i++;
    }
    copie[i] = '\0';

    /* 3) Concaténation de s1 et s2 dans concat */
    i = 0;
    while (s1[i] != '\0') {
        concat[i] = s1[i];
        i++;
    }

    j = 0;
    while (s2[j] != '\0') {
        concat[i] = s2[j];
        i++;
        j++;
    }
    concat[i] = '\0';

    /* Affichage des résultats */
    printf("\nLongueur de la première chaîne : %d\n", longueur);
    printf("Copie de la première chaîne : %s\n", copie);
    printf("Concaténation : %s\n", concat);

    return 0;
}
