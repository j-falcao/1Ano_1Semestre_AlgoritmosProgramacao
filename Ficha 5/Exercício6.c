#include <stdio.h>
#define MAX 5

void lervetor(int v[],int tamanho);
void escrevervetor(int v[], int tamanho);
int compararvetor(int v[], int j);

int main (void)
{
	int v[MAX];
	lervetor(v,MAX);
	escrevervetor(v,MAX);
	printf("A posicao e: %d",compararvetor(v,MAX));
	
	
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

void escrevervetor(int v[], int tamanho)
{
	int i;
	for(i = 0; i<tamanho; i++)
	{
		printf("%d", v[i]);
	}
	printf("\n");
}

int compararvetor(int v[], int tamanho)
{
	int indice = 0 , maior = v[0],i ;
	for(i = 0; i<tamanho; i++)
	{
		if(v[i]>=maior)
		{
		maior = v[i];
		indice = i;
		}
	}
	return indice;
}


