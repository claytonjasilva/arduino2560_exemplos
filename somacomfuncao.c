#include <stdio.h>
/* Referencia: Aprenda a Programar em C, C++ e C#, de Hickson, R.*/
int x;
main()
{
    int a;
    printf("Digite um valor: ");
    scanf("%d",&a);
    x=2*a+3;
    printf("%d e %d",x,soma(a)); /* Atenção para a ordem de execução dos argumentos*/
}

soma(z)
int z; /* Declara o tipo do parâmetro da função */
{
    x=2*x+z;
    return(x);
}