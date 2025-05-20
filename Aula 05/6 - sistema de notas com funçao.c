#include <stdio.h>

float calcularMedia(float n1, float n2) {
    return (n1 + n2) / 2;
}

void exibirResultado( float n1, float n2, float media) {
    printf("\n--- Resultado ---\n");
    printf("Nota 1: %.2f\n", n1);
    printf("Nota 2: %.2f\n", n2);
    printf("Média: %.2f\n", media);

    if (media >= 7) {
        printf("Situação: Aprovado\n");
    } else {
        printf("Situação: Reprovado\n");
    }
}

int main() {
    float nota1, nota2, media;


    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    media = calcularMedia(nota1, nota2);
    exibirResultado(nota1, nota2, media);

    return 0;
}
