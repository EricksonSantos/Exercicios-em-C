#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
	
	setlocale(LC_ALL,"Portuguese_Brazil");

	float pol, ml, result; 

	ml=25.4;
	
	printf("Digite a quantidade de chuva em polegadas: \n");
	scanf("%f", &pol);
	
	result = pol*ml;
	
	printf("O total de chuva em milimetros é de:  %.2f \n", result);

	
	system("pause");
	return 0;

}
