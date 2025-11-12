#include <stdio.h>

int main() {
    // Déclaration et affectation des variables de types de base

    // 1. char
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    // 2. short
    short s = -12345;
    unsigned short us = 54321;

    // 3. int
    int i = -123456;
    unsigned int ui = 123456;

    // 4. long int
    long int li = -123456789L;
    unsigned long int uli = 123456789UL;

    // 5. long long int
    long long int lli = -9876543210LL;
    unsigned long long int ulli = 9876543210ULL;

    // 6. float
    float f = 3.14f;

    // 7. double
    double d = 2.718281828459;

    // 8. long double
    long double ld = 1.618033988749894L;

    // Affichage des valeurs
    printf("=== Types de base en C ===\n\n");

    printf("char                : %c\n", c);
    printf("signed char         : %d\n", sc);
    printf("unsigned char       : %u\n\n", uc);

    printf("short               : %d\n", s);
    printf("unsigned short      : %u\n\n", us);

    printf("int                 : %d\n", i);
    printf("unsigned int        : %u\n\n", ui);

    printf("long int            : %ld\n", li);
    printf("unsigned long int   : %lu\n\n", uli);

    printf("long long int       : %lld\n", lli);
    printf("unsigned long long  : %llu\n\n", ulli);

    printf("float               : %f\n", f);
    printf("double              : %lf\n", d);
    printf("long double         : %Lf\n", ld);

    return 0;
}
