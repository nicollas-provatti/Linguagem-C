#include <stdio.h>

const char *classificaIdade(int idade) {
    if (idade >= 18) {
        return "Maior de Idade";
    }
    else {
        return "Menor de Idade";
    }
}

int main() {

    int idade = 18;

    const char* classfiicacaoIdade = classificaIdade(idade);

    printf("Sua classificação é: %s\n", classfiicacaoIdade);

    return 0;
}