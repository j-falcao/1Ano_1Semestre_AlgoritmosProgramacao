#include <stdio.h>

int main (void)
{
	int n, N, i;
	printf("ESTE E O JOGO DO PALPITE. DEVE SER ESCRITO UM NUMERO E UTRA PESSOA EM DE O ADIVINHAR COM A AJUDA DE PISTAS DADAS PELO PROGRAMA!\n\n");
	do
	{
	printf("Insira o numero a ser adivinhado entre 1 e 50: ");
	scanf("%d", &n);
	}
	while(n<1 || n>50);
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	
	for(i=2;i<=10;i++)
	{
		if(n%i==0)
		{
		printf("Dica: O seu numero e multiplo de %d\n", i);
		break;
		}
		else if(n==1)
		{
		printf("Dica: O seu numero e multiplo de 1\n");
		break;	
		}	
	}
	
	for(i=10;i>0;i--)
	{
	printf("Tenta adivinhar o numero (restam %d chances): ", i);
	scanf("%d", &N);
	
	if(N<n)
		printf("\nDica: O numero e maior do que %d\n ");
	else if(N>n)
		printf("\nDica: O numero e menor do que %d\n");
	else
	{
		printf("Parabens! Encontrou o numero");
		break;
	}
	
	}

return 0;
}
