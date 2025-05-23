#include <stdio.h>

int main()
{
int vetor1 [10];
int vetor2 [10];

for (int i=0;i<10;i++){
    printf("Escreva um numero inteiro para colocar na posição %d do vetor",i);
    scanf("%d",&vetor1[i]);
}
for (int i=0;i<10;i++){
    vetor2[i]=vetor1[9-i];
    printf("Vetor inverso %d",vetor2[i]);
}
return 0;
}

