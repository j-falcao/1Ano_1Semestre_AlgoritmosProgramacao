#include <stdio.h>

int main (void)
{
	int soma=0, N;
	
	do
	{
	printf("insira um valor positivo: ");
	scanf("%d", &N);
	}
	while(N<0);
	
	
	int i = 0;
	do
	{
		i+=2;
		soma +=i;
		if(soma<=N)
		printf("%d",i);
		if(!(soma+i+2>N))
		printf("+");
	}
	while(soma<N);
	
	printf(" <= %d\n",N);
	if(!(soma==N))
	printf("O numero P e: %d", i-2);
	else
	printf("O numero p e: %d", i);
}
