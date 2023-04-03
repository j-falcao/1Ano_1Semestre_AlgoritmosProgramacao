#include <stdio.h>

int main (void){
	int termos,a, i=1;
	float soma = 0;
	printf("insira a quantidade de termos: ");
	scanf("%d", &termos);
	
	while(i<=termos*2)
	{
		if(i==1)
		{
			printf("1");
			i++;
		}
		else
		{
		
			printf("1/%d", i);
			i=i+2;
		}
	
	soma = soma + 1/(float)i;
	
	if(a==1)
	{
	if(i<=termos*2)
	printf(" + ");
	else if(i>termos*2)
	printf(" = %f", soma);
	else
	continue;
	a--;
	}
	else	
	{
	if(i<=termos*2)
	printf(" - ");
	else if(i>termos*2)
	printf(" = %f", soma);
	else
	continue;
	a++;
	}
	}
}
