#include <stdio.h>
void lervetor(int v[], int tamanho);
void Escrevervetor(int v[], int tamanho);
void permcirc(int v[], int tamanho);
void troca(int v[], int tamanho, int a, int b);

int main(void)
{
	int n;
	printf("insira o tamanho");
	scanf("%d", &n);
	int x[n];
	lervetor(x,n);
	Escrevervetor(x,n);
	for(int i=0;i<n;i++)
	{permcirc(x,n);
	printf("\n");}
	troca(x,n,1,2);
}

void lervetor(int v[], int tamanho)
{
	int i;
	for(i = 0;i<tamanho;i++)
	{
		printf("Insira um valor: ");
		scanf("%d", &v[i]);
	}
}

void Escrevervetor(int v[], int tamanho)
{
	int i;
	for(i = 0; i<tamanho; i++)
	{
		printf("%d", v[i]);
	}
	printf("\n");
}
void permcirc(int v[], int tamanho)
{
	int i;
	int cont = tamanho-1;
	int aux = v[0];
	for (i=0; i<tamanho; i++)
	{
		if(i==0)
		v[i]=v[1];
		else if(i==cont)
		v[i] = aux;
		else 
		v[i]=v[i+1];
	}
	for (i = 0; i<tamanho;i++)
		printf("%d", v[i]);
}

void troca(int v[], int tamanho, int a, int b)
{
	int aux = v[a], i;
	for (i=0; i<tamanho; i++)
	{
		if(i==a)
		v[a] = v[b];
		else if (i==b)
		v[b] = aux;
		else 
		continue;
	}
	for(i=0; i<tamanho; i++)
	{
		printf("%d", v[i]);
	}
	printf("\n");
}


