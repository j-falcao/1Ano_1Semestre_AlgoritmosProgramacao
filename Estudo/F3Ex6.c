#include <stdio.h>

int main (void)
{	

	int pares = 0, impares = 0, n;
	printf("Introduza um numero inteiro positivo: ");
	scanf("%d",&n);
	
	do
	{
		if(n%2==0)
		pares += 1;
		else
		impares += 1;
		
		n--;
	}
	while(n>=0);
	
	printf("Quantidade de numeros pares: %d\n", pares);
	printf("Quantidade de numeros impares: %d", impares);

return 0;
}
