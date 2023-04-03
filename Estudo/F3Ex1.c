#include <stdio.h>
#define MAX 100

int main (void)
{
	int num, i, v[MAX], j[MAX], nmultiplos=0, nnaomultiplos=0;
	
	printf("Insira um numero inteiro: ");
	scanf("%d", &num);
	
	for(i=100;i>=num;i--)
	{
		if(i%num==0)
		{
			v[100-i] = i;
			nmultiplos += 1;
			j[100-i] = 0;
		}
		
		else
		{
			j[100-i] = i;
			nnaomultiplos += 1;	
			v[100-i] = 0;
		}
	}
	
	printf("Numeros validos: \n");
	i=0;
	while(!(v[i]==num) || v[i] == 0)
		{
		if(!(v[i]==0))
		printf("%d\n",v[i]);
		i++;
		}
	printf("%d\n",v[100-num]);
		
	printf("Numeros nao validos: \n");
	i=0;
	while(!(j[i]==num+1))
		{
		if(!(j[i]==0))
		printf("%d\n",j[i]);
		i++;
		}
	printf("%d\n", j[100-num]);
	
return 0;
	
}
