#include <stdio.h>
#include <math.h>

int main(void)

{
	float n1, n2, resultado;
	printf("Digite o numero 1:");
	scanf("%f", &n1);
	printf("Digite o numero 2");
	scanf("%f", &n2);
	resultado = n1 + n2;
	printf("\nSoma: %f", resultado);
	resultado = n1 - n2;
	printf("\nSubtracao: %f", resultado);
	resultado = n1 * n2;
	printf("\nMultiplicacao: %f", resultado);
	resultado = n1 / n2;
	printf("\nDivisao: %f", resultado);
	
	
	return 0;
}
