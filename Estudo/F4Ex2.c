#include <stdio.h>

int main (void)
{
	char continuar;
	int i,j;
	
	printf("Enter para iniciar: ");
	scanf("%c", &continuar);
	
	for (i=2;i<=10;i++)
	{
		for (j=1;j<=10;j++)
		{
			printf("\n%d * %d = %d\n",i,j,i*j);
		}
		printf("Enter para continuar: ");
		scanf("%c", &continuar);
	}

return 0;
}
