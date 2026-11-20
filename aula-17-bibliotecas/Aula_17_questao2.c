#include <stdio.h>
#include <string.h>

int main(void) {
    char produto[50];
    char copia[50];
    char categoria[20];
    char descricao[100] = "Produto: ";
    const char *nomeCategoria;

    printf("CADASTRO DE PRODUTOS\n\n");

    printf("Nome do produto: ");
    scanf("%49s", produto);
    printf("Categoria: ");
    scanf("%19s", categoria);

    if (strcmp(categoria, "HARDWARE") == 0) {
        nomeCategoria = "Hardware";
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        nomeCategoria = "Periferico";
    } else {
        nomeCategoria = "Categoria invalida";
    }

    strcpy(copia, produto);
    strcat(descricao, copia);

    printf("\nRESUMO\n");
    printf("Produto: %s\n", produto);
    printf("Caracteres: %zu\n", strlen(produto));
    printf("Categoria: %s\n", nomeCategoria);

    printf("\nDescricao: %s\n", descricao);
    printf("Cadastro concluido!\n");

    return 0;
}