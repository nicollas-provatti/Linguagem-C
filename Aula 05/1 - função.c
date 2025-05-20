#include <stdio.h>

int somar(int x, int y); // Declaração


int main() {
    int numero1, numero2, soma;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    soma = somar(numero1, numero2); // Chamada

    printf("%d + %d = %d\n", numero1, numero2, soma);

    return 0;
}

int somar(int x, int y) { // Definição
    return x + y;
}

