#include <stdio.h>

// Ler as notas de vários alunos

int main() {
    float aluno1Notas[3], aluno2Notas[3];
    float aluno1Media = 0, aluno2Media = 0;

    printf("ALUNO 1\n");
    for (int i = 0; i < 3; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &aluno1Notas[i]);
        aluno1Media += aluno1Notas[i];
    }
    aluno1Media /= 3;

    printf("\nALUNO 2\n");
    for (int i = 0; i < 3; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &aluno2Notas[i]);
        aluno2Media += aluno2Notas[i];
    }
    aluno2Media /= 3;

    printf("\nMédia do aluno 1: %.2f\n", aluno1Media);
    printf("Média do aluno 2: %.2f\n", aluno2Media);

    return 0;
}

// Problema: É preciso criar uma array para cada aluno.
