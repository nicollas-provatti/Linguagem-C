#include <stdio.h>

int main() {

    int idade;           
    float altura;            
    char genero;        
    char nome[10];       

    // Exibindo os valores das variáveis individualmente
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura); 
    printf("Digite seu genero: ");
    scanf(" %c", &genero); 
    printf("Digite seu nome: ");
    scanf(" %s", nome); 

    printf("Idade: %d\n", idade);
    printf("Altura: %f\n", altura); 
    printf("Genero: %c\n", genero); 
    printf("Nome: %s\n", nome); 
    // Exercício 1
    return 0;
}