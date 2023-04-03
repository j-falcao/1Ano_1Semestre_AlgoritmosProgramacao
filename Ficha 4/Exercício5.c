#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    // 1ª Versão
    int i, j, n=0, num, den;
    printf("Introduza um valor");
    scanf_s("%d\n", &n);
    double s = 0.0;
    char c;
    for (i = 0; i <=n; ++i)
    {
        num = 1;
        for (j = 1; j < i; j++)
        {
            num = num * 2; 

        }
        den = 1; //denominador
        for (j = 1; j < i; j++)
        {
            den = den * j;
        }
        s = s + num * 1, 0 / den;
    }
    printf("o somatorio e %d", s);




    //2ª Versão
    int i, n;
    float s = 0.0, termo = 1.0;
    char c;
    printf("Introduza o valor:");
    scanf_s("%d\n", &n);
    for (i = 1; i <= n; i++)
    {
        termo = 2 * termo / i;
        s += termo;
        printf("\tTermo %d = %0.4f\n", i, termo);
    }
    printf("Somatorio de i=1 ate %d de 2 levantado a i / i fatorial = %0.4f", n, s);

}
