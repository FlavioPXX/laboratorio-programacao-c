#include <stdio.h>

int main(void) {
    
    int assentos[3][4] = {
        {0, 1, 0, 0},
        {1, 1, 0, 1},
        {0, 0, 1, 0}
    };
    int ocupado = 0, disponivel = 0;

    printf("Assentos ocupados e disponiveis ( 0= dispoviel , 1= ocupado)\n\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", assentos[i][j]);
            if (assentos[i][j] == 1) {
                ocupado++;
            } else {
                disponivel++;
            }
        }
        printf("\n");
    }

    printf("\nassentos ocupados: %d\n", ocupado);
    printf("assentos disponiveis: %d\n", disponivel);

    return 0;
}