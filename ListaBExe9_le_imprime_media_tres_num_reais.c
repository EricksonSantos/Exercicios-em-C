#include <stdio.h>
#include <math.h>

int main(void)

{
	float n1, n2, n3, media;
	printf("Digite o primeiro numero");
	scanf("%f", &n1);
	printf("Digite o segundo numero");
	scanf("%f", &n2);
	printf("Digite o tericeiro numero");
	scanf("%f", &n3);

	media = (n1+n2+n3) / 3;

	printf("media: %f", media);
	
	return 0;
}
