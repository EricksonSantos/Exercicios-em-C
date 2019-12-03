#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	char name [100], telefone[100], endereco[100];
	printf("digite seu nome: \n");
	scanf("%s", &name);
	printf("Digite seu telefone");
	scanf("%s", &telefone);
	printf("Digite seu endereco");
	scanf("%s", &endereco);
	
	printf("\n%s - Nome:%s, telefone:%s, Endereco: %s", name, telefone, endereco);
	

	system("pause");
	return 0;
}
