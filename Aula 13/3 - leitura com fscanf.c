#include <stdio.h>

// Leitura de Arquivo: fscanf()

int main() {

    FILE *arquivo = fopen("dados.txt", "r"); 
    
    if (arquivo == NULL) {
        printf("ERROR\n");
        return 1;
    }

    // Apresentando fscanf()
    char nome1[30];
    int idade1;
    float altura1;
    fscanf(arquivo, "%s %d %f", nome1, &idade1, &altura1);
    printf("Nome: %s\nIdade: %d\nAltura: %.2f\n", nome1, idade1, altura1);
    // Dados lado a lado

    while (1) {
        char nome[50];
        int idade;
        float altura;

        if (fscanf(arquivo, "%s %d %f", nome, &idade, &altura) == EOF) {
            break;
        }

        printf("Nome: %s\nIdade: %d\nAltura: %.2f\n\n", nome, idade, altura);
    }

    fclose(arquivo);

    return 0;
}