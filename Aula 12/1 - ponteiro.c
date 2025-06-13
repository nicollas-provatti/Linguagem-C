#include <stdio.h>

int main() {

    int numero = 10;

    printf("numero(valor): %d\n", numero);
    printf("numero(endereco): %p\n\n", &numero);

    int *ponteiro = &numero;

    printf("ponteiro(valor): %p\n", ponteiro);
    printf("ponteiro(endereco): %p\n", &ponteiro);

    // Boa prática
    int *ptr = NULL; 

    // Acessando numero pelo ponteiro

    printf("numero(valor): %d\n", numero);
    printf("*ponteiro(valor): %d\n", *ponteiro);

    *ponteiro = 20;

    printf("numero(valor): %d\n", numero);
    printf("*ponteiro(valor): %d\n", *ponteiro);

    return 0;
}