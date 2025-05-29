#include <stdio.h>

void ler_matriz(int matriz[3][3], int linha, int coluna) {
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("Digite um número: ");
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimir_matriz(int matriz[3][3], int linha, int coluna) {
    printf("\n");
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }
    printf("\n");
}

void dobrar(int matriz[3][3], int linha, int coluna) {
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            matriz[i][j] *= 2;
        }
    }
}

int main() {
    int numeros[3][3];

    ler_matriz(numeros, 3, 3);
    imprimir_matriz(numeros, 3, 3);
    dobrar(numeros, 3, 3);
    imprimir_matriz(numeros, 3, 3);

    return 0;
}
