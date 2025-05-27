#include <stdio.h>

int main() {
    int numeros[5];

    // Atribuição manual
    numeros[0] = 1;
    numeros[1] = 2;
    numeros[2] = 3;
    numeros[3] = 4;
    numeros[4] = 5;

    // Acesso direto
    printf("[0] = %d\n", numeros[0]);
    printf("[1] = %d\n", numeros[1]);
    printf("[2] = %d\n", numeros[2]);
    printf("[3] = %d\n", numeros[3]);
    printf("[4] = %d\n", numeros[4]);

    // Leitura via laço
    for (int i = 0; i < 5; i++) {
        int numero;
        printf("Digite um número: ");
        scanf("%d", &numero);
        numeros[i] = numero;
    }

    // Impressão via laço
    for (int i = 0; i < 5; i++) {
        printf("[%d] = %d\n", i, numeros[i]);
    }

    return 0;
}