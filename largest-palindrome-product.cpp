#include <stdio.h>

unsigned int miroir(unsigned int n) {
    unsigned int m = 0;
    while (n != 0) {
        m = 10 * m + (n % 10);
        n /= 10;
    }
    return m;
}

unsigned int Palindrome1(unsigned int N) {
    unsigned int max = 0;
    for (int a = 99; a >= 10; --a) {
        for (int b = 99; b >= 10; --b) {
            unsigned int calcul = (unsigned int)(a * b);
            if (calcul <= N && calcul > max && miroir(calcul) == calcul) {
                max = calcul;
            }
        }
    }
    return max;
}

unsigned int Palindrome2(unsigned int N) {
    unsigned int max = 0;
    for (int a = 99; a >= 10; --a) {
        for (int b = 99; b >= 10; --b) {
            for (int c = 99; c >= 10; --c) {
                unsigned int calcul = (unsigned int)(a * b * c);
                if (calcul <= N && calcul > max && miroir(calcul) == calcul) {
                    max = calcul;
                }
            }
        }
    }
    return max;
}

unsigned int Palindrome3(unsigned int N) {
    unsigned int max = 0;
    for (int a = 999; a >= 100; --a) {
        for (int b = 999; b >= 100; --b) {
            unsigned int calcul = (unsigned int)(a * b);
            if (calcul <= N && calcul > max && miroir(calcul) == calcul) {
                max = calcul;
            }
        }
    }
    return max;
}

int main(void) {
    unsigned int N;
    printf("Entrez une valeur pour N : ");
    if (scanf("%u", &N) != 1) return 1;

    printf("Niveau 1 (2 chiffres x 2 chiffres) : %u\n", Palindrome1(N));
    printf("Niveau 2 (2 chiffres x 2 chiffres x 2 chiffres) : %u\n", Palindrome2(N));
    printf("Niveau 3 (3 chiffres x 3 chiffres) : %u\n", Palindrome3(N));
    return 0;
}