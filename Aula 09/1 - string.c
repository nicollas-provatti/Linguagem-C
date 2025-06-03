#include <stdio.h>

int main() {

    // Declaração
    char nome1[4]; 

    // Atribuição
    nome1[0] = 'A';
    nome1[1] = 'n';
    nome1[2] = 'a';
    // nome1[3] = '\0';

    // Inicialização
    char nome2[6] = "Pedro";
    char nome3[] = "Maria";

    // Impressão
    printf("Nome1: %s\n", nome1);
    printf("Nome2: %s\n", nome2);
    printf("Nome3: %s\n", nome3);

    return 0;

}