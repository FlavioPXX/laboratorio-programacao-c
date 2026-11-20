#include <stdio.h>

int main(void) {
    float nota[3][2];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Aluno %d - nota da prova numero %d: ", i + 1, j + 1);
            scanf("%f", &nota[i][j]);
        }
    }

    printf("\n");
    for (int i = 0; i < 3; i++) {
        float soma = 0;
        for (int j = 0; j < 2; j++) {
            soma += nota[i][j];
        }
        printf("Media das notas do aluno %d: %.2f\n", i + 1, soma / 2);
    }

    return 0;
}