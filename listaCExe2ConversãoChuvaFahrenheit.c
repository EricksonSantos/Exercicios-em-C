#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
	
	setlocale(LC_ALL,"Portuguese_Brazil");

	int n1, n2, n3, n4, result;
	
	printf("Digite o Primeiro número:");
	scanf("%d", &n1);
	
	printf("Digite o Segundo número:");
	scanf("%d", &n2);

	printf("Digite o Terceiro número:");
	scanf("%d", &n3);
	
	printf("Digite o Quarto número:");
	scanf("%d", &n4);
	
	if(n1<n2&&n3&&n4){
		result=n2+n3+n4;
		printf("%d", &result);
	}
	if(n2<n1&&n3&&n4){
		result=n1+n3+n4;
		printf("%d", &result);
	}
	if(n3<n1&&n2&&n4){
		result=n1+n2+n4;
		printf("%d", &result);
	}
	else{
		result=n1+n2+n3;
		printf("%d", &result);
	}
	
	
	system("pause");
	return 0;

}
