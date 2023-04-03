#include <stdio.h>
#include <math.h>
 int main()
{	
	int anos , i, soma=0;
	int CI = 1000;
	float juros = 0.1;
	scanf("%d", &anos);
	
	for(i=1; i<=anos; i++)
	soma=soma+CI*pow((1+juros),i);
	
	printf("%d", soma);
	

	
}
