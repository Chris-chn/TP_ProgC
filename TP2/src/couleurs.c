#include <stdio.h>

// Structure RGBA (chaque composante = 1 octet)
struct Couleur {
    unsigned char r;  // Rouge
    unsigned char g;  // Vert
    unsigned char b;  // Bleu
    unsigned char a;  // Alpha
};

int main() {

    // Tableau de 10 couleurs initialisées en hexadécimal
    struct Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0x10, 0x20, 0x30, 0xff},
        {0xaa, 0xbb, 0xcc, 0xff},
        {0x55, 0x11, 0x99, 0xff},
        {0xff, 0x00, 0x00, 0xff},
        {0x00, 0xff, 0x00, 0xff},
        {0x00, 0x00, 0xff, 0xff},
        {0x7f, 0x22, 0x44, 0xff},
        {0xf0, 0x0f, 0xf0, 0xff}
    };

    // Affichage des 10 couleurs
    for (int i = 0; i < 10; i++) {
        printf("\nCouleur %d :\n", i + 1);
        printf("Rouge : %d\n", couleurs[i].r);
        printf("Vert  : %d\n", couleurs[i].g);
        printf("Bleu  : %d\n", couleurs[i].b);
        printf("Alpha : %d\n", couleurs[i].a);
    }

    return 0;
}
