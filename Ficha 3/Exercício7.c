#include <stdio.h>

int main (void){
	int n,m,i;
	printf("insira um numero inteiro positivo: ");
	scanf("%d", &n);
	printf("Quantos multiplos? ");
	scanf("%d", &m);

	for(i=0; i<=m*n; i=i+n)
	{
	printf("%d\n", i);
	}
}
