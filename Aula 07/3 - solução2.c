#include <stdio.h>

// Ler várias notas e calcular a média delas.

int main() {
    int qtdNotas;
    float somaNotas = 0, media;

    printf("Quantidade de notas: ");
    scanf("%d", &qtdNotas);

    for (int i = 0; i < qtdNotas; i++) {
        float nota;
        printf("Nota %d: ", i + 1);
        scanf("%f", &nota);
        somaNotas += nota;
    }

    media = somaNotas / qtdNotas;

    printf("A média foi %.2f\n", media);

    return 0;
}

// Problema: Perde o acesso a nota.
