#include <stdio.h>
 int main()
{	
	int r;
	printf("insira um numero de ramos: ");
	scanf("%d",&r);
	int i;
	int j;
	int t;
	for (i=1; i<=r;i=i+1)
	{
		printf("\n");
		for(j=1; j<=r-i; j++)
		{
		printf(" ");
		
		}
		for (t=1; t<=i; t++)
		printf("*");
		
		
	}

	
}
 
