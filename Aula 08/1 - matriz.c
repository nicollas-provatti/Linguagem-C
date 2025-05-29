#include <stdio.h>

int main() {
    int numeros[2][2];

    // Atribuição
    numeros[0][0] = 1;
    numeros[0][1] = 2;
    numeros[1][0] = 3;
    numeros[1][1] = 4;

    // Acesso
    printf("[0][0] = %d\n", numeros[0][0]);
    printf("[0][1] = %d\n", numeros[0][1]);
    printf("[1][0] = %d\n", numeros[1][0]);
    printf("[1][1] = %d\n\n", numeros[1][1]);

    printf("%d %d\n", numeros[0][0], numeros[0][1]);
    printf("%d %d\n", numeros[1][0], numeros[1][1]);

    // Leitura
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int numero;
            printf("Digite um número: ");
            scanf("%d", &numero);
            numeros[i][j] = numero;
        }
    }

    // Impressão
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("[%d][%d] = %d\n", i, j, numeros[i][j]);
        }
    }

    return 0;
}
