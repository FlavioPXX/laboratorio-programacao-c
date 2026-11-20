#include <stdio.h>

unsigned long calcular(int n) {
    unsigned long resultado = 1;

    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

int main(void) {
    int numero;

    printf("CALCULADORA FATORIAL\n\n");

    printf("Digite um numero (0 a 12): ");
    if (scanf("%d", &numero) != 1 || numero < 0 || numero > 12) {
        printf("\nNumero invalido! precisa ser um valor entre 0 e 12.\n");
        return 1;
    }

    printf("\nFatorial de %d = %lu\n", numero, calcular(numero));

    return 0;
}