#include<stdio.h>
#include<windows.h>
#include<stdlib.h>


int main (){
  SetConsoleOutputCP(65001);
  system("cls");
  int l1,l2,l3;
  printf ("\nDe o valor do primeiro lado do triangulo\n");
  scanf ("%d",&l1);
  printf ("\nDe o valor do segundo lado do triangulo\n");
  scanf ("%d",&l2);
  printf ("\nDe o valor do terceiro lado do triangulo\n");
  scanf ("%d",&l3);


  if (l1==l2 && l2==l3){
    printf ("\nVoce tem um trinagulo equilátero");
  }else if (l1==l2 && l1!=l3){
    printf ("\nVoce tem um triangulo isósceles");
  }else if (l2==l3 && l2!=l1){
    printf ("\nVoce tem um triangulo isósceles");
  }else if (l1==l3 && l1!=l2){
    printf ("\nVoce tem um triangulo isósceles");
  }else{
    printf("\nVoce tem um triangulo escaleno");
  }
return 0;
}
