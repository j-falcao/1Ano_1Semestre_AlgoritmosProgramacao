#include <stdio.h>

void lerA(int v[], int j[], int tamanho);
void concatenar(int v[],int j[], int resultado[] ,int tamanho); 

int main (void)
{
int v[4], j[4], resultado[8];

lerA(v,j, 4);	
concatenar(v, j, resultado, 8); 
}

void lerA(int v[], int j[], int tamanho)
{
	int i;
	for (i = 0; i<tamanho; i++)
	{
		printf("insira valor para a posicao %d para o vetor v: ", i+1);
		scanf("%d", &v[i]);
	}
	for (i = 0; i<tamanho; i++)
	{
		printf("insira valor para a posicao %d para o vetor j: ", i+1);
		scanf("%d", &j[i]);
	}
}

void concatenar(int v[], int j[], int resultado[], int tamanho)
{
	int conti = 0, contj = 0, i;
	for(i = 0;i<tamanho;i++)
	{
	if(i%2==0)
	{
		resultado[i] = v[conti];
		conti++;
	}
	else
	{
		resultado[i] = j[3-contj];
		contj++;
	}
	
		printf("%d", resultado[i]);
	}

}