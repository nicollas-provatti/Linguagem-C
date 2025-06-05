#include <stdio.h>

struct aluno {
    char nome[50];
    int idade;
    float nota;
};

// structs declaradas como variáveis normais são passadas para funções por valor
void atualizarNotaValor(struct aluno aluno, float novaNota) {
    aluno.nota = novaNota; 
}

int main() {
    
    struct aluno aluno1 = {"Pedro", 18, 8.9};

    atualizarNotaValor(aluno1, 7.5);
    printf("%.2f\n", aluno1.nota);

    return 0;
}