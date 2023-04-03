#include <stdio.h>

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
}

void inverter(int n)
{
    if (n > 0)
    {
        printf("%d", n % 10);
        inverter(n / 10);
    }
}