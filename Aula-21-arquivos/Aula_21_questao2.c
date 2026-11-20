#include <stdio.h>

int main(void) {
    FILE *arquivo;
    int numero;

    arquivo = fopen("numeros.txt", "w");
    if (arquivo == NULL) {
        perror("Erro ao tentar abrir o arquivo");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numero);
        fprintf(arquivo, "%d\n", numero);
    }

    fclose(arquivo);
    printf("\nNumeros salvos no caminho numeros.txt\n");

    arquivo = fopen("numeros.txt", "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo pra leitura");
        return 1;
    }

    printf("\nNUMEROS SALVOS\n");
    while (fscanf(arquivo, "%d", &numero) == 1) {
        printf("%d\n", numero);
    }

    fclose(arquivo);

    return 0;
}