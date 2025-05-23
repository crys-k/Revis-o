#include <stdio.h>

int main()
{
int vetor[]={1,2,3,4,5};
int conta=0;
for (int i=0;i<5;i++){
    conta+=vetor[i];
}
printf("o resultado da soma dos numeros dentro do vetor é de %d",conta);
return 0;
}
