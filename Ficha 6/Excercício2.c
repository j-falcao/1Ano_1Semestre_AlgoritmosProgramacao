#include <stdio.h>
#define MAX 40
int main (void)
{
	char palavra[30];
	int i;
	printf("Escreva uma palavra: ");
	scanf("%s", palavra);
	
	for(i = 0; i<2 ; i++)
	{
		printf("%c", palavra[i]);
	}
return 0;
}
