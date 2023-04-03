#include <stdio.h>
#define MAX 3
void lervetor(int v[MAX][MAX], int tamanho);
void Escrevervetor(int v[MAX][MAX], int tamanho);
void minimo(int v[MAX][MAX], int tamanho);
void simetrica(int v[MAX][MAX], int tamanho);
void tranposta(int v[MAX][MAX], int tamanho);
void soma(int v[MAX][MAX], int j[MAX][MAX], int tamanho);

int main(void)
{
	int x[MAX][MAX];
	int y[MAX][MAX];
	lervetor(x,MAX);
	Escrevervetor(x,MAX);
	minimo(x,MAX);
	simetrica(x,MAX);
	tranposta(x,MAX);
	soma(x,y,MAX);
}

void lervetor(int v[MAX][MAX], int tamanho)
{
	int i,j;
	for(i=0;i<tamanho;i++)
	{
		for(j=0;j<tamanho;j++)
		{
		printf("Insira um numero para a posicao[%d][%d]: ",i,j);
		scanf("%d", &v[i][j]);
		}
	}
}

void Escrevervetor(int v[MAX][MAX], int tamanho)
{
	int i,j;
	for(i=0; i<tamanho; i++)
	{
		for(j=0;j<tamanho;j++)
		{
			printf("%d\t", v[i][j]);
		}
		printf("\n");
	}
}

void minimo(int v[MAX][MAX], int tamanho)
{
	int i, j, menor=v[0][0
	];
	for(i=0;i<tamanho;i++)
	{
		for(j=0;j<tamanho;j++)
		{
			if(v[i][j]<=menor)
			menor = v[i][j];
		}
		
	}
	printf("O valor minimo da matriz e: %d\n", menor);
}

void simetrica(int v[MAX][MAX], int tamanho)
{
	int i,j, soma=0;
	for(i=0;i<tamanho;i++)
	{
		for(j=0;j<tamanho;j++)
		{
			if(v[i][j]==v[j][i])
			soma+=1;
		}
	}
	if(soma==tamanho*tamanho)
	printf("A matriz e simetica!\n");
	else
	printf("A matriz NAO e simetrica!\n");
}

void tranposta(int v[MAX][MAX], int tamanho)
{
	int i,j;
	for(i=0;i<tamanho;i++)
	{
		for(j=0;j<tamanho;j++)
		{
			printf("%d\t", v[j][i]);
		}
		printf("\n");
	}
}
void soma(int v[MAX][MAX], int y[MAX][MAX], int tamanho)
{
	int i,j;
	for(i=0;i<tamanho;i++)
	{
		for(j=0;j<tamanho;j++)
		{
			printf("Escreva um numero para a posicao[%d][%d]: ", i,j);
			scanf("%d",&y[i][j]);
		}	
	}
	int s[MAX][MAX];
		for(i=0;i<tamanho;i++)
	{
		for(j=0;j<tamanho;j++)
		{
			s[i][j] = v[i][j]+y[i][j];
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}

}







