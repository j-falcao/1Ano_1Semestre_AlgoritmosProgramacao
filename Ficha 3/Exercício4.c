#include <stdio.h>
 int main()
{
 	int n,i;
 	printf("insira quantidade de valor a testar: ");
 	scanf("%d", &n);
	for (i=n; i>-1; i=i-1){
	if(i%2==0)
	printf("%d e par\n", i);
	else
	printf("%d e impar\n", i);
							}
	if (n%2==0)	
	printf("%d sao pares e %d" ,n/2, n/2);
	else
	printf("%d sao pares e %d sao impares",((n-1)/2), ((n-1)/2)+1);
	
}
 
