#include <stdio.h>
#include <stdlib.h>

int main(void){
    char nome[50];
    int idade;
    
    printf("Digite seu nome: \n");
    scanf("%s", nome);
    
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    
    printf("Seu nome e: %s \n", nome);
    printf("Sua idade e: %d \n", idade);
    
    system("PAUSE");
    return 0;
}
