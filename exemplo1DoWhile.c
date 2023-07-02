// O programa le um número inteiro nao negativo
// Determina a soma de todos os numeros inferiores ao numero lido

#include <stdio.h>

int main() {
    int numero, cont = 0, S = 0;
    printf("Digite o numero inteiro nao negativo: ");
    scanf("%i",&numero);
    do {
        S += numero;
        cont++;
    } while (cont<numero);
    printf("\nA soma dos numeros eh %i",S);

    return 0;
}


