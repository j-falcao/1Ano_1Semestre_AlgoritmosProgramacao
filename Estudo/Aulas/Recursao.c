#include <stdio.h>

int main ()
{
    int n = 3;
    for (int i = 0; i < 1; i++)
    {
    printf("%d pornhub", ola(n));
    }
}

int ola(int n)
{
    if (n==1)
    return 1;
    else
    return ola(n-1) + 1;
}