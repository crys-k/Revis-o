#include<stdio.h>
#include<windows.h>


int main(){
  int numero;
  printf ("Escreva um numero inteiro");
  scanf ("%d",&numero);
    if (numero < 0) {
        printf("O numero %d e negativo\n", numero);
    } else if (numero > 0) {
        printf("O numero %d e positivo\n", numero);
    } else {
        printf("Seu numero é 0\n");
    }
return 0;
}
