#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{	
	int N,i,t,k, h,j;
	printf("Introduza numero de andares da piramide (entre 1 e 9): ");
	scanf("%d", &N);
	
	if(N>1 && N<9)
	{
		for(i=1 ; i<=N ; i++)
		{
			for(j=1;j<=N-i; j++)
			printf(" ");
			for(t=1; t<=i; t++)
			printf("%d",t);
			for(h=t-2; h>=1; h--)
			printf("%d", h);
			for(k=1;k<=i; k++)
			printf(" ");
			
			printf("\n");
		}
		
	}
	else
	return 0;

}
