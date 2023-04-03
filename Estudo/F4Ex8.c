#include <stdio.h>

int main (void)
{
	int ramos, espacos, asteriscos, linha;
	
	printf("Insira a quantidade de ramos: ");
	scanf("%d", &ramos);
	
	for(linha=1;linha<=ramos;linha++)
	{
		for(espacos=0;espacos<ramos-linha;espacos++)
		{
			printf(" ");
		}
		
		for(asteriscos=0;asteriscos<linha;asteriscos++)
		{
			printf("*");
		}
		printf("\n");
	}
}
