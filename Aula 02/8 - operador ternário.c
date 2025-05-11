#include <stdio.h>

int main() {

    // Exemplo 1:
    int a = 10;
    int b = 20;

    int maior = (a > b) ? a : b;

    printf("O maior número é: %d\n", maior);

    // Exemplo 2:
    a > b ? printf("%d > %d\n", a, b) : printf("%d > %d\n", b, a);

    return 0;
}