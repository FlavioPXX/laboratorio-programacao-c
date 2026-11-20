#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite qualquer numero: ");
    scanf("%d", &numero);

    printf("Numero: %d\n", numero);
    printf("Endereco de memoria: %p\n", (void *)&numero);

    return 0;
}