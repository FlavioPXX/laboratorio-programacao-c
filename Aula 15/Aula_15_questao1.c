#include <stdio.h>

int main(void) {a
    int matriz[2][3];
    int soma = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("digite o valor que voce quer para a posicao: [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("\nSoma deles todos: %d\n", soma);

    return 0;
}