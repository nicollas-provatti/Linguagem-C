#include <stdio.h>

int main() {
    // fopen() recebe dois argumentos:
    // - Nome do arquivo
    // - Modo de abertura
    FILE *arquivo = fopen("dados.txt", "r"); // leitura (precisar existir)
    FILE *arquivo = fopen("dados.txt", "w"); // escrita

    if (arquivo == NULL) {
        printf("ERROR\n");
        return 1;
    }

    // Fazer leitura ou  escrita

    fclose(arquivo);

    return 0;
}