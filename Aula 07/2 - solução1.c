#include <stdio.h>

// Ler várias notas e calcular a média delas

int main() {
    float nota1, nota2, nota3, nota4, media;

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    printf("Nota 3: ");
    scanf("%f", &nota3);

    printf("Nota 4: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    printf("A média foi %.2f\n", media);

    return 0;
}

// Problema: É preciso criar muitas variáveis. E saber a quantidade de notas.
