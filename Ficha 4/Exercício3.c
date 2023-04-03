#include <stdio.h>

int main (void){
	int valor,i;
	printf("insira um numero inteiro: ");
	scanf("%d", &valor);
	printf("Os divisores de %d sao:\n", valor);
	for(i=valor; i>0; i--)
	{
		if(valor%i==0)
		printf("%d\n", i);
		else
		continue;
	}
	return 0;
}

