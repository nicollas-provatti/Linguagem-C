#include <stdio.h>

// Ler várias notas e calcular a média delas

int main() {
    float notas[5], somaNota = 0, media;
    int acimaMedia = 0;

    for (int i = 0; i < 5; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        somaNota += notas[i];
    }

    media = somaNota / 5;

    for (int i = 0; i < 5; i++) {
        if (notas[i] >= media) {
            acimaMedia++;
        }
    }

    printf("A média foi %.2f\n", media);
    printf("Notas acima da média: %d\n", acimaMedia);

    return 0;
}

// Problema: O tamanho do array é estático.
