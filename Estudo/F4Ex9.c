#include <stdio.h>

int main (void)
{
	int altura, espacos, num, lado, i;
	
	printf("Insira uma altura: ");
	scanf("%d", &altura);
	
	for(i=1; i<=altura; i++)
	{
			for(espacos=0;espacos<altura-i;espacos++)
			{
				printf(" ");
			}
			
			for(num=1;num<=i;num++)
			{
				printf("%d", num);
			}
			
			for(lado=0;lado<i-1;lado++)
			{
				printf("%d",lado+1);
			}
		printf("\n");
	}
}
