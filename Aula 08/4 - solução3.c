#include <stdio.h>

// Ler as notas de vários alunos

int main() {
    float notas[2][3];
    int melhorAluno = 0;
    float melhorMedia = 0;

    for (int i = 0; i < 2; i++) {
        float media = 0;
        printf("ALUNO %d\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
            media += notas[i][j];
        }
        media /= 3;
        if (media > melhorMedia) {
            melhorMedia = media;
            melhorAluno = i;
        }
        printf("Média do aluno %d: %.2f\n\n", i + 1, media);
    }

    printf("O aluno %d teve a melhor média: %.2f\n", melhorAluno + 1, melhorMedia);

    return 0;
}

// Problema: O tamanho da matriz é estático.