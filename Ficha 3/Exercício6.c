#include <stdio.h>

int main (void){
	int n;
	printf("insira um numero inteiro positivo: ");
	scanf("%d", &n);

	if(n>0)
	{
		int i;
		for(i=n; i>-1; i = i-1)
		{
			if(i%2==0)
			printf("Par------>   %d\n", i);
			else
			printf("Impar---->   %d\n", i);
		}	
		
		if(n%2==0)
		printf("existem %d numeros pares e %d numeros impares", n/2, n/2);
		else
		printf("existem %d numeros pares e %d numeros impares", (n-1)/2, ((n-1)/2)+1);
	}
}
