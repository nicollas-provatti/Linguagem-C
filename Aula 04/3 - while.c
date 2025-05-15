#include <stdio.h>

int main() {
    int contador = 1;

    // Contador de 1 até 100
    while (contador <= 100) {
        printf("%d\n", contador);
        contador++;
    }

    int soma = 0;

    // Soma até que o usuário digite 0
    while (1) {
        int numero;
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero == 0) {
            printf("Saindo do laço...\n");
            break;
        }

        soma += numero;
    }

    printf("A soma foi: %d\n", soma);

    return 0;
}
