#include <stdio.h>

int main(void) {
    FILE *arquivo;
    char nome[50];
    int matricula;
    int quantidade;

    printf("Quantos funcionarios quer cadastrar (max 5)? ");
    if (scanf("%d", &quantidade) != 1 || quantidade < 1 || quantidade > 5) {
        printf("Quantidade invalida! Informe um valor entre 1 e 5.\n");
        return 1;
    }

    arquivo = fopen("funcionarios.txt", "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo");
        return 1;
    }

    for (int i = 0; i < quantidade; i++) {
        printf("\nFuncionario %d\n", i + 1);
        printf("Nome: ");
        scanf(" %49[^\n]", nome);
        printf("Matricula: ");
        scanf("%d", &matricula);

        fprintf(arquivo, "Nome: %s\n", nome);
        fprintf(arquivo, "Matricula: %d\n\n", matricula);
    }

    if (fclose(arquivo) != 0) {
        perror("Erro ao salvar os dados");
        return 1;
    }

    printf("\ninformacoes salvas no caminho funcionarios.txt\n");

    return 0;
}