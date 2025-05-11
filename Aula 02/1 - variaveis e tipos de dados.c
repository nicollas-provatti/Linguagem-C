#include <stdio.h>

int main() {
    // [[][][][]]
    int idade = 23;           
    float altura = 1.85;            
    char genero = 'M' ;        
    char nome[] = "Nicollas";       

    // Exibindo os valores das variáveis individualmente
    printf("%d\n", idade);
    printf("%f\n", altura); 
    printf("%c\n", genero); 
    printf("%s\n", nome); 

    printf("Idade: %d\n", idade);
    printf("Altura: %f\n", altura); 
    printf("Genero: %c\n", genero); 
    printf("Nome: %s\n", nome); 
    

    return 0;
}