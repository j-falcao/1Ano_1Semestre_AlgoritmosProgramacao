#include <stdio.h>

void troca(int *n, int *m);

int main (void)
{
	int num1, num2, *n, *m;
	printf("Insira dois numeros: ");
	scanf("%d%d", &num1,&num2);
	
	n = &num1;
	m = &num2;
	troca(n,m);
	printf("%d %d", num1, num2);
}

void troca(int *n, int *m)
{
	int aux = *n;
	*n = *m;
	*m = aux;
}


