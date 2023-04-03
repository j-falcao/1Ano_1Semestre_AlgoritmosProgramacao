#include <stdio.h>
#define MAX 10

void lernumeros(int v[], int qt);
float media(int v[], int qt);


int main (void)
{
	int qt,i;
	do
	{
	printf("insira a quantidade de numeros reais positivos: de 1 aet 10 (inclusive) ");
	scanf("%d", &qt);
	}
	while(qt<1 || qt>10);
	
	int v[MAX];
	lernumeros(v,qt);
	for(i=0;i<qt;i++)
	{
		printf("%d\n", *(v+i));
	}
	printf("A media e: %.2f", media(v, qt));
	
return 0;
}


void lernumeros(int v[], int qt)
{
	int i;
	for(i=0; i<qt; i++)
	{
		printf("\nInsira o numero para a posicao [%d]: ", i+1);
		scanf("%d", &v[i]);
	}
}

float media(int v[], int qt)
{
	int soma = 0, i;
	float media = 0;
	
	for(i=0;i<qt;i++)
	{
		soma += v[i];
	}
	
	media = (float)soma/qt;
	
return media;	
	
}





