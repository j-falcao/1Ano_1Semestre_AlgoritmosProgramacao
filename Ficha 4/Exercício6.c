#include <stdio.h>

int main (void){
	int n, primeiro, i, soma = 0;
	printf("insira a quantidade de numeros a somar: ");
	scanf("%d", &n);
	printf("Onde comeca a somar? ");
	scanf("%d", &primeiro);

	for(i=primeiro; i<=primeiro+n; i++)
	{
		soma = soma + i;
		printf("%d\n", soma);
	}
}
