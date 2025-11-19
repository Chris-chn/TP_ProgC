#include <stdio.h>

int main() {
    int d = 0x10001000;  // Exemple de valeur, modifiez-la si nécessaire

    int taille = sizeof(int) * 8;   // Taille en bits (souvent 32)
    
    int bit4g = taille - 4;         // position du 4e bit de gauche
    int bit20g = taille - 20;       // position du 20e bit de gauche

    int b4 = (d >> bit4g) & 1;      // extraction du 4e bit de gauche
    int b20 = (d >> bit20g) & 1;    // extraction du 20e bit de gauche

    int resultat = (b4 == 1 && b20 == 1) ? 1 : 0;

    printf("%d\n", resultat);

    return 0;
}
