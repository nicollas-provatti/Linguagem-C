#include <stdio.h>

int main() {

    // Imprime "Olá, mundo!" 5 vezes
    for (int contador = 1; contador <= 5; contador++) {
        printf("Olá, mundo!\n");
    }

    // Imprime os números de 1 a 100
    for (int contador = 1; contador <= 100; contador++) {
        printf("%d\n", contador);
    }

    // Pergunta ao usuário quantas vezes repetir
    int qtdRepeticoes;
    printf("Quantas vezes você deseja repetir? ");
    scanf("%d", &qtdRepeticoes);

    for (int contador = 1; contador <= qtdRepeticoes; contador++) {
        printf("%d\n", contador);
    }

    return 0;
}
