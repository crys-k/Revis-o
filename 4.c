#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero,conta;
    printf("Escreva um numero inteiro");
    scanf("%d",&numero);
    for (int i=0;i<=10;i++){
        conta=numero*i;
        printf("\n%d * %d =%d",numero,i,conta);
    }
return 0;
}
