#include <stdio.h>
#define MAX 5

void lervetor(int v[],int tamanho);
int multiplicarvetores(int v[], int j[], int tamanho);

int main (void)
{
	int v[MAX];
	int j[MAX];
	lervetor(v,MAX);
	lervetor(j,MAX);
	printf("%d", multiplicarvetores(v,j,MAX));
	
	
}
void lervetor(int v[],int tamanho)
{
	int i;
	for (i = 0; i<tamanho; i++)
		{
			printf("Insira um numero");
			scanf("%d", &v[i]);
		}
}

int multiplicarvetores(int v[], int j[], int tamanho)
{
	int produto[MAX], i, soma=0;
	for(i = 0; i<tamanho; i++)
	{
		produto[i] = v[i]*j[i];
		soma += produto[i];
	}
	return soma;
}


