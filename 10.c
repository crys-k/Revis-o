#include <stdio.h>

int main()
{
char vetor [10];
int cont=0;

for (int i=0;i<10;i++){
    printf("Escreva uma para colocar na posição %d do vetor",i);
    scanf(" %c",&vetor[i]);
}
int tamanho=sizeof(vetor)/sizeof(vetor[0]);
for (int i =0;i<tamanho;i++){
    printf("\n%c\n",vetor[i]);
}

for (int i=0;i<tamanho;i++){
    switch(vetor[i]){
        case 'a':
         cont+=1;
        break;
        case 'e':
         cont+=1;
        break;
        case 'i':
         cont+=1;
        break;
        case 'o':
         cont+=1;
        break;
        case 'u':
         cont+=1;
        break;
    }
}
printf("A quantidade de vogais nessa string é de %d",cont);

return 0;
}
