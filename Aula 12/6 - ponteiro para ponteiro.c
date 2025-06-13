#include <stdio.h>

int main() {

    int numero = 10;
    int *ponteiro = &numero;
    int **pponteiro = &ponteiro;

    printf("%d\n", numero);  // Saída: 10
    printf("%d\n", *ponteiro);    // Saída: 10
    printf("%d\n", **pponteiro);  // Saída: 10

    return 0;
}