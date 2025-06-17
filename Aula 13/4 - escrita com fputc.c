#include <stdio.h>
#include <string.h>

int main() {
    FILE *arquivo = fopen("arquivo.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char caractere = 'A';
    fputc(caractere, arquivo);
    fputc('\n', arquivo);

    fclose(arquivo);

    return 0;
}