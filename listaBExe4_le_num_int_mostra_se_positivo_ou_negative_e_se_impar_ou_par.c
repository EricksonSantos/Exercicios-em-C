#include <stdio.h>
#include  <stdlib.h>

int main(void){
int n;
printf("Digite um numero \n");
scanf("%d", &n);

n=n%2;


if (n=1){
     printf("Este numero e impar ");
}
else{
     printf("Este numero e par ");
}


if(n >= 1){
     printf("e Positivo \n"); 
     }
else{
      printf("e Negativo \n"); 
     }
     
system("PAUSE");
return 0;
}
