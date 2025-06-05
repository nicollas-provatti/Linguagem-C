#include <stdio.h>

// E se quiséssemos armazenar o aniversário de cada aluno. Para fazer isso seria preciso adicionar três variáveis na "struct aluno": dia (int), mes (int) e ano (int). Só que essas variáveis possumem uma relação entre elas, dessa forma podemos criar uma struct com essas variáveis. Apos criar a struct "dataNascimento" podemos adicionar uma variável do tipo "struct dataNascimento" dentro da struct "aluno" e assim teremos o conceito de struct aninhadas.

struct dataNascimento {
    int dia;
    int mes;
    int ano;
};

struct aluno {
    char nome[50];
    int idade;
    float nota;
    //int dia;
    //int mes;
    //int ano;
    struct dataNascimento aniversario;
};

int main() {

    // Exercício: printf("%02d/%02d/%d", dia, mes, ano);

    return 0;
}