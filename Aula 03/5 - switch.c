#include <stdio.h>

int main() {
    int opcao;

    printf("--------Menu-------\n");
    printf("1 - Adicionar Livro\n");
    printf("2 - Remover Livro\n");
    printf("3 - Listar Livros\n");
    printf("4 - Buscar Livro\n");
    printf("-------------------\n\n");

    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Adicionando livro...\n");
            break;
        case 2:
            printf("Removendo livro...\n");
            break;
        case 3:
            printf("Listando livros...\n");
            break;
        case 4:
            printf("Buscando livro..\n");
            break;
        default:
            printf("Opção Inválida!\n");
    }

    return 0;
}