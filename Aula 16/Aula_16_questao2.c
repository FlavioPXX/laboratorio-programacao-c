#include <stdio.h>

int main(void) {
    char palavra[50];

    printf("Escreva uma palavra qualquer ");
    scanf("%49s", palavra);

    printf("O primeiro caractere da palavra e: %c\n", palavra[0]);

    return 0;
}