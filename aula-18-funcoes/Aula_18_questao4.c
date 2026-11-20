#include <stdio.h>

int dobro(int quantidade) {
    return quantidade * 2;
}

int main(void) {
    int inicio;

    printf("CONTROLE DE ESTOQUE\n\n");

    printf("Quantidade no inicio: ");
    scanf("%d", &inicio);

    printf("\nQuantidade no inicio: %d\n", inicio);
    printf("Quantidade depois da duplicacao: %d\n", dobro(inicio));

    return 0;
}