#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main(void) {
    FILE *arquivo;
    Funcionario f;
    int opcao;
    int quantidade;
    int caractere;

    do {
        printf("\nCADASTRO DE FUNCIONARIOS\n");
        printf("1 = Cadastrar funcionarios\n");
        printf("2 = Visualizar funcionarios\n");
        printf("0 = Sair\n");
        printf("Digite o numero de uma opcao: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Opcao invalida!\n");
            return 1;
        }

        if (opcao == 1) {
            printf("Quantos funcionarios quer cadastrar (max 5)? ");
            if (scanf("%d", &quantidade) != 1 || quantidade < 1 || quantidade > 5) {
                printf("Quantidade invalida\n");
                continue;
            }

            
            arquivo = fopen("funcionarios.txt", "a");
            if (arquivo == NULL) {
                perror("Erro ao tentar abrir arquivo");
                continue;
            }

            for (int i = 0; i < quantidade; i++) {
                printf("\nFuncionario %d\n", i + 1);
                printf("nome: ");
                scanf(" %49[^\n]", f.nome);
                printf("Salario: ");
                scanf("%f", &f.salario);
                printf("Horas extras: ");
                scanf("%d", &f.horasExtras);

                fprintf(arquivo, "Nome: %s\n", f.nome);
                fprintf(arquivo, "Salario: R$ %.2f\n", f.salario);
                fprintf(arquivo, "Horas extras: %d\n", f.horasExtras);
                fprintf(arquivo, "\n");
            }

            if (fclose(arquivo) != 0) {
                perror("Erro ao salvar os dados");
            } else {
                printf("\nDados salvos no caminho funcionarios.txt\n");
            }
        } else if (opcao == 2) {
            arquivo = fopen("funcionarios.txt", "r");
            if (arquivo == NULL) {
                printf("\nNenhum funcionario foi cadastrado.\n");
                continue;
            }

            printf("\nFUNCIONARIOS CADASTRADOS\n");
            while ((caractere = fgetc(arquivo)) != EOF) {
                putchar(caractere);
            }
            fclose(arquivo);
        } else if (opcao == 0) {
            printf("\nPrograma encerrado.\n");
        } else {
            printf("\nOpcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}