#include <stdio.h>

int main(void) {
    char palavra[50];
    int contador = 0;

    printf("escreva uma palavra pra saber quantos caracteres ela tem: ");
    scanf("%49s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        contador++;
    }

    printf("Quantidade de letras na palavra: %d\n", contador);

    return 0;
}