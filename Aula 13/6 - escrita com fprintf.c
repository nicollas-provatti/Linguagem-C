#include <stdio.h>

int main() {
    FILE *file = fopen("arquivo.txt", "w");  
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int idade = 25;
    float altura = 1.75;
    char nome[] = "João";

    fprintf(file, "Nome: %s, Idade: %d, Altura: %.2f\n", nome, idade, altura);  // Escreve dados formatados no arquivo

    fclose(file);  
    return 0;
}