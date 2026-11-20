#include <stdio.h>

int main(void) {
    int numero[5];
    int *p = numero;

    for (int i = 0; i < 5; i++) {
        printf("Digite o numero que vai ficar no %d: ", i + 1);
        scanf("%d", &numero[i]);
    }

    printf("\nnumero dentro do vetor (por ponteiro):\n");
    for (int i = 0; i < 5; i++) {
        printf("Posicao do %d: %d\n", i, *(p + i));
    }

    return 0;
}