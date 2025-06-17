#include <stdio.h>

int main() {
    FILE *arquivo = fopen("arquivo.txt", "r");  // Abre o arquivo para leitura
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Apresentando fgets()
    char linha1[50];
    fgets(linha1, sizeof(linha1), arquivo);
    printf("%s", linha1);
    char linha2[50];
    fgets(linha2, sizeof(linha2), arquivo);
    printf("%s", linha2);

    char linha[100];

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {  // Lê linha por linha
        printf("%s", linha);  // Exibe a linha lida
    }

    fclose(arquivo);  // Fecha o arquivo
    return 0;
}