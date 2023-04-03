#include <stdio.h>

int main()
{
    int o=0, p=9;
    troca(&o,&p);
    printf("%d %d", o,p);
}

void troca(int* x, int* y)
{
    int aux = *x;
    *x = *y;
    *y = aux;
}