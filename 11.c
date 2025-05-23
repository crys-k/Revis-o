#include <stdio.h>
#include <stdlib.h>

int main() {
char string1 [10];
char string2 [10];
int contador=0;
for (int i=0;i<10;i++){
    printf("Escreva uma para colocar na posição %d da string",i);
    scanf(" %c",&string1[i]);
}
for (int i=0;i<10;i++){
    printf("Escreva uma para colocar na posição %d da string",i);
    scanf(" %c",&string2[i]);
}
int tamanho=sizeof(string2)/sizeof(string2[0]);


for (int i=0;i<10;i++){
    if (string1[i]!=string2[i]){
        contador+=1;
    }
}
if (contador != tamanho){
    printf ("String são iguais");
}else {
    printf("String são diferentes");
}
return 0;
}
