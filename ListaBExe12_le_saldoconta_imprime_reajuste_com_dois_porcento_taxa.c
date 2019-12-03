#include <stdio.h>
#include <math.h>

int main(void)

{
	float saldo, saldoNovo;
	printf("digite seu saldo:");
	scanf("%f", &saldo);
	saldoNovo = saldo + saldo * 0.02;
	printf("\nSaldo com reajuste: %f", saldoNovo);
	

	return 0;
}
