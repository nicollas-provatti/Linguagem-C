#include <stdio.h>

int main() {
    int qtdNumeros, qtdPares = 0, qtdImpares = 0, soma = 0;

    printf("Quantos números você quer digitar? ");
    scanf("%d", &qtdNumeros);

    for (int contador = 1; contador <= qtdNumeros; contador++) {
        int numero;
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            qtdPares++;
        } else {
            qtdImpares++;
        }

        soma += numero;
    }

    printf("Números pares: %d\n", qtdPares);
    printf("Números ímpares: %d\n", qtdImpares);
    printf("A soma dos números foi: %d\n", soma);

    return 0;
}
