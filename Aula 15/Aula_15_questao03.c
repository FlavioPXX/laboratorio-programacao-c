#include <stdio.h>

int main(void) {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 10}
    };
    int par = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 == 0) {
                par++;
            }
        }
    }

    printf("Quantidade de valores par na matriz 3x3: %d\n", par);

    return 0;
}