#include <stdio.h>
#include <stdlib.h>

 int main(void){
     int n;
     int n2;
     int n3;
     
     printf("Digite um Numero \n");
     scanf("%d \n", &n);
     
     n2=n++;
     
     printf("O sucessor deste numero e: %d", &n2);
     
     n3=n--;
     printf("O antecessor deste numero e: %d", &n2);
     
     
     system("PAUSE");
     return 0;
     
     
     
     }
