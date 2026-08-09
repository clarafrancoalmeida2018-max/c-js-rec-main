#include <stdio.h>

int main() {
    char nome[50];
    char descricao[100];
    int idade;
    char genero[20];
    char hobby[50];

    printf("Digite o nome: ");
    scanf("%49s", nome);

    printf("Digite a descricao: ");
    scanf("%99s", descricao);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o genero: ");
    scanf("%19s", genero);

    printf("Digite o hobby: ");
    scanf("%49s", hobby);

    printf("\n--- DADOS INFORMADOS ---\n");
    printf("Nome: %s\n", nome);
    printf("Descricao: %s\n", descricao);
    printf("Idade: %d\n", idade);
    printf("Genero: %s\n", genero);
    printf("Hobby: %s\n", hobby);

    return 0;
}