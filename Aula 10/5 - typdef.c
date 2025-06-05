#include <stdio.h>

// Para facilitar a escrita do código vamos aprender o comando typedef. Ele permite você renomear tipos de dados.

typedef struct aluno {
    char nome[50];
    int idade;
    float nota;
} aluno;

int main() {

    // Renomenado int
    typedef int Inteiro;
    Inteiro numero = 10;
    printf("%d\n", numero);
    return 0;

    // struct aluno
    aluno aluno1 = {"Pedro", 12, 5.6};
    // Usando o typedef não é preciso colocar a palavra "struct" na hora de declarar a variável.
}