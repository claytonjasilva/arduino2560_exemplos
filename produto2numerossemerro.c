#include <stdio.h>
/* Referencia: Aprenda a Programar em C, C++ e C#, de Hickson, R.*/
float prod(float x,float y)
{
    return(x*y);
}

int main()
{
    float saida;
    saida=prod(45.2,0.0067);
    printf("A saida e: %f\n",saida);
    return(0);
}