#include <stdio.h>

int main() {
    int nota = 8;

    if (nota >= 7 && nota <= 10) {
        printf("Aprovado!\n");
    } else if (nota >= 4 && nota <= 6) {
        printf("Recuperação!\n");
    } else if (nota >= 0 && nota <= 3) {
        printf("Reprovado!\n");
    } else {
        printf("Nota Inválida!\n");
    }

    return 0;
}