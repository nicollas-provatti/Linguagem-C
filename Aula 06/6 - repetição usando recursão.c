#include <stdio.h>

void ler(int contador, int qtdNumeros) {
    if (contador == qtdNumeros) {
        printf("\nFim da Leitura...\n");
        printf("\nNúmeros digitados: ");
    } else {
        int numero;

        printf("Digite um número: ");
        scanf("%d", &numero);

        ler(contador + 1, qtdNumeros);

        printf("%d ", numero); // imprime na volta da recursão (invertido)

        // Para imprimir apenas os pares:
        /*
        if (numero % 2 == 0) {
            printf("%d ", numero);
        }
        */
    }
}

int main() {
    int qtdNumeros;

    printf("Quantidade de números: ");
    scanf("%d", &qtdNumeros);

    ler(0, qtdNumeros);
    printf("\n");

    return 0;
}
