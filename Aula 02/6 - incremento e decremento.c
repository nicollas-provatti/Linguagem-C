#include <stdio.h>

int main() {
    // Operadores de Incremento e Decremento
    int numero = 5;

    // Incremento: adiciona 1 ao valor da variável
    printf("Valor inicial de numero: %d\n", numero);
    numero++;  // Incremento 
    printf("Após incremento (numero++): %d\n", numero);

    // Decremento: subtrai 1 do valor da variável
    numero--;  // Decremento 
    printf("Após decremento (numero--): %d\n", numero);

    // Pós-fixado
    printf("%d\n", numero++);  // Saída: 5
    printf("%d\n", numero);    // Saída: 6

    // Pré-fixado
    printf("%d\n", ++numero);  // Saída: 7
    printf("%d\n", numero);    // Saída: 7

    return 0;
}
