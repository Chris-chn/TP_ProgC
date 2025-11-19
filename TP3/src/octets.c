#include <stdio.h>

// Fonction pour afficher les octets d'une variable
void afficher_octets(void *ptr, size_t taille) {
    unsigned char *octet = (unsigned char *)ptr;
    for (size_t i = 0; i < taille; i++) {
        printf("%02x ", octet[i]);
    }
    printf("\n");
}

int main() {
    // Déclaration et initialisation de différentes variables
    short s = 0x0203;
    int i = 0x01020304;
    long int li = 0x0102030405060708;
    float f = 9.5f;
    double d = 1.0;
    long double ld = 1.0L;

    // Affichage des octets
    printf("Octets de short :\n");
    afficher_octets(&s, sizeof(s));

    printf("\nOctets de int :\n");
    afficher_octets(&i, sizeof(i));

    printf("\nOctets de long int :\n");
    afficher_octets(&li, sizeof(li));

    printf("\nOctets de float :\n");
    afficher_octets(&f, sizeof(f));

    printf("\nOctets de double :\n");
    afficher_octets(&d, sizeof(d));

    printf("\nOctets de long double :\n");
    afficher_octets(&ld, sizeof(ld));

    return 0;
}
