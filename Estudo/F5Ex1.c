#include <stdio.h>
#define MAX 10

int isdigito(char x);
void lervetor(char v[], int tamanho);
void tolowere(char v[], int tamanho);

int main (void)
{
	char x, v[MAX];
	
	printf("Insira um caracter: ");
	scanf("%c", &x);
	if(isdigito(x))
	printf("\nO caracter e um digito\n");
	else
	printf("\nO caracter nao e um digito\n");
	
	lervetor(v,MAX);
	tolowere(v,MAX);
}

int isdigito(char x)
{
	if(x>=48 && x<=57)
	return 1;
	else
	return 0;
}

void lervetor(char v[], int tamanho)
{
	int i;
	for(i=0;i<tamanho;i++)
	{
		printf("Insira valor: ");
		scanf(" %c", &v[i]);
	}
}
void tolowere(char v[], int tamanho)
{
	int i;
	for(i=0;i<tamanho;i++)
	{
	if(v[i]>=65 && v[i]<=90)
	v[i] += 32;
	else 
	continue;
	}
	for(i=0;i<tamanho;i++)
	printf("%c", v[i]);
}
