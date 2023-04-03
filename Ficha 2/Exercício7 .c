#include <stdio.h>

int main(void){
	int i;
	int n1, n2;
	printf("escreva 2 numeros inteiros: ");
	scanf("%d%d", &n1, &n2);

	if(n1<n2){
	for (i=n1; i<=n2; i=i+n1){
			if(i==n2)
				printf("%d e multiplo de %d", n1, n2);
			else
			continue;;
			}	
			printf("Os numeros nao sao multiplos", n1, n2);
			} 
	
	else if (n1>n2){
	for (i=n2; i<=n1; i=i+n2){
			if(i==n1)
				printf("%d e multiplo de %d", n2, n1);
			else
			 	continue;
			}
			printf("Os numeros nao sao multiplos", n1, n2);
			}
	else
	printf("%d e %d sao multiplos de si proprios", n1,n2);
	
	return 0;
	
}
