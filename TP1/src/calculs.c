#include <stdio.h>

int main() {
    int num1 = 12;
    int num2 = 5;
    char op = '&'; // change cette valeur pour tester différents opérateurs

    int resultat = 0;

    printf("num1 = %d, num2 = %d, op = '%c'\n", num1, num2, op);

    switch (op) {
        case '+':
            resultat = num1 + num2;
            printf("Résultat (addition) : %d\n", resultat);
            break;

        case '-':
            resultat = num1 - num2;
            printf("Résultat (soustraction) : %d\n", resultat);
            break;

        case '*':
            resultat = num1 * num2;
            printf("Résultat (multiplication) : %d\n", resultat);
            break;

        case '/':
            if (num2 != 0) {
                resultat = num1 / num2;
                printf("Résultat (division) : %d\n", resultat);
            } else {
                printf("Erreur : division par zéro !\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                resultat = num1 % num2;
                printf("Résultat (modulo) : %d\n", resultat);
            } else {
                printf("Erreur : modulo par zéro !\n");
            }
            break;

        case '&':
            resultat = num1 & num2;
            printf("Résultat (ET bit à bit) : %d\n", resultat);
            break;

        case '|':
            resultat = num1 | num2;
            printf("Résultat (OU bit à bit) : %d\n", resultat);
            break;

        case '~':
            printf("Résultat (~num1) : %d\n", ~num1);
            printf("Résultat (~num2) : %d\n", ~num2);
            break;

        default:
            printf("Erreur : opérateur '%c' non reconnu.\n", op);
    }

    return 0;
}
