#include <stdio.h>

float maior(float p1, float p2) {
    return (p1 > p2) ? p1 : p2;
}

int main(void) {
    float preco1, preco2;

    printf("COMPARADOR DE PRECOS\n\n");

    printf("Preco 1: ");
    scanf("%f", &preco1);
    printf("Preco 2: ");
    scanf("%f", &preco2);

    printf("\n");
    if (preco1 == preco2) {
        printf("Os precos sao identicos: R$ %.2f\n", preco1);
    } else {
        printf("preco maior: R$ %.2f\n", maior(preco1, preco2));
    }

    return 0;
}