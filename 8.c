#include <stdio.h>

int main()
{
int vetor [10];
int menor=10000,maior=0;

for (int i=0;i<10;i++){
    printf("Escreva um numero inteiro para colocar na posição %d do vetor",i);
    scanf("%d",&vetor[i]);
}
for (int i=0;i<10;i++){
    if (vetor[i]<menor){
        menor=vetor[i];
    }
    else if (vetor[i]>maior){
        maior=vetor[i];
    }
}
printf("O maior numero é %d e o menor %d",maior,menor);
return 0;
}
