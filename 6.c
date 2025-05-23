#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
srand(time(NULL));

int numero=rand()%100;
int resposta;
do{
    printf ("Escreva um número de 0 a 100 ");
    scanf ("%d",&resposta);
    if (resposta<numero){
        printf("O número digitado é menor do que o número aleátorio, tente novamente:");
    }else if(resposta>numero){
        printf("O número digitado é maior que o número aleatório, tente novamente");
    }
}while(resposta !=numero);{
    printf ("Parabens você acertou o número %d",numero);
}
}
