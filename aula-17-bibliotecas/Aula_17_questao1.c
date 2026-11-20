#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char confirmar[50];
    char perfil[20];
    char msg[100] = "Bem-vindo(a), ";
    const char *descricao;

    printf("CADASTRO DE USUARIOS\n\n");

    printf("Digite seu nome: ");
    scanf("%49s", nome);
    printf("Digite seu perfil: ");
    scanf("%19s", perfil);

    if (strcmp(perfil, "ADMIN") == 0) {
        descricao = "Administrador";
    } else if (strcmp(perfil, "COMUM") == 0) {
        descricao = "Comum";
    } else {
        descricao = "Perfil invalido";
    }

    strcpy(confirmar, nome);

    strcat(msg, confirmar);
    strcat(msg, "!");

    printf("\nDADOS CADASTRADOS\n");
    printf("Nome: %s\n", nome);
    printf("Quantidade de caracteres: %zu\n", strlen(nome));
    printf("Perfil: %s\n", descricao);

    printf("\n%s\n", msg);
    if (strcmp(descricao, "Perfil invalido") != 0) {
        printf("Cadastro realizado com sucesso.\n");
    } else {
        printf("Cadastro nao feito: perfil precisa ser ADMIN ou COMUM.\n");
    }

    return 0;
}