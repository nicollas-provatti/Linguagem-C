#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];

    // scanf():
    printf("Digite seu nome: ");
    scanf("%s", nome); // para de ler até o espaço
    scanf("%[^\n]", nome); // não checa o buffer
    scanf("%49[^\n]", nome); // great!

    // fgets():
    fgets(nome, 50, stdin); // lê o ENTER
    int posicao = strcspn(nome, "\n");
    nome[posicao] = '\0';

    printf("%d\n", posicao);
    printf("Ola, %s!\n", nome);

    return 0;
}