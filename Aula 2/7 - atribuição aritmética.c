#include <stdio.h>

int main() {
    // Variável inicial
    int numero = 10;

    // Atribuição matemática: Adição
    numero += 5; // Equivalente a: numero = numero + 5
    printf("Após 'numero += 5': %d\n", numero); // Saída: 15

    // Atribuição matemática: Subtração
    numero -= 3; // Equivalente a: numero = numero - 3
    printf("Após 'numero -= 3': %d\n", numero); // Saída: 12

    // Atribuição matemática: Multiplicação
    numero *= 2; // Equivalente a: numero = numero * 2
    printf("Após 'numero *= 2': %d\n", numero); // Saída: 24

    // Atribuição matemática: Divisão
    numero /= 4; // Equivalente a: numero = numero / 4
    printf("Após 'numero /= 4': %d\n", numero); // Saída: 6

    return 0;
}