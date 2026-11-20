#include <stdio.h>

int main(void) {
    int matriz[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("escolha a posicao pelo valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz Escrita:\n\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}