#include <stdio.h>

// Ler as notas de vários alunos

int main() {
    float aluno1Nota1, aluno1Nota2, aluno1Nota3;
    float aluno2Nota1, aluno2Nota2, aluno2Nota3;
    float aluno1Media, aluno2Media;

    printf("Aluno 1\n");
    printf("Nota 1: ");
    scanf("%f", &aluno1Nota1);
    printf("Nota 2: ");
    scanf("%f", &aluno1Nota2);
    printf("Nota 3: ");
    scanf("%f", &aluno1Nota3);

    printf("\nAluno 2\n");
    printf("Nota 1: ");
    scanf("%f", &aluno2Nota1);
    printf("Nota 2: ");
    scanf("%f", &aluno2Nota2);
    printf("Nota 3: ");
    scanf("%f", &aluno2Nota3);

    aluno1Media = (aluno1Nota1 + aluno1Nota2 + aluno1Nota3) / 3.0;
    aluno2Media = (aluno2Nota1 + aluno2Nota2 + aluno2Nota3) / 3.0;

    printf("\nMédia do aluno 1: %.2f\n", aluno1Media);
    printf("Média do aluno 2: %.2f\n", aluno2Media);

    return 0;
}

// Problema: É preciso criar muitas variáveis. E saber a quantidade de notas e alunos.
