#include <stdio.h>
#include <stdlib.h>

int multiplicar(int a, int b);

int main()
{
    printf("%d",multiplicar(3,3));

    return 0;
}

int multiplicar(int a, int b)
{
    int resultado=0;
    resultado=a*b;
    return resultado;
}
