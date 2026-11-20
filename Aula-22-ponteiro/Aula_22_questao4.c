#include <stdio.h>

void dobrar(int *numero) {
    *numero = *numero * 2;
}

int main(void) {
    int valor;

    printf("Digite qualquer numero: ");
    scanf("%d", &valor);

    dobrar(&valor);

    printf("Dobro desse numero: %d\n", valor);

    return 0;
}