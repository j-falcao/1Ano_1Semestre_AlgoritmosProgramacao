#include <stdio.h>

int main (void)
{
	int i, inteiro, multiplos;
	
	printf("Insira um numero inteiro: ");
	scanf("%d", &inteiro);
	printf("Insira a quantidad de multiplos: ");
	scanf("%d", &multiplos);
	
	for(i=inteiro; i<=inteiro*multiplos; i+=inteiro)
	printf("%d\n", i);
}
