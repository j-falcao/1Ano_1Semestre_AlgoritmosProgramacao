#include <stdio.h>

int main ()
{
    int v[10],i;
    float soma = 0;
    for (i=0;i<10;i++)
    {
       scanf("%f",&v[i]); 
    }
        for (i=0;i<10;i++)
    {
       soma += v[i];
    }
    soma = soma/10;
    printf("%f", soma);
    
}