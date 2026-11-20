#include <stdio.h>

int main(void) {
    int valor = 20;
    int *ponteiro = &valor;

    printf("valor da variavel: %d\n", valor);
    printf("Endereco dessa variavel: %p\n", (void *)&valor);
    printf("Ponteiro armazenado no endereco: %p\n", (void *)ponteiro);
    printf("Valor a ser acessado pelo ponteiro: %d\n", *ponteiro);

    return 0;
}