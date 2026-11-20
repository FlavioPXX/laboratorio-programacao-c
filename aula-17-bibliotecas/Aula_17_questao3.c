#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char copia[50];
    char codigo[10];
    char msg[100] = "Ola, ";
    const char *curso;

    printf("IDENTIFICACAO ACADEMICA\n\n");

    printf("Nome do estudante: ");
    scanf("%49s", nome);
    printf("Codigo do curso: ");
    scanf("%9s", codigo);

    if (strcmp(codigo, "CC") == 0) {
        curso = "Ciencia da Computacao";
    } else if (strcmp(codigo, "SI") == 0) {
        curso = "Sistemas de Informacao";
    } else {
        curso = "Curso nao identificado";
    }

    strcpy(copia, nome);
    strcat(msg, copia);
    strcat(msg, "!");

    printf("\resultado\n");
    printf("Estudante: %s\n", nome);
    printf("Curso: %s\n", curso);
    printf("Caracteres no nome: %zu\n", strlen(nome));

    printf("\n%s\n", msg);

    return 0;
}