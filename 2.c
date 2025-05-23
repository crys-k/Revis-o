#include<stdio.h>
#include<windows.h>
#include<stdlib.h>


int main(){
  SetConsoleOutputCP(65001);
  system("cls");


    char operacao;
    int n1, n2;
    float conta;


    printf("\nEscreva o primeiro número: ");
    scanf("%d", &n1);


    printf("\nEscreva um operador matemático entre: *  /  +  - : ");
    scanf(" %c", &operacao);  // Espaço para limpar buffer


    printf("\nEscreva o segundo número: ");
    scanf("%d", &n2);
  switch (operacao){
    case '+':
      conta=n1+n2;
      printf ("\nO resultado da conta de %d + %d e igual a %.2f",n1,n2,conta);
    break;
    case '-':
      conta=n1-n2;
      printf ("\nO resultado da conta de %d - %d e igual a %.2f",n1,n2,conta);
    break;
    case '/':  
        if (n2==0){
          do {
            printf ("Informe um valor válido\n");
            scanf ("%d",&n2);
          }while(n2==0);
        }
        conta=n1/n2;
        printf ("\nO resultado da conta de %d / %d e igual a %.2f",n1,n2,conta);
    break;
    case '*':
      conta=n1*n2;
      printf ("\nO resultado da conta de %d * %d e igual a %.2f",n1,n2,conta);
    break;
  }
return 0;


}
