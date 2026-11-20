#include <stdio.h>

int main(void) {
    char palavra[50];
    int vogais = 0;

    printf("Escreva uma palavra em letra minusculas: ");
    scanf("%49s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        char c = palavra[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais++;
        }
    }

    printf("A palavra tem %d vogais ", vogais);

    return 0;
}