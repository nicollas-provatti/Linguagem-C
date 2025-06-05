#include <stdio.h>

// Problema: Armazenar as informações dos alunos de uma escola.

// Declarando uma struct
struct aluno {
    char nome[50];
    int idade;
    float nota;
};


int main() {
    // Dados de um aluno
    char nome[50];
    int idade;
    float nota;

    // Dados de outro aluno
    char nome2[50];
    int idade2;
    float nota2;

    // Criando uma variável do tipo "struct aluno"
    struct aluno aluno1;

    // Inicializando uma variável do tipo "struct aluno"
    struct aluno aluno2 = {"Pedro", 20, 7.5};

    // Acessando os valores
    printf("%s\n", aluno1.nome);
    printf("%d\n", aluno1.idade);
    printf("%.2f\n", aluno1.nota);

    // Modificando os valores
    strcpy(aluno1.nome, "Bruno");
    aluno1.idade = 22;
    aluno1.nota = 6.7;

    // Acessando valores após a modificação
    printf("%s\n", aluno1.nome);
    printf("%d\n", aluno1.idade);
    printf("%.2f\n", aluno1.nota);

    // Preenchendo uma struct com scanf()
    printf("Nome: ");
    scanf("%49[^\n]", aluno1.nome);
    getchar();
    printf("Idade: ");
    scanf("%d", &aluno1.idade);
    printf("Nota: ");
    scanf("%f", &aluno1.nota);

    // Acessando os valores:
    printf("Dados do aluno 1\n");
    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Nota: %.2f\n", aluno1.nota);

    return 0;
}

 // A medida que o números de alunos crescem é preciso delcarar mais três variáveis para armazenar os dados. Como resolver isso ?

// Solução: Usar uma struct. Uma struct te permite criar um novo tipo de dado a partir de dados primitivos (char, int, float, double). E como isso nos ajuda ? A ideia é criar um tipo de dado chamando "aluno" que contera os seus dados. Não entendeu ? Vamos para a prática!!