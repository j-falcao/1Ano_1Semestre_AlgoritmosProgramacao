#include <stdio.h>

void lervetor(int v[], int tamanho);
void escrevervetor(int v[], int tamanho);
void inversa(int v[], int tamanho);
int maximo(int v[], int tamanho);
int minimo(int v[], int tamanho);
int soma(int v[], int tamanho);
float media(int v[], int tamanho);
int maiormenor(int v[], int tamanho);
void duplicar(int v[],int j[], int tamanho);
void intercalar(int v[], int j[],int p[], int tamanho);

int main ()
{
	int vetor[3], j[3], p[6];
    lervetor(vetor, 3);
    escrevervetor(vetor , 3);
    inversa(vetor,3);
    printf("%d\n",maximo(vetor, 3));
    printf("%d\n", minimo(vetor, 3));
    printf("%d\n", soma(vetor,3));
    printf("%f\n",media(vetor,3));
    duplicar(vetor, j, 3);
    printf("Numeros maiores do que a media: %d\nNumeros menores do que a media: %d\n", maiormenor(vetor,3), 3-maiormenor(vetor,3));
    for (int i = 0; i < 3; i++)
    {
        printf("%d", j[i]);
    }
    printf("\n");
    intercalar(vetor,j,p, 3);
    for(int i=0;i<6;i++)
    {
        printf("\n%d", p[i]);
    }
return 0;
}

void lervetor (int v[], int tamanho)
{
    int i;
    for (i=0;i<tamanho;i++)
    {
        printf("Escreva: ");
        scanf("%d", &v[i]);
    }
}

void escrevervetor(int v[], int tamanho)
{
    int i;
    for(i=0;i<tamanho;i++)
    {
        printf("%d", v[i]);
    }
    printf("\n");
}

void inversa(int v[], int tamanho)
{
    int i;
    for (i=tamanho-1;i>=0;i--)
    {
        printf("%d", v[i]);
    }
    printf("\n");
}

int maximo(int v[], int tamanho)
{
    int i, maior = v[0], cont = 0;
    for (i=0;i<tamanho;i++)
    {
        if(v[i]>maior)
        {
        maior = v[i];
        cont++;
        }
    }
    if(cont>0)
    return maior;
    else
    return v[0];
}

int minimo(int v[], int tamanho)
{
    int i, menor =v[0];
    for(i=0;i<tamanho;i++)
    {
        if(v[i]<menor)
        menor = v[i];
    }
    return menor;
}

int soma(int v[], int tamanho)
{
    int i, soma = 0;
    for(i=0;i<tamanho;i++)
    {
        soma += v[i];
    }
    return soma;
}

float media(int v[], int tamanho)
{
    int i, soma = 0;
    for(i=0;i<tamanho;i++)
    {
        soma += v[i];
    }
    float media = soma/(float)tamanho;
    return media;
}

int maiormenor(int v[], int tamanho)
{
    int i, maior=0;
    for(i=0;i<tamanho;i++)
    {
        if(v[i]>media(v,3))
        maior++;
    }

    return maior;
}
void duplicar(int v[], int j[], int tamanho)
{
    int i;
    for(i=0;i<tamanho;i++)
    {
        j[i] = v[i];
    }
}
void intercalar(int v[], int j[],int p[], int tamanho)
{
    int i, contv=1, contj=tamanho-1;
    for(i=0;i<tamanho*2;i++)
    {
        if(i==0)
        p[i] = v[i];
        else if(i%2==0)
        {
        p[i]=v[contv];
        contv++;
        }
        else
        {
        p[i]=j[contj];
        contj--;
        }
    }
}


