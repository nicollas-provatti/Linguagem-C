#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("\n--- Resultado ---\n");
    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2);
    printf("Média: %.2f\n", media);

    if (media >= 7) {
        printf("Situação: Aprovado\n");
    } else {
        printf("Situação: Reprovado\n");
    }

    return 0;
}
