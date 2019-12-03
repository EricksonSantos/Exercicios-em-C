#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)

{
	float alt,raio, areacilindro, qntdlitros, qntddelatas, total;
	printf("Digite o valor da altura em metros :\n");
	scanf("%f",&alt);
	printf("Digite o valor do raio em metros: \n");
	scanf("%f", &raio);
	areacilindro=3,14*raio*raio+2*3,14*raio*alt;
	printf("\nA area do cilindro e %.2f metro quadrados", areacilindro);
	qntdlitros=areacilindro/3;
	printf("\nA quantidade de litros necessario e de %.2f", qntdlitros);
	qntddelatas=qntdlitros/5;
    printf("\nA quantidade de latas necessaria e de %.2f", qntddelatas);
    total=qntddelatas*20;
    printf("\nO valor total das tintas e de R$ %.2f\n", total);
    
    system("pause");
    return 0;
}
