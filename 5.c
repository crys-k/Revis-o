#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero = 1, acumulado = 0;

    while (numero != 0) {
        printf("Digite um número para somar (0 para sair): ");
        scanf("%d", &numero);

        if (numero != 0) {
            acumulado += numero;
            printf("Total acumulado: %d\n", acumulado);
        }
    }

    printf("\nSoma final acumulada: %d\n", acumulado);
    printf("Programa encerrado.\n");

    return 0;
}

