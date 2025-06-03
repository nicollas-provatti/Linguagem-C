#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    char palavra[] = "serenidade";

    // strlen(): 
    int tamanho = strlen(palavra);
    printf("%d\n", tamanho);

    // strcpy(): copia
    char destino[] = "Olá";
    strcpy(destino, palavra);
    printf("%s\n", destino);

    // strcat(): concatena
    char origem[] = "Mundo!";
    char destino[] = "Olá ";
    strcat(destino, origem);
    printf("%s\n" , destino);

    //strcmp(): compara

    //int resultado = strcmp("abc", "abc"); // 0
    //int resultado = strcmp("abc", "ab"); // 1
    int resultado = strcmp("a", "ab"); // -1
    printf("%d\n", resultado);

    return 0;
}