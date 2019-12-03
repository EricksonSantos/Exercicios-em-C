#include <stdio.h>
#include <math.h>

int main(void)

{
	float base, altura, perimetro, area;
	printf("Digite a base");
	scanf("%f", &base);
	printf("Digite a altura");
	scanf("%f", &altura);
	perimetro = base + altura;
	
	area = base * altura;
	
	printf("\nPerimetro: %f", perimetro);
	printf("\nArea: %f", area);
	
	
	return 0;
}
