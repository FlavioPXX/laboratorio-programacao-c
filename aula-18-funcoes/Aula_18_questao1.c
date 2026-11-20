#include <stdio.h>

void exibirMenu(void);
float somar(float a, float b);
float subtrair(float a, float b);
float multiplicar(float a, float b);
float dividir(float a, float b);

int main(void) {
    int opcao;
    float n1, n2;

    do {
        exibirMenu();
        if (scanf("%d", &opcao) != 1) {
            printf("\nEntrada invalida!\n");
            return 1;
        }

        if (opcao == 0) {
            printf("\nPrograma encerrado.\n");
            break;
        }

        if (opcao < 1 || opcao > 4) {
            printf("\nOpcao invalida!\n");
            continue;
        }

        printf("\nPrimeiro numero: ");
        scanf("%f", &n1);
        printf("Segundo numero: ");
        scanf("%f", &n2);

        switch (opcao) {
            case 1:
                printf("\resultado: %.2f\n", somar(n1, n2));
                break;
            case 2:
                printf("\resultado: %.2f\n", subtrair(n1, n2));
                break;
            case 3:
                printf("\resultado: %.2f\n", multiplicar(n1, n2));
                break;
            case 4:
                if (n2 == 0) {
                    printf("\nErro: nao e possivel dividir por zero.\n");
                } else {
                    printf("\resultado: %.2f\n", dividir(n1, n2));
                }
                break;
        }
    } while (opcao != 0);

    return 0;
}

void exibirMenu(void) {
    printf("\nCALCULADORA\n\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n\n");
    printf("Escolha uma opcao: ");
}

float somar(float a, float b) { return a + b; }
float subtrair(float a, float b) { return a - b; }
float multiplicar(float a, float b) { return a * b; }
float dividir(float a, float b) { return a / b; }