
#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} funcionario;

int main()
{
    funcionario funcionario1, funcionario2;

    printf("Nome do funcionario: ");
    scanf("%49s", funcionario1.nome);

    printf("Idade do funcionario: ");
    scanf("%d", &funcionario1.idade);

    printf("Salario do funcionario: ");
    scanf("%f", &funcionario1.salario);

    printf("\nFuncionario 1: %s\n", funcionario1.nome);
    printf("Idade: %d\n", funcionario1.idade);
    printf("Salario: %.2f\n", funcionario1.salario);

    printf("\nFuncionario 2:\n");

    printf("Nome do funcionario: ");
    scanf("%49s", funcionario2.nome);

    printf("Idade do funcionario: ");
    scanf("%d", &funcionario2.idade);

    printf("Salario do funcionario: ");
    scanf("%f", &funcionario2.salario);

    printf("\nFuncionario 2: %s\n", funcionario2.nome);
    printf("Idade: %d\n", funcionario2.idade);
    printf("Salario: %.2f\n", funcionario2.salario);

    if (funcionario1.salario > funcionario2.salario) {
        printf("O salario do funcionario 1 e maior que o do funcionario 2");
    }
    else if (funcionario2.salario > funcionario1.salario) {
        printf("O salario do funcionario 2 e maior que o do funcionario 1");
    }
    else if (funcionario1.salario == funcionario2.salario) {
        printf("Os salarios dos funcionarios sao iguais");
    }
    else {
        printf("Erro na comparacao dos salarios");
    }

    return 0;
}
