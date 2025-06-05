#include <stdio.h>

struct aluno {
    char nome[50];
    int idade;
    float nota;
};

// Para cada novo aluno é preciso declarar uma nova variável do tipo "struct aluno" mesmo que não precisemos mais declarar uma variável para o nome, outra para idade e outra para nota ainda é preciso declarar várias variáveis do tipo "struct aluno". Então, para resovler isso vamos criar um array de struct.

int main() {
    // O mesmo que declarar 10 variáveis do tipo "struct aluno"
    struct aluno alunos[10];

    // Por ser um array vamos usar um loop para iterar

    // Loop para preencher a struct
    for (int i = 0; i < 3; i++) {
        printf("Nome: ");
        scanf("%49[^\n]", alunos[i].nome);
        getchar();
        printf("Idade: ");
        scanf("%d", &alunos[i].idade);
        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
        getchar();
    }

    // Loop para imprimir os valores da struct
    for (int i = 0; i < 3; i++) {
        printf("Dados do aluno %d\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota: %.2f\n", alunos[i].nota);
    }

    // Exercício de Fixação

    return 0;
}