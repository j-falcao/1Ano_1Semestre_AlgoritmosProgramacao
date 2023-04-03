#include <stdio.h>

int main(){
	int n1,n2;
	printf("Escreva 2 numeros interiros: ");
	scanf("%d%d", &n1, &n2);
	int i;
	if (n1<n2){
		if((n2-1)%2==0){
		n2 = n2-1;}
		else
		n2=n2;	
	printf("os numeros pares sao: \n");
	for(i=n2; i>=n1; i=i-2 ){
	printf("%d\n", i);}}
	else 
	printf("nao tem números pares");
	}
	

	

 
