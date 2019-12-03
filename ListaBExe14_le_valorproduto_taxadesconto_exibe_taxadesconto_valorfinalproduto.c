#include <stdio.h>
#include <math.h>

int main(void)

{
	float valorProd, perDesc, valorDesc;
	printf("digite o valor do produto:");
	scanf("%f", &valorProd);
	printf("digite o desconto:");
	scanf("%f", &perDesc);
	valorDesc = valorProd - (valorProd * (perDesc / 100));
	printf("Produto com Desconto: %f", valorDesc);

	return 0;
}
