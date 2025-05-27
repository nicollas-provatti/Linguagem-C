#include <stdio.h>

void ler_array(int numeros[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);
    }
}

void imprimir_array(int numeros[], int tamanho) {
    printf("\n");
    for (int i = 0; i < tamanho; i++) {
        printf("[%d] = %d\n", i, numeros[i]);
    }
    printf("\n");
}

void dobrar(int numeros[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        numeros[i] *= 2;
    }
}

int main() {
    int numeros[10];

    ler_array(numeros, 10);
    imprimir_array(numeros, 10);
    dobrar(numeros, 10);
    imprimir_array(numeros, 10);

    return 0;
}
