#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main() {

    /* --- Déclaration des variables --- */
    char c = 0x12;
    short s = 0x1234;
    int i = 0x12345678;
    long int li = 0x11223344;
    long long int lli = 0x1122334455667788;
    float f = 0x1.0p+2;          // équivalent à 4.0, mais valeur affichée en hex sera interprétée via mémoire
    double d = 3.14;
    long double ld = 2.5;

    /* --- Déclaration des pointeurs --- */
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    /* --- Fonction d'affichage mémoire hexadécimale --- */
    unsigned char buffer[16];

    #define SHOW_HEX(var) \
        memcpy(buffer, &(var), sizeof(var)); \
        for (int k = sizeof(var) - 1; k >= 0; k--) printf("%02x", buffer[k]);


    printf("=== Avant manipulation ===\n");

    printf("Adresse de c  : %p, Valeur : ", (void*)pc); SHOW_HEX(c); printf("\n");
    printf("Adresse de s  : %p, Valeur : ", (void*)ps); SHOW_HEX(s); printf("\n");
    printf("Adresse de i  : %p, Valeur : ", (void*)pi); SHOW_HEX(i); printf("\n");
    printf("Adresse de li : %p, Valeur : ", (void*)pli); SHOW_HEX(li); printf("\n");
    printf("Adresse de lli: %p, Valeur : ", (void*)plli); SHOW_HEX(lli); printf("\n");
    printf("Adresse de f  : %p, Valeur : ", (void*)pf); SHOW_HEX(f); printf("\n");
    printf("Adresse de d  : %p, Valeur : ", (void*)pd); SHOW_HEX(d); printf("\n");
    printf("Adresse de ld : %p, Valeur : ", (void*)pld); SHOW_HEX(ld); printf("\n");

    /* --- Manipulation via pointeurs --- */
    *pc  = 0x34;
    *ps  = 0x5678;
    *pi  = 0xabcdef12;
    *pli = 0x99887766;
    *plli = 0xaabbccddeeff0011;
    *pf  = 1.0f;
    *pd  = 2.718281828;
    *pld = 5.0L;

    printf("\n=== Après manipulation ===\n");

    printf("Adresse de c  : %p, Valeur : ", (void*)pc); SHOW_HEX(c); printf("\n");
    printf("Adresse de s  : %p, Valeur : ", (void*)ps); SHOW_HEX(s); printf("\n");
    printf("Adresse de i  : %p, Valeur : ", (void*)pi); SHOW_HEX(i); printf("\n");
    printf("Adresse de li : %p, Valeur : ", (void*)pli); SHOW_HEX(li); printf("\n");
    printf("Adresse de lli: %p, Valeur : ", (void*)plli); SHOW_HEX(lli); printf("\n");
    printf("Adresse de f  : %p, Valeur : ", (void*)pf); SHOW_HEX(f); printf("\n");
    printf("Adresse de d  : %p, Valeur : ", (void*)pd); SHOW_HEX(d); printf("\n");
    printf("Adresse de ld : %p, Valeur : ", (void*)pld); SHOW_HEX(ld); printf("\n");

    return 0;
}
